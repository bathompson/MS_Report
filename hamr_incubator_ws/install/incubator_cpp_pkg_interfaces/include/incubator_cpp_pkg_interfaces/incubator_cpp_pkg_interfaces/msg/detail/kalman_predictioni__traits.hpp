// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from incubator_cpp_pkg_interfaces:msg/KalmanPredictioni.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__KALMAN_PREDICTIONI__TRAITS_HPP_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__KALMAN_PREDICTIONI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "incubator_cpp_pkg_interfaces/msg/detail/kalman_predictioni__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 't_heater'
// Member 'prediction_error'
// Member 'average_temperature'
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__traits.hpp"
// Member 'prediction_time'
#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__traits.hpp"

namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const KalmanPredictioni & msg,
  std::ostream & out)
{
  out << "{";
  // member: t_heater
  {
    out << "t_heater: ";
    to_flow_style_yaml(msg.t_heater, out);
    out << ", ";
  }

  // member: prediction_error
  {
    out << "prediction_error: ";
    to_flow_style_yaml(msg.prediction_error, out);
    out << ", ";
  }

  // member: average_temperature
  {
    out << "average_temperature: ";
    to_flow_style_yaml(msg.average_temperature, out);
    out << ", ";
  }

  // member: prediction_time
  {
    out << "prediction_time: ";
    to_flow_style_yaml(msg.prediction_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KalmanPredictioni & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: t_heater
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_heater:\n";
    to_block_style_yaml(msg.t_heater, out, indentation + 2);
  }

  // member: prediction_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prediction_error:\n";
    to_block_style_yaml(msg.prediction_error, out, indentation + 2);
  }

  // member: average_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_temperature:\n";
    to_block_style_yaml(msg.average_temperature, out, indentation + 2);
  }

  // member: prediction_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prediction_time:\n";
    to_block_style_yaml(msg.prediction_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KalmanPredictioni & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace incubator_cpp_pkg_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use incubator_cpp_pkg_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const incubator_cpp_pkg_interfaces::msg::KalmanPredictioni & msg,
  std::ostream & out, size_t indentation = 0)
{
  incubator_cpp_pkg_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use incubator_cpp_pkg_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const incubator_cpp_pkg_interfaces::msg::KalmanPredictioni & msg)
{
  return incubator_cpp_pkg_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni>()
{
  return "incubator_cpp_pkg_interfaces::msg::KalmanPredictioni";
}

template<>
inline const char * name<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni>()
{
  return "incubator_cpp_pkg_interfaces/msg/KalmanPredictioni";
}

template<>
struct has_fixed_size<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni>
  : std::integral_constant<bool, has_fixed_size<incubator_cpp_pkg_interfaces::msg::DegreesCi>::value && has_fixed_size<incubator_cpp_pkg_interfaces::msg::Secondsi>::value> {};

template<>
struct has_bounded_size<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni>
  : std::integral_constant<bool, has_bounded_size<incubator_cpp_pkg_interfaces::msg::DegreesCi>::value && has_bounded_size<incubator_cpp_pkg_interfaces::msg::Secondsi>::value> {};

template<>
struct is_message<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__KALMAN_PREDICTIONI__TRAITS_HPP_
