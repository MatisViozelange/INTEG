import rclpy
from rclpy.node import Node
from integ_my_robot_interfaces.msg import CenterAndArea
from std_msgs.msg import Float64
import numpy as np
import math
from sensor_msgs.msg import JointState
from cvxopt import matrix, solvers

class Tracker(Node):
    def __init__(self):
        super().__init__('Tracker')

        #a joint state subscriber
        self.joint_subscriber = self.create_subscription(JointState, '/scara/joint_states', self.joint_states_callback, 10)

        # a subscriber to the DetectedFeature topic
        self.feature_subscriber = self.create_subscription(CenterAndArea, 'center_and_area_detected', self.listener_callback, 10)
        
        # publisher of the joint1 position command
        self.joint1_publisher_ = self.create_publisher(Float64, '/scara/joint_1_cmd_vel', 10)
        # publisher of the joint2 position command
        self.joint2_publisher_ = self.create_publisher(Float64, '/scara/joint_2_cmd_vel', 10)

        self.latest_joint1_command = Float64()
        self.latest_joint2_command = Float64()

    def joint_states_callback(self, msg):
        self.q1 = msg.position[1]
        self.q2 = msg.position[2]

    def listener_callback(self, msg):

        joint1_command = Float64()
        joint2_command = Float64()

        if msg.detected == True : # if a feature is detected

            try : # implement the command law here

                print("Feature detected")

                # Interaction matrix
                alpha_x = 184.83640670776367 # the conversion factor from pixels to meters in the x direction
                alpha_y = alpha_x # the conversion factor from pixels to meters in the y direction

                y = (msg.center.y - 200)/alpha_y
                x = (msg.center.x - 320)/alpha_x
                print(f'center: {msg.center.x}, {msg.center.y}')
                print(f'x: {x}, y: {y}')

                Z = 0.11 # the distance from the camera to the target in meters

                L = np.array([[-1/Z, 0, x/Z, x*y, -(1+x*x), y], [0, -1/Z, y/Z, 1+y*y, -x*y, -x]])

                # Transformation matrix from the camera frame to the end effector frame
                # Rotation matrices
                Rcam_camOpt = np.array([[0, 0, 1], [-1, 0, 0], [0, -1, 0]])
                Rcam_EEframe = np.array([[0, 0, 1], [0, 1, 0], [-1, 0, 0]])
                RcamOpt_EEframe = np.dot( Rcam_EEframe, Rcam_camOpt)

                # Translation vector
                translation_ee_camera_x = np.array([0, -0.01, 0])  # Assuming this vector represents the translation

                # Skew-symmetric matrix of the translation vector
                tx, ty, tz = translation_ee_camera_x
                t_skew = np.array([[0, -tz, ty], [tz, 0, -tx], [-ty, tx, 0]])

                # Upper-right block: [t]x.R
                txR = np.dot(t_skew, RcamOpt_EEframe)

                # Constructing W as a 6x6 matrix
                W = np.block([[RcamOpt_EEframe, txR],[np.zeros((3, 3)), RcamOpt_EEframe]])

                # Rotation matrix from the end effector frame to the base frame
                R0_ee = np.array([[np.cos(self.q1+self.q2), -np.sin(self.q1+self.q2), 0], [np.sin(self.q1+self.q2), np.cos(self.q1+self.q2), 0], [0, 0, 1]])

                R = np.block([[R0_ee, np.zeros((3,3))], [np.zeros((3,3)), R0_ee]]) # the transformation matrix from the end effector frame to the base frame
                
                # Jaccobian matrix of RR robot
                l1 = 0.28002 # the length of the first link
                l2 = 0.28002 # the length of the second link

                J = np.array([[-l1*np.sin(self.q1)-l2*np.sin(self.q1+self.q2), -l2*np.sin(self.q1+self.q2)],
                            [l1*np.cos(self.q1)+l2*np.cos(self.q1+self.q2), l2*np.cos(self.q1+self.q2)],
                            [0, 0], [0, 0], [0, 0], [1, 1]])  
                
                # Js matrix
                Js = np.dot(L,np.dot(W,np.dot(R,J)))
                
                # Optimal q_dot
                s = np.array([x, y])
                lambda_ = 1

                # Calculate P and q for the QP problem
                P = matrix(np.dot(Js.T, Js))  # P = Js^TJs
                q = matrix(-lambda_ * np.dot(Js.T, s))  # q = -Js^T * lambda * s

                care_param = 0.8
                #first task : joint limits
                G1 = np.array([[1, 0], [-1, 0], [0, 1], [0, -1]])
                q1_max = care_param*math.pi
                q1_min = care_param*0
                q2_max = care_param*2
                q2_min = care_param*-2
                alpha = 1

                h1 = np.array([alpha*(q1_max - self.q1), -alpha*(q1_min - self.q1), alpha*(q2_max - self.q2), -alpha*(q2_min - self.q2)])

                #second task : joint velocity limits
                G2 = np.array([[1, 0], [-1, 0], [0, 1], [0, -1]])
                q_dot_max = care_param*1

                h2 = care_param*np.array([q_dot_max, q_dot_max, q_dot_max, q_dot_max])

                # Constraints definition

                # Reshape h1 and h2 to ensure they are column vectors
                h1 = h1.reshape(-1, 1)  
                h2 = h2.reshape(-1, 1)  
                G = np.vstack((G1, G2)).astype(np.float64)  # Ensure G is double precision
                G = matrix(G)  # Convert to cvxopt matrix
                h = np.vstack((h1, h2)).astype(np.float64)  # Similarly, ensure h is double precision
                h = matrix(h)
                A = None
                b = None

                # Solve QP problem
                sol = solvers.qp(P, q, G, h, A, b)

                # Extract and print the optimal q_dot
                q_dot = sol['x']

                joint1_command.data = q_dot[0]
                joint2_command.data = q_dot[1]

                #print the commands in degrees
                self.get_logger().info(f'Joint1 Command: {math.degrees(joint1_command.data)}')
                self.get_logger().info(f'Joint2 Command: {math.degrees(joint2_command.data)}')
                self.joint1_publisher_.publish(joint1_command)
                self.joint2_publisher_.publish(joint2_command)

                self.latest_joint1_command = joint1_command
                self.latest_joint2_command = joint2_command

            except Exception as e:
                self.get_logger().error(f'calculating command: {e}')
                return

        else: #if no feature is detected publish the latest joint commands again
            self.joint1_publisher_.publish(self.latest_joint1_command)
            self.joint2_publisher_.publish(self.latest_joint2_command)
            self.get_logger().info('No feature detected')


def main(args=None):
    rclpy.init(args=args)
    tracker = Tracker()
    # Add your main code here
    rclpy.spin(tracker)
    tracker.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()