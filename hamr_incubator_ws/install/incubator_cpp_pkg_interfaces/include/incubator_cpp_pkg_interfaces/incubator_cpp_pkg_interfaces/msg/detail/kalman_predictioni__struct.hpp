// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from incubator_cpp_pkg_interfaces:msg/KalmanPredictioni.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__KALMAN_PREDICTIONI__STRUCT_HPP_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__KALMAN_PREDICTIONI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 't_heater'
// Member 'prediction_error'
// Member 'average_temperature'
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__struct.hpp"
// Member 'prediction_time'
#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__incubator_cpp_pkg_interfaces__msg__KalmanPredictioni __attribute__((deprecated))
#else
# define DEPRECATED__incubator_cpp_pkg_interfaces__msg__KalmanPredictioni __declspec(deprecated)
#endif

namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KalmanPredictioni_
{
  using Type = KalmanPredictioni_<ContainerAllocator>;

  explicit KalmanPredictioni_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : t_heater(_init),
    prediction_error(_init),
    average_temperature(_init),
    prediction_time(_init)
  {
    (void)_init;
  }

  explicit KalmanPredictioni_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : t_heater(_alloc, _init),
    prediction_error(_alloc, _init),
    average_temperature(_alloc, _init),
    prediction_time(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _t_heater_type =
    incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator>;
  _t_heater_type t_heater;
  using _prediction_error_type =
    incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator>;
  _prediction_error_type prediction_error;
  using _average_temperature_type =
    incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator>;
  _average_temperature_type average_temperature;
  using _prediction_time_type =
    incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator>;
  _prediction_time_type prediction_time;

  // setters for named parameter idiom
  Type & set__t_heater(
    const incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator> & _arg)
  {
    this->t_heater = _arg;
    return *this;
  }
  Type & set__prediction_error(
    const incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator> & _arg)
  {
    this->prediction_error = _arg;
    return *this;
  }
  Type & set__average_temperature(
    const incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator> & _arg)
  {
    this->average_temperature = _arg;
    return *this;
  }
  Type & set__prediction_time(
    const incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator> & _arg)
  {
    this->prediction_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    incubator_cpp_pkg_interfaces::msg::KalmanPredictioni_<ContainerAllocator> *;
  using ConstRawPtr =
    const incubator_cpp_pkg_interfaces::msg::KalmanPredictioni_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      incubator_cpp_pkg_interfaces::msg::KalmanPredictioni_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      incubator_cpp_pkg_interfaces::msg::KalmanPredictioni_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__incubator_cpp_pkg_interfaces__msg__KalmanPredictioni
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__incubator_cpp_pkg_interfaces__msg__KalmanPredictioni
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KalmanPredictioni_ & other) const
  {
    if (this->t_heater != other.t_heater) {
      return false;
    }
    if (this->prediction_error != other.prediction_error) {
      return false;
    }
    if (this->average_temperature != other.average_temperature) {
      return false;
    }
    if (this->prediction_time != other.prediction_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const KalmanPredictioni_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KalmanPredictioni_

// alias to use template instance with default allocator
using KalmanPredictioni =
  incubator_cpp_pkg_interfaces::msg::KalmanPredictioni_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace incubator_cpp_pkg_interfaces

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__KALMAN_PREDICTIONI__STRUCT_HPP_
