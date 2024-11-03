// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from incubator_cpp_pkg_interfaces:msg/Integer64.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__INTEGER64__BUILDER_HPP_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__INTEGER64__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "incubator_cpp_pkg_interfaces/msg/detail/integer64__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

namespace builder
{

class Init_Integer64_data
{
public:
  Init_Integer64_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::incubator_cpp_pkg_interfaces::msg::Integer64 data(::incubator_cpp_pkg_interfaces::msg::Integer64::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::Integer64 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::incubator_cpp_pkg_interfaces::msg::Integer64>()
{
  return incubator_cpp_pkg_interfaces::msg::builder::Init_Integer64_data();
}

}  // namespace incubator_cpp_pkg_interfaces

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__INTEGER64__BUILDER_HPP_
