// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from integ_my_robot_interfaces:msg/CenterAndArea.idl
// generated code does not contain a copyright notice

#ifndef INTEG_MY_ROBOT_INTERFACES__MSG__DETAIL__CENTER_AND_AREA__BUILDER_HPP_
#define INTEG_MY_ROBOT_INTERFACES__MSG__DETAIL__CENTER_AND_AREA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "integ_my_robot_interfaces/msg/detail/center_and_area__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace integ_my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_CenterAndArea_area
{
public:
  explicit Init_CenterAndArea_area(::integ_my_robot_interfaces::msg::CenterAndArea & msg)
  : msg_(msg)
  {}
  ::integ_my_robot_interfaces::msg::CenterAndArea area(::integ_my_robot_interfaces::msg::CenterAndArea::_area_type arg)
  {
    msg_.area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::integ_my_robot_interfaces::msg::CenterAndArea msg_;
};

class Init_CenterAndArea_center
{
public:
  Init_CenterAndArea_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CenterAndArea_area center(::integ_my_robot_interfaces::msg::CenterAndArea::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_CenterAndArea_area(msg_);
  }

private:
  ::integ_my_robot_interfaces::msg::CenterAndArea msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::integ_my_robot_interfaces::msg::CenterAndArea>()
{
  return integ_my_robot_interfaces::msg::builder::Init_CenterAndArea_center();
}

}  // namespace integ_my_robot_interfaces

#endif  // INTEG_MY_ROBOT_INTERFACES__MSG__DETAIL__CENTER_AND_AREA__BUILDER_HPP_
