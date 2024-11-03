// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from incubator_cpp_pkg_interfaces:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATE__TRAITS_HPP_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "incubator_cpp_pkg_interfaces/msg/detail/controller_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControllerState & msg,
  std::ostream & out)
{
  out << "{";
  // member: controller_state
  {
    out << "controller_state: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControllerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: controller_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_state: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerState & msg, bool use_flow_style = false)
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
  const incubator_cpp_pkg_interfaces::msg::ControllerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  incubator_cpp_pkg_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use incubator_cpp_pkg_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const incubator_cpp_pkg_interfaces::msg::ControllerState & msg)
{
  return incubator_cpp_pkg_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<incubator_cpp_pkg_interfaces::msg::ControllerState>()
{
  return "incubator_cpp_pkg_interfaces::msg::ControllerState";
}

template<>
inline const char * name<incubator_cpp_pkg_interfaces::msg::ControllerState>()
{
  return "incubator_cpp_pkg_interfaces/msg/ControllerState";
}

template<>
struct has_fixed_size<incubator_cpp_pkg_interfaces::msg::ControllerState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<incubator_cpp_pkg_interfaces::msg::ControllerState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<incubator_cpp_pkg_interfaces::msg::ControllerState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATE__TRAITS_HPP_
