// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from incubator_cpp_pkg_interfaces:msg/ControllerStatusi.idl
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
#include "incubator_cpp_pkg_interfaces/msg/detail/controller_statusi__struct.h"
#include "incubator_cpp_pkg_interfaces/msg/detail/controller_statusi__functions.h"

bool incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__boolean__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__boolean__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__boolean__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__boolean__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__controller_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__controller_state__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool incubator_cpp_pkg_interfaces__msg__controller_statusi__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("incubator_cpp_pkg_interfaces.msg._controller_statusi.ControllerStatusi", full_classname_dest, 70) == 0);
  }
  incubator_cpp_pkg_interfaces__msg__ControllerStatusi * ros_message = _ros_message;
  {  // cur_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_time");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(field, &ros_message->cur_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // heater_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "heater_on");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__boolean__convert_from_py(field, &ros_message->heater_on)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fan_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "fan_on");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__boolean__convert_from_py(field, &ros_message->fan_on)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // current_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_state");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__controller_state__convert_from_py(field, &ros_message->current_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // next_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_time");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(field, &ros_message->next_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // target_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_temp");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_from_py(field, &ros_message->target_temp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lower_bound
    PyObject * field = PyObject_GetAttrString(_pymsg, "lower_bound");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_from_py(field, &ros_message->lower_bound)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // heating_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "heating_time");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(field, &ros_message->heating_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // heating_gap
    PyObject * field = PyObject_GetAttrString(_pymsg, "heating_gap");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(field, &ros_message->heating_gap)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * incubator_cpp_pkg_interfaces__msg__controller_statusi__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControllerStatusi */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("incubator_cpp_pkg_interfaces.msg._controller_statusi");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControllerStatusi");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  incubator_cpp_pkg_interfaces__msg__ControllerStatusi * ros_message = (incubator_cpp_pkg_interfaces__msg__ControllerStatusi *)raw_ros_message;
  {  // cur_time
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(&ros_message->cur_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heater_on
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__boolean__convert_to_py(&ros_message->heater_on);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "heater_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fan_on
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__boolean__convert_to_py(&ros_message->fan_on);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fan_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_state
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__controller_state__convert_to_py(&ros_message->current_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_time
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(&ros_message->next_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "next_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_temp
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_to_py(&ros_message->target_temp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lower_bound
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_to_py(&ros_message->lower_bound);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lower_bound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heating_time
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(&ros_message->heating_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "heating_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heating_gap
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(&ros_message->heating_gap);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "heating_gap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
