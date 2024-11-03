// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from incubator_cpp_pkg_interfaces:msg/ControllerStatusi.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATUSI__STRUCT_H_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATUSI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cur_time'
// Member 'next_time'
// Member 'heating_time'
// Member 'heating_gap'
#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__struct.h"
// Member 'heater_on'
// Member 'fan_on'
#include "incubator_cpp_pkg_interfaces/msg/detail/boolean__struct.h"
// Member 'current_state'
#include "incubator_cpp_pkg_interfaces/msg/detail/controller_state__struct.h"
// Member 'target_temp'
// Member 'lower_bound'
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__struct.h"

/// Struct defined in msg/ControllerStatusi in the package incubator_cpp_pkg_interfaces.
typedef struct incubator_cpp_pkg_interfaces__msg__ControllerStatusi
{
  incubator_cpp_pkg_interfaces__msg__Secondsi cur_time;
  incubator_cpp_pkg_interfaces__msg__Boolean heater_on;
  incubator_cpp_pkg_interfaces__msg__Boolean fan_on;
  incubator_cpp_pkg_interfaces__msg__ControllerState current_state;
  incubator_cpp_pkg_interfaces__msg__Secondsi next_time;
  incubator_cpp_pkg_interfaces__msg__DegreesCi target_temp;
  incubator_cpp_pkg_interfaces__msg__DegreesCi lower_bound;
  incubator_cpp_pkg_interfaces__msg__Secondsi heating_time;
  incubator_cpp_pkg_interfaces__msg__Secondsi heating_gap;
} incubator_cpp_pkg_interfaces__msg__ControllerStatusi;

// Struct for a sequence of incubator_cpp_pkg_interfaces__msg__ControllerStatusi.
typedef struct incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence
{
  incubator_cpp_pkg_interfaces__msg__ControllerStatusi * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATUSI__STRUCT_H_
