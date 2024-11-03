// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from incubator_cpp_pkg_interfaces:msg/ClosedLoopParamUpdatesi.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CLOSED_LOOP_PARAM_UPDATESI__BUILDER_HPP_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CLOSED_LOOP_PARAM_UPDATESI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "incubator_cpp_pkg_interfaces/msg/detail/closed_loop_param_updatesi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

namespace builder
{

class Init_ClosedLoopParamUpdatesi_target_temperature
{
public:
  Init_ClosedLoopParamUpdatesi_target_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi target_temperature(::incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi::_target_temperature_type arg)
  {
    msg_.target_temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi>()
{
  return incubator_cpp_pkg_interfaces::msg::builder::Init_ClosedLoopParamUpdatesi_target_temperature();
}

}  // namespace incubator_cpp_pkg_interfaces

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CLOSED_LOOP_PARAM_UPDATESI__BUILDER_HPP_
