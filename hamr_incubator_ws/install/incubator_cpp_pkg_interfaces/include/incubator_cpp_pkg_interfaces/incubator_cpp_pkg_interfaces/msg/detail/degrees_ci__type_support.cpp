// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from incubator_cpp_pkg_interfaces:msg/DegreesCi.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DegreesCi_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) incubator_cpp_pkg_interfaces::msg::DegreesCi(_init);
}

void DegreesCi_fini_function(void * message_memory)
{
  auto typed_message = static_cast<incubator_cpp_pkg_interfaces::msg::DegreesCi *>(message_memory);
  typed_message->~DegreesCi();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DegreesCi_message_member_array[1] = {
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<incubator_cpp_pkg_interfaces::msg::Float32>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces::msg::DegreesCi, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DegreesCi_message_members = {
  "incubator_cpp_pkg_interfaces::msg",  // message namespace
  "DegreesCi",  // message name
  1,  // number of fields
  sizeof(incubator_cpp_pkg_interfaces::msg::DegreesCi),
  DegreesCi_message_member_array,  // message members
  DegreesCi_init_function,  // function to initialize message memory (memory has to be allocated)
  DegreesCi_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DegreesCi_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DegreesCi_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace incubator_cpp_pkg_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<incubator_cpp_pkg_interfaces::msg::DegreesCi>()
{
  return &::incubator_cpp_pkg_interfaces::msg::rosidl_typesupport_introspection_cpp::DegreesCi_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, incubator_cpp_pkg_interfaces, msg, DegreesCi)() {
  return &::incubator_cpp_pkg_interfaces::msg::rosidl_typesupport_introspection_cpp::DegreesCi_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
