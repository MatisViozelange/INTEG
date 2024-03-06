// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from integ_my_robot_interfaces:msg/CenterAndArea.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "integ_my_robot_interfaces/msg/detail/center_and_area__struct.h"
#include "integ_my_robot_interfaces/msg/detail/center_and_area__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool integ_my_robot_interfaces__msg__center_and_area__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("integ_my_robot_interfaces.msg._center_and_area.CenterAndArea", full_classname_dest, 60) == 0);
  }
  integ_my_robot_interfaces__msg__CenterAndArea * ros_message = _ros_message;
  {  // center
    PyObject * field = PyObject_GetAttrString(_pymsg, "center");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->center)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // area
    PyObject * field = PyObject_GetAttrString(_pymsg, "area");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->area = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->detected = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * integ_my_robot_interfaces__msg__center_and_area__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CenterAndArea */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("integ_my_robot_interfaces.msg._center_and_area");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CenterAndArea");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  integ_my_robot_interfaces__msg__CenterAndArea * ros_message = (integ_my_robot_interfaces__msg__CenterAndArea *)raw_ros_message;
  {  // center
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->center);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "center", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // area
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->area);
    {
      int rc = PyObject_SetAttrString(_pymessage, "area", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}