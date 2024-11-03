// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from incubator_cpp_pkg_interfaces:msg/DeviceStatei.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEVICE_STATEI__STRUCT_H_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEVICE_STATEI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 't1'
// Member 't2'
// Member 't3'
// Member 'average_internal_temp'
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__struct.h"
// Member 't1_time'
// Member 't2_time'
// Member 't3_time'
// Member 'execution_interval'
// Member 'elapsed_time'
#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__struct.h"
// Member 'heater_on'
// Member 'fan_on'
#include "incubator_cpp_pkg_interfaces/msg/detail/boolean__struct.h"

/// Struct defined in msg/DeviceStatei in the package incubator_cpp_pkg_interfaces.
typedef struct incubator_cpp_pkg_interfaces__msg__DeviceStatei
{
  incubator_cpp_pkg_interfaces__msg__DegreesCi t1;
  incubator_cpp_pkg_interfaces__msg__Secondsi t1_time;
  incubator_cpp_pkg_interfaces__msg__DegreesCi t2;
  incubator_cpp_pkg_interfaces__msg__Secondsi t2_time;
  incubator_cpp_pkg_interfaces__msg__DegreesCi t3;
  incubator_cpp_pkg_interfaces__msg__Secondsi t3_time;
  incubator_cpp_pkg_interfaces__msg__DegreesCi average_internal_temp;
  incubator_cpp_pkg_interfaces__msg__Boolean heater_on;
  incubator_cpp_pkg_interfaces__msg__Boolean fan_on;
  incubator_cpp_pkg_interfaces__msg__Secondsi execution_interval;
  incubator_cpp_pkg_interfaces__msg__Secondsi elapsed_time;
} incubator_cpp_pkg_interfaces__msg__DeviceStatei;

// Struct for a sequence of incubator_cpp_pkg_interfaces__msg__DeviceStatei.
typedef struct incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence
{
  incubator_cpp_pkg_interfaces__msg__DeviceStatei * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEVICE_STATEI__STRUCT_H_
