// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from incubator_cpp_pkg_interfaces:msg/Float32.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__FLOAT32__STRUCT_H_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__FLOAT32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Float32 in the package incubator_cpp_pkg_interfaces.
typedef struct incubator_cpp_pkg_interfaces__msg__Float32
{
  float data;
} incubator_cpp_pkg_interfaces__msg__Float32;

// Struct for a sequence of incubator_cpp_pkg_interfaces__msg__Float32.
typedef struct incubator_cpp_pkg_interfaces__msg__Float32__Sequence
{
  incubator_cpp_pkg_interfaces__msg__Float32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} incubator_cpp_pkg_interfaces__msg__Float32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__FLOAT32__STRUCT_H_