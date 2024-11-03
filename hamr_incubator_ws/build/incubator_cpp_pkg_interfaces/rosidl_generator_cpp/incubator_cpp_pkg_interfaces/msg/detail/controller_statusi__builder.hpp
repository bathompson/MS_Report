// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from incubator_cpp_pkg_interfaces:msg/ControllerStatusi.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATUSI__BUILDER_HPP_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATUSI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "incubator_cpp_pkg_interfaces/msg/detail/controller_statusi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

namespace builder
{

class Init_ControllerStatusi_heating_gap
{
public:
  explicit Init_ControllerStatusi_heating_gap(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi & msg)
  : msg_(msg)
  {}
  ::incubator_cpp_pkg_interfaces::msg::ControllerStatusi heating_gap(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi::_heating_gap_type arg)
  {
    msg_.heating_gap = std::move(arg);
    return std::move(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::ControllerStatusi msg_;
};

class Init_ControllerStatusi_heating_time
{
public:
  explicit Init_ControllerStatusi_heating_time(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi & msg)
  : msg_(msg)
  {}
  Init_ControllerStatusi_heating_gap heating_time(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi::_heating_time_type arg)
  {
    msg_.heating_time = std::move(arg);
    return Init_ControllerStatusi_heating_gap(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::ControllerStatusi msg_;
};

class Init_ControllerStatusi_lower_bound
{
public:
  explicit Init_ControllerStatusi_lower_bound(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi & msg)
  : msg_(msg)
  {}
  Init_ControllerStatusi_heating_time lower_bound(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi::_lower_bound_type arg)
  {
    msg_.lower_bound = std::move(arg);
    return Init_ControllerStatusi_heating_time(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::ControllerStatusi msg_;
};

class Init_ControllerStatusi_target_temp
{
public:
  explicit Init_ControllerStatusi_target_temp(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi & msg)
  : msg_(msg)
  {}
  Init_ControllerStatusi_lower_bound target_temp(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi::_target_temp_type arg)
  {
    msg_.target_temp = std::move(arg);
    return Init_ControllerStatusi_lower_bound(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::ControllerStatusi msg_;
};

class Init_ControllerStatusi_next_time
{
public:
  explicit Init_ControllerStatusi_next_time(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi & msg)
  : msg_(msg)
  {}
  Init_ControllerStatusi_target_temp next_time(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi::_next_time_type arg)
  {
    msg_.next_time = std::move(arg);
    return Init_ControllerStatusi_target_temp(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::ControllerStatusi msg_;
};

class Init_ControllerStatusi_current_state
{
public:
  explicit Init_ControllerStatusi_current_state(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi & msg)
  : msg_(msg)
  {}
  Init_ControllerStatusi_next_time current_state(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return Init_ControllerStatusi_next_time(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::ControllerStatusi msg_;
};

class Init_ControllerStatusi_fan_on
{
public:
  explicit Init_ControllerStatusi_fan_on(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi & msg)
  : msg_(msg)
  {}
  Init_ControllerStatusi_current_state fan_on(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi::_fan_on_type arg)
  {
    msg_.fan_on = std::move(arg);
    return Init_ControllerStatusi_current_state(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::ControllerStatusi msg_;
};

class Init_ControllerStatusi_heater_on
{
public:
  explicit Init_ControllerStatusi_heater_on(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi & msg)
  : msg_(msg)
  {}
  Init_ControllerStatusi_fan_on heater_on(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi::_heater_on_type arg)
  {
    msg_.heater_on = std::move(arg);
    return Init_ControllerStatusi_fan_on(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::ControllerStatusi msg_;
};

class Init_ControllerStatusi_cur_time
{
public:
  Init_ControllerStatusi_cur_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerStatusi_heater_on cur_time(::incubator_cpp_pkg_interfaces::msg::ControllerStatusi::_cur_time_type arg)
  {
    msg_.cur_time = std::move(arg);
    return Init_ControllerStatusi_heater_on(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::ControllerStatusi msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::incubator_cpp_pkg_interfaces::msg::ControllerStatusi>()
{
  return incubator_cpp_pkg_interfaces::msg::builder::Init_ControllerStatusi_cur_time();
}

}  // namespace incubator_cpp_pkg_interfaces

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATUSI__BUILDER_HPP_
