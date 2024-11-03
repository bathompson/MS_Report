// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from incubator_cpp_pkg_interfaces:msg/DeviceStatei.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEVICE_STATEI__BUILDER_HPP_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEVICE_STATEI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "incubator_cpp_pkg_interfaces/msg/detail/device_statei__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

namespace builder
{

class Init_DeviceStatei_elapsed_time
{
public:
  explicit Init_DeviceStatei_elapsed_time(::incubator_cpp_pkg_interfaces::msg::DeviceStatei & msg)
  : msg_(msg)
  {}
  ::incubator_cpp_pkg_interfaces::msg::DeviceStatei elapsed_time(::incubator_cpp_pkg_interfaces::msg::DeviceStatei::_elapsed_time_type arg)
  {
    msg_.elapsed_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::DeviceStatei msg_;
};

class Init_DeviceStatei_execution_interval
{
public:
  explicit Init_DeviceStatei_execution_interval(::incubator_cpp_pkg_interfaces::msg::DeviceStatei & msg)
  : msg_(msg)
  {}
  Init_DeviceStatei_elapsed_time execution_interval(::incubator_cpp_pkg_interfaces::msg::DeviceStatei::_execution_interval_type arg)
  {
    msg_.execution_interval = std::move(arg);
    return Init_DeviceStatei_elapsed_time(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::DeviceStatei msg_;
};

class Init_DeviceStatei_fan_on
{
public:
  explicit Init_DeviceStatei_fan_on(::incubator_cpp_pkg_interfaces::msg::DeviceStatei & msg)
  : msg_(msg)
  {}
  Init_DeviceStatei_execution_interval fan_on(::incubator_cpp_pkg_interfaces::msg::DeviceStatei::_fan_on_type arg)
  {
    msg_.fan_on = std::move(arg);
    return Init_DeviceStatei_execution_interval(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::DeviceStatei msg_;
};

class Init_DeviceStatei_heater_on
{
public:
  explicit Init_DeviceStatei_heater_on(::incubator_cpp_pkg_interfaces::msg::DeviceStatei & msg)
  : msg_(msg)
  {}
  Init_DeviceStatei_fan_on heater_on(::incubator_cpp_pkg_interfaces::msg::DeviceStatei::_heater_on_type arg)
  {
    msg_.heater_on = std::move(arg);
    return Init_DeviceStatei_fan_on(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::DeviceStatei msg_;
};

class Init_DeviceStatei_average_internal_temp
{
public:
  explicit Init_DeviceStatei_average_internal_temp(::incubator_cpp_pkg_interfaces::msg::DeviceStatei & msg)
  : msg_(msg)
  {}
  Init_DeviceStatei_heater_on average_internal_temp(::incubator_cpp_pkg_interfaces::msg::DeviceStatei::_average_internal_temp_type arg)
  {
    msg_.average_internal_temp = std::move(arg);
    return Init_DeviceStatei_heater_on(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::DeviceStatei msg_;
};

class Init_DeviceStatei_t3_time
{
public:
  explicit Init_DeviceStatei_t3_time(::incubator_cpp_pkg_interfaces::msg::DeviceStatei & msg)
  : msg_(msg)
  {}
  Init_DeviceStatei_average_internal_temp t3_time(::incubator_cpp_pkg_interfaces::msg::DeviceStatei::_t3_time_type arg)
  {
    msg_.t3_time = std::move(arg);
    return Init_DeviceStatei_average_internal_temp(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::DeviceStatei msg_;
};

class Init_DeviceStatei_t3
{
public:
  explicit Init_DeviceStatei_t3(::incubator_cpp_pkg_interfaces::msg::DeviceStatei & msg)
  : msg_(msg)
  {}
  Init_DeviceStatei_t3_time t3(::incubator_cpp_pkg_interfaces::msg::DeviceStatei::_t3_type arg)
  {
    msg_.t3 = std::move(arg);
    return Init_DeviceStatei_t3_time(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::DeviceStatei msg_;
};

class Init_DeviceStatei_t2_time
{
public:
  explicit Init_DeviceStatei_t2_time(::incubator_cpp_pkg_interfaces::msg::DeviceStatei & msg)
  : msg_(msg)
  {}
  Init_DeviceStatei_t3 t2_time(::incubator_cpp_pkg_interfaces::msg::DeviceStatei::_t2_time_type arg)
  {
    msg_.t2_time = std::move(arg);
    return Init_DeviceStatei_t3(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::DeviceStatei msg_;
};

class Init_DeviceStatei_t2
{
public:
  explicit Init_DeviceStatei_t2(::incubator_cpp_pkg_interfaces::msg::DeviceStatei & msg)
  : msg_(msg)
  {}
  Init_DeviceStatei_t2_time t2(::incubator_cpp_pkg_interfaces::msg::DeviceStatei::_t2_type arg)
  {
    msg_.t2 = std::move(arg);
    return Init_DeviceStatei_t2_time(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::DeviceStatei msg_;
};

class Init_DeviceStatei_t1_time
{
public:
  explicit Init_DeviceStatei_t1_time(::incubator_cpp_pkg_interfaces::msg::DeviceStatei & msg)
  : msg_(msg)
  {}
  Init_DeviceStatei_t2 t1_time(::incubator_cpp_pkg_interfaces::msg::DeviceStatei::_t1_time_type arg)
  {
    msg_.t1_time = std::move(arg);
    return Init_DeviceStatei_t2(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::DeviceStatei msg_;
};

class Init_DeviceStatei_t1
{
public:
  Init_DeviceStatei_t1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeviceStatei_t1_time t1(::incubator_cpp_pkg_interfaces::msg::DeviceStatei::_t1_type arg)
  {
    msg_.t1 = std::move(arg);
    return Init_DeviceStatei_t1_time(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::DeviceStatei msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::incubator_cpp_pkg_interfaces::msg::DeviceStatei>()
{
  return incubator_cpp_pkg_interfaces::msg::builder::Init_DeviceStatei_t1();
}

}  // namespace incubator_cpp_pkg_interfaces

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEVICE_STATEI__BUILDER_HPP_
