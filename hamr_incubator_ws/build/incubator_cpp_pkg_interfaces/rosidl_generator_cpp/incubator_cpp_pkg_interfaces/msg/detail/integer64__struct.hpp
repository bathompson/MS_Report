// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from incubator_cpp_pkg_interfaces:msg/Integer64.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__INTEGER64__STRUCT_HPP_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__INTEGER64__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__incubator_cpp_pkg_interfaces__msg__Integer64 __attribute__((deprecated))
#else
# define DEPRECATED__incubator_cpp_pkg_interfaces__msg__Integer64 __declspec(deprecated)
#endif

namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Integer64_
{
  using Type = Integer64_<ContainerAllocator>;

  explicit Integer64_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0ll;
    }
  }

  explicit Integer64_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0ll;
    }
  }

  // field types and members
  using _data_type =
    int64_t;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const int64_t & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    incubator_cpp_pkg_interfaces::msg::Integer64_<ContainerAllocator> *;
  using ConstRawPtr =
    const incubator_cpp_pkg_interfaces::msg::Integer64_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::Integer64_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::Integer64_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      incubator_cpp_pkg_interfaces::msg::Integer64_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<incubator_cpp_pkg_interfaces::msg::Integer64_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      incubator_cpp_pkg_interfaces::msg::Integer64_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<incubator_cpp_pkg_interfaces::msg::Integer64_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<incubator_cpp_pkg_interfaces::msg::Integer64_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<incubator_cpp_pkg_interfaces::msg::Integer64_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__incubator_cpp_pkg_interfaces__msg__Integer64
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::Integer64_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__incubator_cpp_pkg_interfaces__msg__Integer64
    std::shared_ptr<incubator_cpp_pkg_interfaces::msg::Integer64_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Integer64_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Integer64_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Integer64_

// alias to use template instance with default allocator
using Integer64 =
  incubator_cpp_pkg_interfaces::msg::Integer64_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace incubator_cpp_pkg_interfaces

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__INTEGER64__STRUCT_HPP_
