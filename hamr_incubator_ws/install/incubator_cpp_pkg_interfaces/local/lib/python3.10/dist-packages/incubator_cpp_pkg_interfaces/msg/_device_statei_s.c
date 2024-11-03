// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from incubator_cpp_pkg_interfaces:msg/DeviceStatei.idl
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
#include "incubator_cpp_pkg_interfaces/msg/detail/device_statei__struct.h"
#include "incubator_cpp_pkg_interfaces/msg/detail/device_statei__functions.h"

bool incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__boolean__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__boolean__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__boolean__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__boolean__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(void * raw_ros_message);
bool incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool incubator_cpp_pkg_interfaces__msg__device_statei__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("incubator_cpp_pkg_interfaces.msg._device_statei.DeviceStatei", full_classname_dest, 60) == 0);
  }
  incubator_cpp_pkg_interfaces__msg__DeviceStatei * ros_message = _ros_message;
  {  // t1
    PyObject * field = PyObject_GetAttrString(_pymsg, "t1");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_from_py(field, &ros_message->t1)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // t1_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "t1_time");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(field, &ros_message->t1_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // t2
    PyObject * field = PyObject_GetAttrString(_pymsg, "t2");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_from_py(field, &ros_message->t2)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // t2_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "t2_time");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(field, &ros_message->t2_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // t3
    PyObject * field = PyObject_GetAttrString(_pymsg, "t3");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_from_py(field, &ros_message->t3)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // t3_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "t3_time");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(field, &ros_message->t3_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // average_internal_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "average_internal_temp");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_from_py(field, &ros_message->average_internal_temp)) {
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
  {  // execution_interval
    PyObject * field = PyObject_GetAttrString(_pymsg, "execution_interval");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(field, &ros_message->execution_interval)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // elapsed_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "elapsed_time");
    if (!field) {
      return false;
    }
    if (!incubator_cpp_pkg_interfaces__msg__secondsi__convert_from_py(field, &ros_message->elapsed_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * incubator_cpp_pkg_interfaces__msg__device_statei__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DeviceStatei */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("incubator_cpp_pkg_interfaces.msg._device_statei");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DeviceStatei");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  incubator_cpp_pkg_interfaces__msg__DeviceStatei * ros_message = (incubator_cpp_pkg_interfaces__msg__DeviceStatei *)raw_ros_message;
  {  // t1
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_to_py(&ros_message->t1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "t1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t1_time
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(&ros_message->t1_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "t1_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t2
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_to_py(&ros_message->t2);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "t2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t2_time
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(&ros_message->t2_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "t2_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t3
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_to_py(&ros_message->t3);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "t3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t3_time
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(&ros_message->t3_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "t3_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // average_internal_temp
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__degrees_ci__convert_to_py(&ros_message->average_internal_temp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "average_internal_temp", field);
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
  {  // execution_interval
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(&ros_message->execution_interval);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "execution_interval", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elapsed_time
    PyObject * field = NULL;
    field = incubator_cpp_pkg_interfaces__msg__secondsi__convert_to_py(&ros_message->elapsed_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "elapsed_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
