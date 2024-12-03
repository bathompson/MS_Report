// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from incubator_cpp_pkg_interfaces:msg/KalmanPredictioni.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__KALMAN_PREDICTIONI__BUILDER_HPP_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__KALMAN_PREDICTIONI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "incubator_cpp_pkg_interfaces/msg/detail/kalman_predictioni__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

namespace builder
{

class Init_KalmanPredictioni_prediction_time
{
public:
  explicit Init_KalmanPredictioni_prediction_time(::incubator_cpp_pkg_interfaces::msg::KalmanPredictioni & msg)
  : msg_(msg)
  {}
  ::incubator_cpp_pkg_interfaces::msg::KalmanPredictioni prediction_time(::incubator_cpp_pkg_interfaces::msg::KalmanPredictioni::_prediction_time_type arg)
  {
    msg_.prediction_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::KalmanPredictioni msg_;
};

class Init_KalmanPredictioni_average_temperature
{
public:
  explicit Init_KalmanPredictioni_average_temperature(::incubator_cpp_pkg_interfaces::msg::KalmanPredictioni & msg)
  : msg_(msg)
  {}
  Init_KalmanPredictioni_prediction_time average_temperature(::incubator_cpp_pkg_interfaces::msg::KalmanPredictioni::_average_temperature_type arg)
  {
    msg_.average_temperature = std::move(arg);
    return Init_KalmanPredictioni_prediction_time(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::KalmanPredictioni msg_;
};

class Init_KalmanPredictioni_prediction_error
{
public:
  explicit Init_KalmanPredictioni_prediction_error(::incubator_cpp_pkg_interfaces::msg::KalmanPredictioni & msg)
  : msg_(msg)
  {}
  Init_KalmanPredictioni_average_temperature prediction_error(::incubator_cpp_pkg_interfaces::msg::KalmanPredictioni::_prediction_error_type arg)
  {
    msg_.prediction_error = std::move(arg);
    return Init_KalmanPredictioni_average_temperature(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::KalmanPredictioni msg_;
};

class Init_KalmanPredictioni_t_heater
{
public:
  Init_KalmanPredictioni_t_heater()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KalmanPredictioni_prediction_error t_heater(::incubator_cpp_pkg_interfaces::msg::KalmanPredictioni::_t_heater_type arg)
  {
    msg_.t_heater = std::move(arg);
    return Init_KalmanPredictioni_prediction_error(msg_);
  }

private:
  ::incubator_cpp_pkg_interfaces::msg::KalmanPredictioni msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::incubator_cpp_pkg_interfaces::msg::KalmanPredictioni>()
{
  return incubator_cpp_pkg_interfaces::msg::builder::Init_KalmanPredictioni_t_heater();
}

}  // namespace incubator_cpp_pkg_interfaces

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__KALMAN_PREDICTIONI__BUILDER_HPP_
