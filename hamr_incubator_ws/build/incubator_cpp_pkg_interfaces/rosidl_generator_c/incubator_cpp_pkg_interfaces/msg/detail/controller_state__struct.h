// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from incubator_cpp_pkg_interfaces:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONTROLLER_STATE_COOLING'.
enum
{
  incubator_cpp_pkg_interfaces__msg__ControllerState__CONTROLLER_STATE_COOLING = 0
};

/// Constant 'CONTROLLER_STATE_HEATING'.
enum
{
  incubator_cpp_pkg_interfaces__msg__ControllerState__CONTROLLER_STATE_HEATING = 1
};

/// Constant 'CONTROLLER_STATE_WAITING'.
enum
{
  incubator_cpp_pkg_interfaces__msg__ControllerState__CONTROLLER_STATE_WAITING = 2
};

/// Struct defined in msg/ControllerState in the package incubator_cpp_pkg_interfaces.
typedef struct incubator_cpp_pkg_interfaces__msg__ControllerState
{
  uint8_t controller_state;
} incubator_cpp_pkg_interfaces__msg__ControllerState;

// Struct for a sequence of incubator_cpp_pkg_interfaces__msg__ControllerState.
typedef struct incubator_cpp_pkg_interfaces__msg__ControllerState__Sequence
{
  incubator_cpp_pkg_interfaces__msg__ControllerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} incubator_cpp_pkg_interfaces__msg__ControllerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_
