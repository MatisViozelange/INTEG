import rclpy
from rclpy.node import Node
from integ_my_robot_interfaces.msg import CenterAndArea
from std_msgs.msg import Float64
import numpy as np
import math
from sensor_msgs.msg import JointState

class Tracker(Node):
    def __init__(self):
        super().__init__('Tracker')

        #a joint state subscriber
        self.joint_subscriber = self.create_subscription(JointState, '/scara/joint_states', self.joint_states_callback, 10)

        # a subscriber to the DetectedFeature topic
        self.feature_subscriber = self.create_subscription(CenterAndArea, 'center_and_area_detected', self.listener_callback, 10)
        
        # publisher of the joint1 position command
        self.joint1_publisher_ = self.create_publisher(Float64, '/scara/joint_1_cmd_pos', 10)
        # publisher of the joint2 position command
        self.joint2_publisher_ = self.create_publisher(Float64, '/scara/joint_2_cmd_pos', 10)

    def joint_states_callback(self, msg):
        self.q1 = msg.position[1]
        self.q2 = msg.position[2]

    def listener_callback(self, msg):

        joint1_command = Float64()
        joint2_command = Float64()

        l1 = 0.28002 # the length of the first link
        l2 = 0.28002 # the length of the second link

        #implement the control law here


def main(args=None):
    rclpy.init(args=args)
    tracker = Tracker()
    # Add your main code here
    rclpy.spin(tracker)
    tracker.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()