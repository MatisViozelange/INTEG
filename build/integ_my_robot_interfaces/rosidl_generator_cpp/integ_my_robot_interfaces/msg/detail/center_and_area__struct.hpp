// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from integ_my_robot_interfaces:msg/CenterAndArea.idl
// generated code does not contain a copyright notice

#ifndef INTEG_MY_ROBOT_INTERFACES__MSG__DETAIL__CENTER_AND_AREA__STRUCT_HPP_
#define INTEG_MY_ROBOT_INTERFACES__MSG__DETAIL__CENTER_AND_AREA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__integ_my_robot_interfaces__msg__CenterAndArea __attribute__((deprecated))
#else
# define DEPRECATED__integ_my_robot_interfaces__msg__CenterAndArea __declspec(deprecated)
#endif

namespace integ_my_robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CenterAndArea_
{
  using Type = CenterAndArea_<ContainerAllocator>;

  explicit CenterAndArea_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area = 0l;
      this->detected = false;
    }
  }

  explicit CenterAndArea_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area = 0l;
      this->detected = false;
    }
  }

  // field types and members
  using _center_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _center_type center;
  using _area_type =
    int32_t;
  _area_type area;
  using _detected_type =
    bool;
  _detected_type detected;

  // setters for named parameter idiom
  Type & set__center(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__area(
    const int32_t & _arg)
  {
    this->area = _arg;
    return *this;
  }
  Type & set__detected(
    const bool & _arg)
  {
    this->detected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    integ_my_robot_interfaces::msg::CenterAndArea_<ContainerAllocator> *;
  using ConstRawPtr =
    const integ_my_robot_interfaces::msg::CenterAndArea_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<integ_my_robot_interfaces::msg::CenterAndArea_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<integ_my_robot_interfaces::msg::CenterAndArea_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      integ_my_robot_interfaces::msg::CenterAndArea_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<integ_my_robot_interfaces::msg::CenterAndArea_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      integ_my_robot_interfaces::msg::CenterAndArea_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<integ_my_robot_interfaces::msg::CenterAndArea_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<integ_my_robot_interfaces::msg::CenterAndArea_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<integ_my_robot_interfaces::msg::CenterAndArea_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__integ_my_robot_interfaces__msg__CenterAndArea
    std::shared_ptr<integ_my_robot_interfaces::msg::CenterAndArea_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__integ_my_robot_interfaces__msg__CenterAndArea
    std::shared_ptr<integ_my_robot_interfaces::msg::CenterAndArea_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CenterAndArea_ & other) const
  {
    if (this->center != other.center) {
      return false;
    }
    if (this->area != other.area) {
      return false;
    }
    if (this->detected != other.detected) {
      return false;
    }
    return true;
  }
  bool operator!=(const CenterAndArea_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CenterAndArea_

// alias to use template instance with default allocator
using CenterAndArea =
  integ_my_robot_interfaces::msg::CenterAndArea_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace integ_my_robot_interfaces

#endif  // INTEG_MY_ROBOT_INTERFACES__MSG__DETAIL__CENTER_AND_AREA__STRUCT_HPP_
