// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from incubator_cpp_pkg_interfaces:msg/Secondsi.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__SECONDSI__STRUCT_H_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__SECONDSI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'value'
#include "incubator_cpp_pkg_interfaces/msg/detail/integer64__struct.h"

/// Struct defined in msg/Secondsi in the package incubator_cpp_pkg_interfaces.
typedef struct incubator_cpp_pkg_interfaces__msg__Secondsi
{
  incubator_cpp_pkg_interfaces__msg__Integer64 value;
} incubator_cpp_pkg_interfaces__msg__Secondsi;

// Struct for a sequence of incubator_cpp_pkg_interfaces__msg__Secondsi.
typedef struct incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence
{
  incubator_cpp_pkg_interfaces__msg__Secondsi * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__SECONDSI__STRUCT_H_
