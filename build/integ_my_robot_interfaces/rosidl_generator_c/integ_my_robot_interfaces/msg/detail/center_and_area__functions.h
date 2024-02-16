// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from integ_my_robot_interfaces:msg/CenterAndArea.idl
// generated code does not contain a copyright notice

#ifndef INTEG_MY_ROBOT_INTERFACES__MSG__DETAIL__CENTER_AND_AREA__FUNCTIONS_H_
#define INTEG_MY_ROBOT_INTERFACES__MSG__DETAIL__CENTER_AND_AREA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "integ_my_robot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "integ_my_robot_interfaces/msg/detail/center_and_area__struct.h"

/// Initialize msg/CenterAndArea message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * integ_my_robot_interfaces__msg__CenterAndArea
 * )) before or use
 * integ_my_robot_interfaces__msg__CenterAndArea__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_integ_my_robot_interfaces
bool
integ_my_robot_interfaces__msg__CenterAndArea__init(integ_my_robot_interfaces__msg__CenterAndArea * msg);

/// Finalize msg/CenterAndArea message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_integ_my_robot_interfaces
void
integ_my_robot_interfaces__msg__CenterAndArea__fini(integ_my_robot_interfaces__msg__CenterAndArea * msg);

/// Create msg/CenterAndArea message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * integ_my_robot_interfaces__msg__CenterAndArea__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_integ_my_robot_interfaces
integ_my_robot_interfaces__msg__CenterAndArea *
integ_my_robot_interfaces__msg__CenterAndArea__create();

/// Destroy msg/CenterAndArea message.
/**
 * It calls
 * integ_my_robot_interfaces__msg__CenterAndArea__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_integ_my_robot_interfaces
void
integ_my_robot_interfaces__msg__CenterAndArea__destroy(integ_my_robot_interfaces__msg__CenterAndArea * msg);

/// Check for msg/CenterAndArea message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_integ_my_robot_interfaces
bool
integ_my_robot_interfaces__msg__CenterAndArea__are_equal(const integ_my_robot_interfaces__msg__CenterAndArea * lhs, const integ_my_robot_interfaces__msg__CenterAndArea * rhs);

/// Copy a msg/CenterAndArea message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_integ_my_robot_interfaces
bool
integ_my_robot_interfaces__msg__CenterAndArea__copy(
  const integ_my_robot_interfaces__msg__CenterAndArea * input,
  integ_my_robot_interfaces__msg__CenterAndArea * output);

/// Initialize array of msg/CenterAndArea messages.
/**
 * It allocates the memory for the number of elements and calls
 * integ_my_robot_interfaces__msg__CenterAndArea__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_integ_my_robot_interfaces
bool
integ_my_robot_interfaces__msg__CenterAndArea__Sequence__init(integ_my_robot_interfaces__msg__CenterAndArea__Sequence * array, size_t size);

/// Finalize array of msg/CenterAndArea messages.
/**
 * It calls
 * integ_my_robot_interfaces__msg__CenterAndArea__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_integ_my_robot_interfaces
void
integ_my_robot_interfaces__msg__CenterAndArea__Sequence__fini(integ_my_robot_interfaces__msg__CenterAndArea__Sequence * array);

/// Create array of msg/CenterAndArea messages.
/**
 * It allocates the memory for the array and calls
 * integ_my_robot_interfaces__msg__CenterAndArea__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_integ_my_robot_interfaces
integ_my_robot_interfaces__msg__CenterAndArea__Sequence *
integ_my_robot_interfaces__msg__CenterAndArea__Sequence__create(size_t size);

/// Destroy array of msg/CenterAndArea messages.
/**
 * It calls
 * integ_my_robot_interfaces__msg__CenterAndArea__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_integ_my_robot_interfaces
void
integ_my_robot_interfaces__msg__CenterAndArea__Sequence__destroy(integ_my_robot_interfaces__msg__CenterAndArea__Sequence * array);

/// Check for msg/CenterAndArea message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_integ_my_robot_interfaces
bool
integ_my_robot_interfaces__msg__CenterAndArea__Sequence__are_equal(const integ_my_robot_interfaces__msg__CenterAndArea__Sequence * lhs, const integ_my_robot_interfaces__msg__CenterAndArea__Sequence * rhs);

/// Copy an array of msg/CenterAndArea messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_integ_my_robot_interfaces
bool
integ_my_robot_interfaces__msg__CenterAndArea__Sequence__copy(
  const integ_my_robot_interfaces__msg__CenterAndArea__Sequence * input,
  integ_my_robot_interfaces__msg__CenterAndArea__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTEG_MY_ROBOT_INTERFACES__MSG__DETAIL__CENTER_AND_AREA__FUNCTIONS_H_
