// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from incubator_cpp_pkg_interfaces:msg/ClosedLoopParamUpdatesi.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CLOSED_LOOP_PARAM_UPDATESI__STRUCT_HPP_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CLOSED_LOOP_PARAM_UPDATESI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_temperature'
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__incubator_cpp_pkg_interfaces__msg__ClosedLoopParamUpdatesi __attribute__((deprecated))
#else
# define DEPRECATED__incubator_cpp_pkg_interfaces__msg__ClosedLoopParamUpdatesi __declspec(deprecated)
#endif

namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClosedLoopParamUpdatesi_
{
  using Type = ClosedLoopParamUpdatesi_<ContainerAllocator>;

  explicit ClosedLoopParamUpdatesi_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_temperature(_init)
  {
    (void)_init;
  }

  explicit ClosedLoopParamUpdatesi_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_temperature(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _target_temperature_type =
    incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator>;
  _target_temperature_type target_temperature;

  // setters for named parameter idiom
  Type & set__target_temperature(
    const incubator_cpp_pkg_interfaces::msg::DegreesCi_<ContainerAllocator> & _arg)
  {
    this->target_temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi_<ContainerAllocator> *;
  using ConstRawPtr =
    const incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__incubator_cpp_pkg_interfaces__msg__ClosedLoopParamUpdatesi
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__incubator_cpp_pkg_interfaces__msg__ClosedLoopParamUpdatesi
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClosedLoopParamUpdatesi_ & other) const
  {
    if (this->target_temperature != other.target_temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClosedLoopParamUpdatesi_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClosedLoopParamUpdatesi_

// alias to use template instance with default allocator
using ClosedLoopParamUpdatesi =
  incubator_cpp_pkg_interfaces::msg::ClosedLoopParamUpdatesi_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace incubator_cpp_pkg_interfaces

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__CLOSED_LOOP_PARAM_UPDATESI__STRUCT_HPP_
