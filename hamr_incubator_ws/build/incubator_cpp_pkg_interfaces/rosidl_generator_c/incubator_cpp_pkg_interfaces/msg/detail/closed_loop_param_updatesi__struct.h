// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from incubator_cpp_pkg_interfaces:msg/ClosedLoopParamUpdatesi.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CLOSED_LOOP_PARAM_UPDATESI__STRUCT_H_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CLOSED_LOOP_PARAM_UPDATESI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_temperature'
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__struct.h"

/// Struct defined in msg/ClosedLoopParamUpdatesi in the package incubator_cpp_pkg_interfaces.
typedef struct incubator_cpp_pkg_interfaces__msg__ClosedLoopParamUpdatesi
{
  incubator_cpp_pkg_interfaces__msg__DegreesCi target_temperature;
} incubator_cpp_pkg_interfaces__msg__ClosedLoopParamUpdatesi;

// Struct for a sequence of incubator_cpp_pkg_interfaces__msg__ClosedLoopParamUpdatesi.
typedef struct incubator_cpp_pkg_interfaces__msg__ClosedLoopParamUpdatesi__Sequence
{
  incubator_cpp_pkg_interfaces__msg__ClosedLoopParamUpdatesi * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} incubator_cpp_pkg_interfaces__msg__ClosedLoopParamUpdatesi__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CLOSED_LOOP_PARAM_UPDATESI__STRUCT_H_
