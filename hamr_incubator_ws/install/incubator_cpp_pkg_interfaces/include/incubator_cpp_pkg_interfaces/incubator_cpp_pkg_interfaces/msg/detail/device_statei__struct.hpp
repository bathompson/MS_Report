// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from incubator_cpp_pkg_interfaces:msg/DeviceStatei.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEVICE_STATEI__STRUCT_HPP_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEVICE_STATEI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 't1'
// Member 't2'
// Member 't3'
// Member 'average_internal_temp'
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__struct.hpp"
// Member 't1_time'
// Member 't2_time'
// Member 't3_time'
// Member 'execution_interval'
// Member 'elapsed_time'
#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__struct.hpp"
// Member 'heater_on'
// Member 'fan_on'
#include "incubator_cpp_pkg_interfaces/msg/detail/boolean__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__incubator_cpp_pkg_interfaces__msg__DeviceStatei __attribute__((deprecated))
#else
# define DEPRECATED__incubator_cpp_pkg_interfaces__msg__DeviceStatei __declspec(deprecated)
#endif

namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeviceStatei_
{
  using Type = DeviceStatei_<ContainerAllocator>;

  explicit DeviceStatei_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : t1(_init),
    t1_time(_init),
    t2(_init),
    t2_time(_init),
    t3(_init),
    t3_time(_init),
    average_internal_temp(_init),
    heater_on(_init),
    fan_on(_init),
    execution_interval(_init),
    elapsed_time(_init)
  {
    (void)_init;
  }

  explicit DeviceStatei_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : t1(_alloc, _init),
    t1_time(_alloc, _init),
    t2(_alloc, _init),
    t2_time(_alloc, _init),
    t3(_alloc, _init),
    t3_time(_alloc, _init),
    average_internal_temp(_alloc, _init),
    heater_on(_alloc, _init),
    fan_on(_alloc, _init),
    execution_interval(_alloc, _init),
    elapsed_time(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _t1_type =
    incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator>;
  _t1_type t1;
  using _t1_time_type =
    incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator>;
  _t1_time_type t1_time;
  using _t2_type =
    incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator>;
  _t2_type t2;
  using _t2_time_type =
    incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator>;
  _t2_time_type t2_time;
  using _t3_type =
    incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator>;
  _t3_type t3;
  using _t3_time_type =
    incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator>;
  _t3_time_type t3_time;
  using _average_internal_temp_type =
    incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator>;
  _average_internal_temp_type average_internal_temp;
  using _heater_on_type =
    incubator_cpp_pkg_interfaces::msg::Boolean_<ContainerAllocator>;
  _heater_on_type heater_on;
  using _fan_on_type =
    incubator_cpp_pkg_interfaces::msg::Boolean_<ContainerAllocator>;
  _fan_on_type fan_on;
  using _execution_interval_type =
    incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator>;
  _execution_interval_type execution_interval;
  using _elapsed_time_type =
    incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator>;
  _elapsed_time_type elapsed_time;

  // setters for named parameter idiom
  Type & set__t1(
    const incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator> & _arg)
  {
    this->t1 = _arg;
    return *this;
  }
  Type & set__t1_time(
    const incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator> & _arg)
  {
    this->t1_time = _arg;
    return *this;
  }
  Type & set__t2(
    const incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator> & _arg)
  {
    this->t2 = _arg;
    return *this;
  }
  Type & set__t2_time(
    const incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator> & _arg)
  {
    this->t2_time = _arg;
    return *this;
  }
  Type & set__t3(
    const incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator> & _arg)
  {
    this->t3 = _arg;
    return *this;
  }
  Type & set__t3_time(
    const incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator> & _arg)
  {
    this->t3_time = _arg;
    return *this;
  }
  Type & set__average_internal_temp(
    const incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator> & _arg)
  {
    this->average_internal_temp = _arg;
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
  Type & set__execution_interval(
    const incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator> & _arg)
  {
    this->execution_interval = _arg;
    return *this;
  }
  Type & set__elapsed_time(
    const incubator_cpp_pkg_interfaces::msg::Secondsi_<ContainerAllocator> & _arg)
  {
    this->elapsed_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    incubator_cpp_pkg_interfaces::msg::DeviceStatei_<ContainerAllocator> *;
  using ConstRawPtr =
    const incubator_cpp_pkg_interfaces::msg::DeviceStatei_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::DeviceStatei_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::DeviceStatei_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      incubator_cpp_pkg_interfaces::msg::DeviceStatei_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<incubator_cpp_pkg_interfaces::msg::DeviceStatei_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      incubator_cpp_pkg_interfaces::msg::DeviceStatei_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<incubator_cpp_pkg_interfaces::msg::DeviceStatei_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<incubator_cpp_pkg_interfaces::msg::DeviceStatei_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<incubator_cpp_pkg_interfaces::msg::DeviceStatei_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__incubator_cpp_pkg_interfaces__msg__DeviceStatei
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::DeviceStatei_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__incubator_cpp_pkg_interfaces__msg__DeviceStatei
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::DeviceStatei_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeviceStatei_ & other) const
  {
    if (this->t1 != other.t1) {
      return false;
    }
    if (this->t1_time != other.t1_time) {
      return false;
    }
    if (this->t2 != other.t2) {
      return false;
    }
    if (this->t2_time != other.t2_time) {
      return false;
    }
    if (this->t3 != other.t3) {
      return false;
    }
    if (this->t3_time != other.t3_time) {
      return false;
    }
    if (this->average_internal_temp != other.average_internal_temp) {
      return false;
    }
    if (this->heater_on != other.heater_on) {
      return false;
    }
    if (this->fan_on != other.fan_on) {
      return false;
    }
    if (this->execution_interval != other.execution_interval) {
      return false;
    }
    if (this->elapsed_time != other.elapsed_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeviceStatei_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeviceStatei_

// alias to use template instance with default allocator
using DeviceStatei =
  incubator_cpp_pkg_interfaces::msg::DeviceStatei_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace incubator_cpp_pkg_interfaces

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEVICE_STATEI__STRUCT_HPP_
