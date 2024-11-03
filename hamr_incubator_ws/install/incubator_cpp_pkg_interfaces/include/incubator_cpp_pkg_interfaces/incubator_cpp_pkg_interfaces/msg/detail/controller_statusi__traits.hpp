// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from incubator_cpp_pkg_interfaces:msg/ControllerStatusi.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATUSI__TRAITS_HPP_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATUSI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "incubator_cpp_pkg_interfaces/msg/detail/controller_statusi__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cur_time'
// Member 'next_time'
// Member 'heating_time'
// Member 'heating_gap'
#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__traits.hpp"
// Member 'heater_on'
// Member 'fan_on'
#include "incubator_cpp_pkg_interfaces/msg/detail/boolean__traits.hpp"
// Member 'current_state'
#include "incubator_cpp_pkg_interfaces/msg/detail/controller_state__traits.hpp"
// Member 'target_temp'
// Member 'lower_bound'
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__traits.hpp"

namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControllerStatusi & msg,
  std::ostream & out)
{
  out << "{";
  // member: cur_time
  {
    out << "cur_time: ";
    to_flow_style_yaml(msg.cur_time, out);
    out << ", ";
  }

  // member: heater_on
  {
    out << "heater_on: ";
    to_flow_style_yaml(msg.heater_on, out);
    out << ", ";
  }

  // member: fan_on
  {
    out << "fan_on: ";
    to_flow_style_yaml(msg.fan_on, out);
    out << ", ";
  }

  // member: current_state
  {
    out << "current_state: ";
    to_flow_style_yaml(msg.current_state, out);
    out << ", ";
  }

  // member: next_time
  {
    out << "next_time: ";
    to_flow_style_yaml(msg.next_time, out);
    out << ", ";
  }

  // member: target_temp
  {
    out << "target_temp: ";
    to_flow_style_yaml(msg.target_temp, out);
    out << ", ";
  }

  // member: lower_bound
  {
    out << "lower_bound: ";
    to_flow_style_yaml(msg.lower_bound, out);
    out << ", ";
  }

  // member: heating_time
  {
    out << "heating_time: ";
    to_flow_style_yaml(msg.heating_time, out);
    out << ", ";
  }

  // member: heating_gap
  {
    out << "heating_gap: ";
    to_flow_style_yaml(msg.heating_gap, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControllerStatusi & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cur_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_time:\n";
    to_block_style_yaml(msg.cur_time, out, indentation + 2);
  }

  // member: heater_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heater_on:\n";
    to_block_style_yaml(msg.heater_on, out, indentation + 2);
  }

  // member: fan_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fan_on:\n";
    to_block_style_yaml(msg.fan_on, out, indentation + 2);
  }

  // member: current_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_state:\n";
    to_block_style_yaml(msg.current_state, out, indentation + 2);
  }

  // member: next_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "next_time:\n";
    to_block_style_yaml(msg.next_time, out, indentation + 2);
  }

  // member: target_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_temp:\n";
    to_block_style_yaml(msg.target_temp, out, indentation + 2);
  }

  // member: lower_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lower_bound:\n";
    to_block_style_yaml(msg.lower_bound, out, indentation + 2);
  }

  // member: heating_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heating_time:\n";
    to_block_style_yaml(msg.heating_time, out, indentation + 2);
  }

  // member: heating_gap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heating_gap:\n";
    to_block_style_yaml(msg.heating_gap, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerStatusi & msg, bool use_flow_style = false)
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
  const incubator_cpp_pkg_interfaces::msg::ControllerStatusi & msg,
  std::ostream & out, size_t indentation = 0)
{
  incubator_cpp_pkg_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use incubator_cpp_pkg_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const incubator_cpp_pkg_interfaces::msg::ControllerStatusi & msg)
{
  return incubator_cpp_pkg_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<incubator_cpp_pkg_interfaces::msg::ControllerStatusi>()
{
  return "incubator_cpp_pkg_interfaces::msg::ControllerStatusi";
}

template<>
inline const char * name<incubator_cpp_pkg_interfaces::msg::ControllerStatusi>()
{
  return "incubator_cpp_pkg_interfaces/msg/ControllerStatusi";
}

template<>
struct has_fixed_size<incubator_cpp_pkg_interfaces::msg::ControllerStatusi>
  : std::integral_constant<bool, has_fixed_size<incubator_cpp_pkg_interfaces::msg::Boolean>::value && has_fixed_size<incubator_cpp_pkg_interfaces::msg::ControllerState>::value && has_fixed_size<incubator_cpp_pkg_interfaces::msg::DegreesCi>::value && has_fixed_size<incubator_cpp_pkg_interfaces::msg::Secondsi>::value> {};

template<>
struct has_bounded_size<incubator_cpp_pkg_interfaces::msg::ControllerStatusi>
  : std::integral_constant<bool, has_bounded_size<incubator_cpp_pkg_interfaces::msg::Boolean>::value && has_bounded_size<incubator_cpp_pkg_interfaces::msg::ControllerState>::value && has_bounded_size<incubator_cpp_pkg_interfaces::msg::DegreesCi>::value && has_bounded_size<incubator_cpp_pkg_interfaces::msg::Secondsi>::value> {};

template<>
struct is_message<incubator_cpp_pkg_interfaces::msg::ControllerStatusi>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATUSI__TRAITS_HPP_
