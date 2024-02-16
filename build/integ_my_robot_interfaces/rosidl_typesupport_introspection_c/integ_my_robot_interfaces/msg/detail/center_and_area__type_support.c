// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from integ_my_robot_interfaces:msg/CenterAndArea.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "integ_my_robot_interfaces/msg/detail/center_and_area__rosidl_typesupport_introspection_c.h"
#include "integ_my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "integ_my_robot_interfaces/msg/detail/center_and_area__functions.h"
#include "integ_my_robot_interfaces/msg/detail/center_and_area__struct.h"


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/point.h"
// Member `center`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void integ_my_robot_interfaces__msg__CenterAndArea__rosidl_typesupport_introspection_c__CenterAndArea_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  integ_my_robot_interfaces__msg__CenterAndArea__init(message_memory);
}

void integ_my_robot_interfaces__msg__CenterAndArea__rosidl_typesupport_introspection_c__CenterAndArea_fini_function(void * message_memory)
{
  integ_my_robot_interfaces__msg__CenterAndArea__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember integ_my_robot_interfaces__msg__CenterAndArea__rosidl_typesupport_introspection_c__CenterAndArea_message_member_array[2] = {
  {
    "center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(integ_my_robot_interfaces__msg__CenterAndArea, center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(integ_my_robot_interfaces__msg__CenterAndArea, area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers integ_my_robot_interfaces__msg__CenterAndArea__rosidl_typesupport_introspection_c__CenterAndArea_message_members = {
  "integ_my_robot_interfaces__msg",  // message namespace
  "CenterAndArea",  // message name
  2,  // number of fields
  sizeof(integ_my_robot_interfaces__msg__CenterAndArea),
  integ_my_robot_interfaces__msg__CenterAndArea__rosidl_typesupport_introspection_c__CenterAndArea_message_member_array,  // message members
  integ_my_robot_interfaces__msg__CenterAndArea__rosidl_typesupport_introspection_c__CenterAndArea_init_function,  // function to initialize message memory (memory has to be allocated)
  integ_my_robot_interfaces__msg__CenterAndArea__rosidl_typesupport_introspection_c__CenterAndArea_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t integ_my_robot_interfaces__msg__CenterAndArea__rosidl_typesupport_introspection_c__CenterAndArea_message_type_support_handle = {
  0,
  &integ_my_robot_interfaces__msg__CenterAndArea__rosidl_typesupport_introspection_c__CenterAndArea_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_integ_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, integ_my_robot_interfaces, msg, CenterAndArea)() {
  integ_my_robot_interfaces__msg__CenterAndArea__rosidl_typesupport_introspection_c__CenterAndArea_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!integ_my_robot_interfaces__msg__CenterAndArea__rosidl_typesupport_introspection_c__CenterAndArea_message_type_support_handle.typesupport_identifier) {
    integ_my_robot_interfaces__msg__CenterAndArea__rosidl_typesupport_introspection_c__CenterAndArea_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &integ_my_robot_interfaces__msg__CenterAndArea__rosidl_typesupport_introspection_c__CenterAndArea_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
