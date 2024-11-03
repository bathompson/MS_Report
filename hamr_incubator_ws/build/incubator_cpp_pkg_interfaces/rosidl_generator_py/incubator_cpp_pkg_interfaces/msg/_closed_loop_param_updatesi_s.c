// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from incubator_cpp_pkg_interfaces:msg/ClosedLoopParamUpdatesi.idl
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
#include "incubator_cpp_pkg_interfaces/msg/detail/closed_loop_param_updatesi__struct.h"
#include "incubator_cpp_pkg_interfaces/msg/detail/closed_loop_param_updatesi__functions.h"

bool incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool incubator_cpp_pkg_interfaces__msg__closed_loop_param_updatesi__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[85];
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
    assert(strncmp("incubator_cpp_pkg_interfaces.msg._closed_loop_param_updatesi.ClosedLoopParamUpdatesi", full_classname_dest, 84) == 0);
  }
  incubator_cpp_pkg_interfaces__msg__ClosedLoopParamUpdatesi * ros_message = _ros_message;
  {  // target_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_temperature");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_from_py(field, &ros_message->target_temperature)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * incubator_cpp_pkg_interfaces__msg__closed_loop_param_updatesi__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ClosedLoopParamUpdatesi */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("incubator_cpp_pkg_interfaces.msg._closed_loop_param_updatesi");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ClosedLoopParamUpdatesi");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  incubator_cpp_pkg_interfaces__msg__ClosedLoopParamUpdatesi * ros_message = (incubator_cpp_pkg_interfaces__msg__ClosedLoopParamUpdatesi *)raw_ros_message;
  {  // target_temperature
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_to_py(&ros_message->target_temperature);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
