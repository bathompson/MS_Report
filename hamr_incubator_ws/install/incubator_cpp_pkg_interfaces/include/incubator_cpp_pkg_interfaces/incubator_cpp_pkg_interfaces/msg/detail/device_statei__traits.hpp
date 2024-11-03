// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from incubator_cpp_pkg_interfaces:msg/DeviceStatei.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEVICE_STATEI__TRAITS_HPP_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEVICE_STATEI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "incubator_cpp_pkg_interfaces/msg/detail/device_statei__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 't1'
// Member 't2'
// Member 't3'
// Member 'average_internal_temp'
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__traits.hpp"
// Member 't1_time'
// Member 't2_time'
// Member 't3_time'
// Member 'execution_interval'
// Member 'elapsed_time'
#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__traits.hpp"
// Member 'heater_on'
// Member 'fan_on'
#include "incubator_cpp_pkg_interfaces/msg/detail/boolean__traits.hpp"

namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DeviceStatei & msg,
  std::ostream & out)
{
  out << "{";
  // member: t1
  {
    out << "t1: ";
    to_flow_style_yaml(msg.t1, out);
    out << ", ";
  }

  // member: t1_time
  {
    out << "t1_time: ";
    to_flow_style_yaml(msg.t1_time, out);
    out << ", ";
  }

  // member: t2
  {
    out << "t2: ";
    to_flow_style_yaml(msg.t2, out);
    out << ", ";
  }

  // member: t2_time
  {
    out << "t2_time: ";
    to_flow_style_yaml(msg.t2_time, out);
    out << ", ";
  }

  // member: t3
  {
    out << "t3: ";
    to_flow_style_yaml(msg.t3, out);
    out << ", ";
  }

  // member: t3_time
  {
    out << "t3_time: ";
    to_flow_style_yaml(msg.t3_time, out);
    out << ", ";
  }

  // member: average_internal_temp
  {
    out << "average_internal_temp: ";
    to_flow_style_yaml(msg.average_internal_temp, out);
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

  // member: execution_interval
  {
    out << "execution_interval: ";
    to_flow_style_yaml(msg.execution_interval, out);
    out << ", ";
  }

  // member: elapsed_time
  {
    out << "elapsed_time: ";
    to_flow_style_yaml(msg.elapsed_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeviceStatei & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: t1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t1:\n";
    to_block_style_yaml(msg.t1, out, indentation + 2);
  }

  // member: t1_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t1_time:\n";
    to_block_style_yaml(msg.t1_time, out, indentation + 2);
  }

  // member: t2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t2:\n";
    to_block_style_yaml(msg.t2, out, indentation + 2);
  }

  // member: t2_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t2_time:\n";
    to_block_style_yaml(msg.t2_time, out, indentation + 2);
  }

  // member: t3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t3:\n";
    to_block_style_yaml(msg.t3, out, indentation + 2);
  }

  // member: t3_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t3_time:\n";
    to_block_style_yaml(msg.t3_time, out, indentation + 2);
  }

  // member: average_internal_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_internal_temp:\n";
    to_block_style_yaml(msg.average_internal_temp, out, indentation + 2);
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

  // member: execution_interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "execution_interval:\n";
    to_block_style_yaml(msg.execution_interval, out, indentation + 2);
  }

  // member: elapsed_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elapsed_time:\n";
    to_block_style_yaml(msg.elapsed_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeviceStatei & msg, bool use_flow_style = false)
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
  const incubator_cpp_pkg_interfaces::msg::DeviceStatei & msg,
  std::ostream & out, size_t indentation = 0)
{
  incubator_cpp_pkg_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use incubator_cpp_pkg_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const incubator_cpp_pkg_interfaces::msg::DeviceStatei & msg)
{
  return incubator_cpp_pkg_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<incubator_cpp_pkg_interfaces::msg::DeviceStatei>()
{
  return "incubator_cpp_pkg_interfaces::msg::DeviceStatei";
}

template<>
inline const char * name<incubator_cpp_pkg_interfaces::msg::DeviceStatei>()
{
  return "incubator_cpp_pkg_interfaces/msg/DeviceStatei";
}

template<>
struct has_fixed_size<incubator_cpp_pkg_interfaces::msg::DeviceStatei>
  : std::integral_constant<bool, has_fixed_size<incubator_cpp_pkg_interfaces::msg::Boolean>::value && has_fixed_size<incubator_cpp_pkg_interfaces::msg::DegreesCi>::value && has_fixed_size<incubator_cpp_pkg_interfaces::msg::Secondsi>::value> {};

template<>
struct has_bounded_size<incubator_cpp_pkg_interfaces::msg::DeviceStatei>
  : std::integral_constant<bool, has_bounded_size<incubator_cpp_pkg_interfaces::msg::Boolean>::value && has_bounded_size<incubator_cpp_pkg_interfaces::msg::DegreesCi>::value && has_bounded_size<incubator_cpp_pkg_interfaces::msg::Secondsi>::value> {};

template<>
struct is_message<incubator_cpp_pkg_interfaces::msg::DeviceStatei>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEVICE_STATEI__TRAITS_HPP_
