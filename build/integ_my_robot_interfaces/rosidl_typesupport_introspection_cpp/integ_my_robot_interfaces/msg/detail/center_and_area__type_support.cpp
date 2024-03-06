// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from integ_my_robot_interfaces:msg/CenterAndArea.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "integ_my_robot_interfaces/msg/detail/center_and_area__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace integ_my_robot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CenterAndArea_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) integ_my_robot_interfaces::msg::CenterAndArea(_init);
}

void CenterAndArea_fini_function(void * message_memory)
{
  auto typed_message = static_cast<integ_my_robot_interfaces::msg::CenterAndArea *>(message_memory);
  typed_message->~CenterAndArea();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CenterAndArea_message_member_array[3] = {
  {
    "center",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(integ_my_robot_interfaces::msg::CenterAndArea, center),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "area",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(integ_my_robot_interfaces::msg::CenterAndArea, area),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "detected",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(integ_my_robot_interfaces::msg::CenterAndArea, detected),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CenterAndArea_message_members = {
  "integ_my_robot_interfaces::msg",  // message namespace
  "CenterAndArea",  // message name
  3,  // number of fields
  sizeof(integ_my_robot_interfaces::msg::CenterAndArea),
  CenterAndArea_message_member_array,  // message members
  CenterAndArea_init_function,  // function to initialize message memory (memory has to be allocated)
  CenterAndArea_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CenterAndArea_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CenterAndArea_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace integ_my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<integ_my_robot_interfaces::msg::CenterAndArea>()
{
  return &::integ_my_robot_interfaces::msg::rosidl_typesupport_introspection_cpp::CenterAndArea_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, integ_my_robot_interfaces, msg, CenterAndArea)() {
  return &::integ_my_robot_interfaces::msg::rosidl_typesupport_introspection_cpp::CenterAndArea_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
