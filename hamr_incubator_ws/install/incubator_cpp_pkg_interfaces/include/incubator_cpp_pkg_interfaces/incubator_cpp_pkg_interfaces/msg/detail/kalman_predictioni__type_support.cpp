// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from incubator_cpp_pkg_interfaces:msg/KalmanPredictioni.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "incubator_cpp_pkg_interfaces/msg/detail/kalman_predictioni__struct.hpp"
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

void KalmanPredictioni_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) incubator_cpp_pkg_interfaces::msg::KalmanPredictioni(_init);
}

void KalmanPredictioni_fini_function(void * message_memory)
{
  auto typed_message = static_cast<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni *>(message_memory);
  typed_message->~KalmanPredictioni();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KalmanPredictioni_message_member_array[4] = {
  {
    "t_heater",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<incubator_cpp_pkg_interfaces::msg::DegreesCi>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces::msg::KalmanPredictioni, t_heater),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "prediction_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<incubator_cpp_pkg_interfaces::msg::DegreesCi>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces::msg::KalmanPredictioni, prediction_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "average_temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<incubator_cpp_pkg_interfaces::msg::DegreesCi>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces::msg::KalmanPredictioni, average_temperature),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "prediction_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<incubator_cpp_pkg_interfaces::msg::Secondsi>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces::msg::KalmanPredictioni, prediction_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KalmanPredictioni_message_members = {
  "incubator_cpp_pkg_interfaces::msg",  // message namespace
  "KalmanPredictioni",  // message name
  4,  // number of fields
  sizeof(incubator_cpp_pkg_interfaces::msg::KalmanPredictioni),
  KalmanPredictioni_message_member_array,  // message members
  KalmanPredictioni_init_function,  // function to initialize message memory (memory has to be allocated)
  KalmanPredictioni_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KalmanPredictioni_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KalmanPredictioni_message_members,
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
get_message_type_support_handle<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni>()
{
  return &::incubator_cpp_pkg_interfaces::msg::rosidl_typesupport_introspection_cpp::KalmanPredictioni_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, incubator_cpp_pkg_interfaces, msg, KalmanPredictioni)() {
  return &::incubator_cpp_pkg_interfaces::msg::rosidl_typesupport_introspection_cpp::KalmanPredictioni_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
