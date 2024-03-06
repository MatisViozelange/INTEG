// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from integ_my_robot_interfaces:msg/CenterAndArea.idl
// generated code does not contain a copyright notice

#ifndef INTEG_MY_ROBOT_INTERFACES__MSG__DETAIL__CENTER_AND_AREA__TRAITS_HPP_
#define INTEG_MY_ROBOT_INTERFACES__MSG__DETAIL__CENTER_AND_AREA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "integ_my_robot_interfaces/msg/detail/center_and_area__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace integ_my_robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CenterAndArea & msg,
  std::ostream & out)
{
  out << "{";
  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
    out << ", ";
  }

  // member: area
  {
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
    out << ", ";
  }

  // member: detected
  {
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CenterAndArea & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }

  // member: area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
    out << "\n";
  }

  // member: detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CenterAndArea & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace integ_my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use integ_my_robot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const integ_my_robot_interfaces::msg::CenterAndArea & msg,
  std::ostream & out, size_t indentation = 0)
{
  integ_my_robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use integ_my_robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const integ_my_robot_interfaces::msg::CenterAndArea & msg)
{
  return integ_my_robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<integ_my_robot_interfaces::msg::CenterAndArea>()
{
  return "integ_my_robot_interfaces::msg::CenterAndArea";
}

template<>
inline const char * name<integ_my_robot_interfaces::msg::CenterAndArea>()
{
  return "integ_my_robot_interfaces/msg/CenterAndArea";
}

template<>
struct has_fixed_size<integ_my_robot_interfaces::msg::CenterAndArea>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<integ_my_robot_interfaces::msg::CenterAndArea>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<integ_my_robot_interfaces::msg::CenterAndArea>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTEG_MY_ROBOT_INTERFACES__MSG__DETAIL__CENTER_AND_AREA__TRAITS_HPP_
