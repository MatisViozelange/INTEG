// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from integ_my_robot_interfaces:msg/CenterAndArea.idl
// generated code does not contain a copyright notice
#include "integ_my_robot_interfaces/msg/detail/center_and_area__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
integ_my_robot_interfaces__msg__CenterAndArea__init(integ_my_robot_interfaces__msg__CenterAndArea * msg)
{
  if (!msg) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__init(&msg->center)) {
    integ_my_robot_interfaces__msg__CenterAndArea__fini(msg);
    return false;
  }
  // area
  // detected
  return true;
}

void
integ_my_robot_interfaces__msg__CenterAndArea__fini(integ_my_robot_interfaces__msg__CenterAndArea * msg)
{
  if (!msg) {
    return;
  }
  // center
  geometry_msgs__msg__Point__fini(&msg->center);
  // area
  // detected
}

bool
integ_my_robot_interfaces__msg__CenterAndArea__are_equal(const integ_my_robot_interfaces__msg__CenterAndArea * lhs, const integ_my_robot_interfaces__msg__CenterAndArea * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // area
  if (lhs->area != rhs->area) {
    return false;
  }
  // detected
  if (lhs->detected != rhs->detected) {
    return false;
  }
  return true;
}

bool
integ_my_robot_interfaces__msg__CenterAndArea__copy(
  const integ_my_robot_interfaces__msg__CenterAndArea * input,
  integ_my_robot_interfaces__msg__CenterAndArea * output)
{
  if (!input || !output) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // area
  output->area = input->area;
  // detected
  output->detected = input->detected;
  return true;
}

integ_my_robot_interfaces__msg__CenterAndArea *
integ_my_robot_interfaces__msg__CenterAndArea__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  integ_my_robot_interfaces__msg__CenterAndArea * msg = (integ_my_robot_interfaces__msg__CenterAndArea *)allocator.allocate(sizeof(integ_my_robot_interfaces__msg__CenterAndArea), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(integ_my_robot_interfaces__msg__CenterAndArea));
  bool success = integ_my_robot_interfaces__msg__CenterAndArea__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
integ_my_robot_interfaces__msg__CenterAndArea__destroy(integ_my_robot_interfaces__msg__CenterAndArea * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    integ_my_robot_interfaces__msg__CenterAndArea__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
integ_my_robot_interfaces__msg__CenterAndArea__Sequence__init(integ_my_robot_interfaces__msg__CenterAndArea__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  integ_my_robot_interfaces__msg__CenterAndArea * data = NULL;

  if (size) {
    data = (integ_my_robot_interfaces__msg__CenterAndArea *)allocator.zero_allocate(size, sizeof(integ_my_robot_interfaces__msg__CenterAndArea), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = integ_my_robot_interfaces__msg__CenterAndArea__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        integ_my_robot_interfaces__msg__CenterAndArea__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
integ_my_robot_interfaces__msg__CenterAndArea__Sequence__fini(integ_my_robot_interfaces__msg__CenterAndArea__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      integ_my_robot_interfaces__msg__CenterAndArea__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

integ_my_robot_interfaces__msg__CenterAndArea__Sequence *
integ_my_robot_interfaces__msg__CenterAndArea__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  integ_my_robot_interfaces__msg__CenterAndArea__Sequence * array = (integ_my_robot_interfaces__msg__CenterAndArea__Sequence *)allocator.allocate(sizeof(integ_my_robot_interfaces__msg__CenterAndArea__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = integ_my_robot_interfaces__msg__CenterAndArea__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
integ_my_robot_interfaces__msg__CenterAndArea__Sequence__destroy(integ_my_robot_interfaces__msg__CenterAndArea__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    integ_my_robot_interfaces__msg__CenterAndArea__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
integ_my_robot_interfaces__msg__CenterAndArea__Sequence__are_equal(const integ_my_robot_interfaces__msg__CenterAndArea__Sequence * lhs, const integ_my_robot_interfaces__msg__CenterAndArea__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!integ_my_robot_interfaces__msg__CenterAndArea__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
integ_my_robot_interfaces__msg__CenterAndArea__Sequence__copy(
  const integ_my_robot_interfaces__msg__CenterAndArea__Sequence * input,
  integ_my_robot_interfaces__msg__CenterAndArea__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(integ_my_robot_interfaces__msg__CenterAndArea);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    integ_my_robot_interfaces__msg__CenterAndArea * data =
      (integ_my_robot_interfaces__msg__CenterAndArea *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!integ_my_robot_interfaces__msg__CenterAndArea__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          integ_my_robot_interfaces__msg__CenterAndArea__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!integ_my_robot_interfaces__msg__CenterAndArea__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
