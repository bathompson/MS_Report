// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from incubator_cpp_pkg_interfaces:msg/ControllerStatusi.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATUSI__STRUCT_HPP_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATUSI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cur_time'
// Member 'next_time'
// Member 'heating_time'
// Member 'heating_gap'
#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__struct.hpp"
// Member 'heater_on'
// Member 'fan_on'
#include "incubator_cpp_pkg_interfaces/msg/detail/boolean__struct.hpp"
// Member 'current_state'
#include "incubator_cpp_pkg_interfaces/msg/detail/controller_state__struct.hpp"
// Member 'target_temp'
// Member 'lower_bound'
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__incubator_cpp_pkg_interfaces__msg__ControllerStatusi __attribute__((deprecated))
#else
# define DEPRECATED__incubator_cpp_pkg_interfaces__msg__ControllerStatusi __declspec(deprecated)
#endif

namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerStatusi_
{
  using Type = ControllerStatusi_<ContainerAllocator>;

  explicit ControllerStatusi_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cur_time(_init),
    heater_on(_init),
    fan_on(_init),
    current_state(_init),
    next_time(_init),
    target_temp(_init),
    lower_bound(_init),
    heating_time(_init),
    heating_gap(_init)
  {
    (void)_init;
  }

  explicit ControllerStatusi_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cur_time(_alloc, _init),
    heater_on(_alloc, _init),
    fan_on(_alloc, _init),
    current_state(_alloc, _init),
    next_time(_alloc, _init),
    target_temp(_alloc, _init),
    lower_bound(_alloc, _init),
    heating_time(_alloc, _init),
    heating_gap(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _cur_time_type =
    incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator>;
  _cur_time_type cur_time;
  using _heater_on_type =
    incubator_cpp_pkg_interfaces::msg::Boolean_<ContainerAllocator>;
  _heater_on_type heater_on;
  using _fan_on_type =
    incubator_cpp_pkg_interfaces::msg::Boolean_<ContainerAllocator>;
  _fan_on_type fan_on;
  using _current_state_type =
    incubator_cpp_pkg_interfaces::msg::ControllerState_<ContainerAllocator>;
  _current_state_type current_state;
  using _next_time_type =
    incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator>;
  _next_time_type next_time;
  using _target_temp_type =
    incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator>;
  _target_temp_type target_temp;
  using _lower_bound_type =
    incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator>;
  _lower_bound_type lower_bound;
  using _heating_time_type =
    incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator>;
  _heating_time_type heating_time;
  using _heating_gap_type =
    incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator>;
  _heating_gap_type heating_gap;

  // setters for named parameter idiom
  Type & set__cur_time(
    const incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator> & _arg)
  {
    this->cur_time = _arg;
    return *this;
  }
  Type & set__heater_on(
    const incubator_cpp_pkg_interfaces::msg::Boolean_<ContainerAllocator> & _arg)
  {
    this->heater_on = _arg;
    return *this;
  }
  Type & set__fan_on(
    const incubator_cpp_pkg_interfaces::msg::Boolean_<ContainerAllocator> & _arg)
  {
    this->fan_on = _arg;
    return *this;
  }
  Type & set__current_state(
    const incubator_cpp_pkg_interfaces::msg::ControllerState_<ContainerAllocator> & _arg)
  {
    this->current_state = _arg;
    return *this;
  }
  Type & set__next_time(
    const incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator> & _arg)
  {
    this->next_time = _arg;
    return *this;
  }
  Type & set__target_temp(
    const incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator> & _arg)
  {
    this->target_temp = _arg;
    return *this;
  }
  Type & set__lower_bound(
    const incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator> & _arg)
  {
    this->lower_bound = _arg;
    return *this;
  }
  Type & set__heating_time(
    const incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator> & _arg)
  {
    this->heating_time = _arg;
    return *this;
  }
  Type & set__heating_gap(
    const incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator> & _arg)
  {
    this->heating_gap = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    incubator_cpp_pkg_interfaces::msg::ControllerStatusi_<ContainerAllocator> *;
  using ConstRawPtr =
    const incubator_cpp_pkg_interfaces::msg::ControllerStatusi_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::ControllerStatusi_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::ControllerStatusi_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      incubator_cpp_pkg_interfaces::msg::ControllerStatusi_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<incubator_cpp_pkg_interfaces::msg::ControllerStatusi_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      incubator_cpp_pkg_interfaces::msg::ControllerStatusi_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<incubator_cpp_pkg_interfaces::msg::ControllerStatusi_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<incubator_cpp_pkg_interfaces::msg::ControllerStatusi_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<incubator_cpp_pkg_interfaces::msg::ControllerStatusi_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__incubator_cpp_pkg_interfaces__msg__ControllerStatusi
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::ControllerStatusi_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__incubator_cpp_pkg_interfaces__msg__ControllerStatusi
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::ControllerStatusi_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerStatusi_ & other) const
  {
    if (this->cur_time != other.cur_time) {
      return false;
    }
    if (this->heater_on != other.heater_on) {
      return false;
    }
    if (this->fan_on != other.fan_on) {
      return false;
    }
    if (this->current_state != other.current_state) {
      return false;
    }
    if (this->next_time != other.next_time) {
      return false;
    }
    if (this->target_temp != other.target_temp) {
      return false;
    }
    if (this->lower_bound != other.lower_bound) {
      return false;
    }
    if (this->heating_time != other.heating_time) {
      return false;
    }
    if (this->heating_gap != other.heating_gap) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerStatusi_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerStatusi_

// alias to use template instance with default allocator
using ControllerStatusi =
  incubator_cpp_pkg_interfaces::msg::ControllerStatusi_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace incubator_cpp_pkg_interfaces

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CONTROLLER_STATUSI__STRUCT_HPP_
