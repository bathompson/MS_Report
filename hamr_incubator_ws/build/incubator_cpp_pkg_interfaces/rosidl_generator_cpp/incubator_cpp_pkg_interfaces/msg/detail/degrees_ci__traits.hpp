// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from incubator_cpp_pkg_interfaces:msg/DegreesCi.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEGREES_CI__TRAITS_HPP_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEGREES_CI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'value'
#include "incubator_cpp_pkg_interfaces/msg/detail/float32__traits.hpp"

namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DegreesCi & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    to_flow_style_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DegreesCi & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value:\n";
    to_block_style_yaml(msg.value, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DegreesCi & msg, bool use_flow_style = false)
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
  const incubator_cpp_pkg_interfaces::msg::DegreesCi & msg,
  std::ostream & out, size_t indentation = 0)
{
  incubator_cpp_pkg_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use incubator_cpp_pkg_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const incubator_cpp_pkg_interfaces::msg::DegreesCi & msg)
{
  return incubator_cpp_pkg_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<incubator_cpp_pkg_interfaces::msg::DegreesCi>()
{
  return "incubator_cpp_pkg_interfaces::msg::DegreesCi";
}

template<>
inline const char * name<incubator_cpp_pkg_interfaces::msg::DegreesCi>()
{
  return "incubator_cpp_pkg_interfaces/msg/DegreesCi";
}

template<>
struct has_fixed_size<incubator_cpp_pkg_interfaces::msg::DegreesCi>
  : std::integral_constant<bool, has_fixed_size<incubator_cpp_pkg_interfaces::msg::Float32>::value> {};

template<>
struct has_bounded_size<incubator_cpp_pkg_interfaces::msg::DegreesCi>
  : std::integral_constant<bool, has_bounded_size<incubator_cpp_pkg_interfaces::msg::Float32>::value> {};

template<>
struct is_message<incubator_cpp_pkg_interfaces::msg::DegreesCi>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEGREES_CI__TRAITS_HPP_
