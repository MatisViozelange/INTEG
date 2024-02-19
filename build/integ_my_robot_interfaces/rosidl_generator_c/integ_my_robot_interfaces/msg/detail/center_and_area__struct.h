// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from integ_my_robot_interfaces:msg/CenterAndArea.idl
// generated code does not contain a copyright notice

#ifndef INTEG_MY_ROBOT_INTERFACES__MSG__DETAIL__CENTER_AND_AREA__STRUCT_H_
#define INTEG_MY_ROBOT_INTERFACES__MSG__DETAIL__CENTER_AND_AREA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/CenterAndArea in the package integ_my_robot_interfaces.
typedef struct integ_my_robot_interfaces__msg__CenterAndArea
{
  geometry_msgs__msg__Point center;
  int32_t area;
  bool detected;
} integ_my_robot_interfaces__msg__CenterAndArea;

// Struct for a sequence of integ_my_robot_interfaces__msg__CenterAndArea.
typedef struct integ_my_robot_interfaces__msg__CenterAndArea__Sequence
{
  integ_my_robot_interfaces__msg__CenterAndArea * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} integ_my_robot_interfaces__msg__CenterAndArea__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTEG_MY_ROBOT_INTERFACES__MSG__DETAIL__CENTER_AND_AREA__STRUCT_H_
