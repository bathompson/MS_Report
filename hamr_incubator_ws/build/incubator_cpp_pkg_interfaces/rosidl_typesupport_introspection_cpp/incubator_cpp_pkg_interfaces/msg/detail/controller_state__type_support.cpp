// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from incubator_cpp_pkg_interfaces:msg/ControllerState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "incubator_cpp_pkg_interfaces/msg/detail/controller_state__struct.hpp"
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

void ControllerState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) incubator_cpp_pkg_interfaces::msg::ControllerState(_init);
}

void ControllerState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<incubator_cpp_pkg_interfaces::msg::ControllerState *>(message_memory);
  typed_message->~ControllerState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ControllerState_message_member_array[1] = {
  {
    "controller_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces::msg::ControllerState, controller_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ControllerState_message_members = {
  "incubator_cpp_pkg_interfaces::msg",  // message namespace
  "ControllerState",  // message name
  1,  // number of fields
  sizeof(incubator_cpp_pkg_interfaces::msg::ControllerState),
  ControllerState_message_member_array,  // message members
  ControllerState_init_function,  // function to initialize message memory (memory has to be allocated)
  ControllerState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ControllerState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControllerState_message_members,
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
get_message_type_support_handle<incubator_cpp_pkg_interfaces::msg::ControllerState>()
{
  return &::incubator_cpp_pkg_interfaces::msg::rosidl_typesupport_introspection_cpp::ControllerState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, incubator_cpp_pkg_interfaces, msg, ControllerState)() {
  return &::incubator_cpp_pkg_interfaces::msg::rosidl_typesupport_introspection_cpp::ControllerState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
