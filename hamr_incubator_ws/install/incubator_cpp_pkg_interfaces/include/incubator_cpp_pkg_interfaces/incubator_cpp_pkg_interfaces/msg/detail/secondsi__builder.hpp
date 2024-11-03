// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from incubator_cpp_pkg_interfaces:msg/Secondsi.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__SECONDSI__BUILDER_HPP_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__SECONDSI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

namespace builder
{

class Init_Secondsi_value
{
public:
  Init_Secondsi_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::incubator_cpp_pkg_interfaces::msg::Secondsi value(::incubator_cpp_pkg_interfaces::msg::Secondsi::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::Secondsi msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::incubator_cpp_pkg_interfaces::msg::Secondsi>()
{
  return incubator_cpp_pkg_interfaces::msg::builder::Init_Secondsi_value();
}

}  // namespace incubator_cpp_pkg_interfaces

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__SECONDSI__BUILDER_HPP_
