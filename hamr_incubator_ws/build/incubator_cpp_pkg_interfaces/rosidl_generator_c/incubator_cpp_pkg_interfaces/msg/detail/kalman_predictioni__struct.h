// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from incubator_cpp_pkg_interfaces:msg/KalmanPredictioni.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__KALMAN_PREDICTIONI__STRUCT_H_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__KALMAN_PREDICTIONI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 't_heater'
// Member 'prediction_error'
// Member 'average_temperature'
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__struct.h"
// Member 'prediction_time'
#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__struct.h"

/// Struct defined in msg/KalmanPredictioni in the package incubator_cpp_pkg_interfaces.
typedef struct incubator_cpp_pkg_interfaces__msg__KalmanPredictioni
{
  incubator_cpp_pkg_interfaces__msg__DegreesCi t_heater;
  incubator_cpp_pkg_interfaces__msg__DegreesCi prediction_error;
  incubator_cpp_pkg_interfaces__msg__DegreesCi average_temperature;
  incubator_cpp_pkg_interfaces__msg__Secondsi prediction_time;
} incubator_cpp_pkg_interfaces__msg__KalmanPredictioni;

// Struct for a sequence of incubator_cpp_pkg_interfaces__msg__KalmanPredictioni.
typedef struct incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence
{
  incubator_cpp_pkg_interfaces__msg__KalmanPredictioni * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__KALMAN_PREDICTIONI__STRUCT_H_
