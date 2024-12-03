// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from incubator_cpp_pkg_interfaces:msg/KalmanPredictioni.idl
// generated code does not contain a copyright notice
#include "incubator_cpp_pkg_interfaces/msg/detail/kalman_predictioni__rosidl_typesupport_fastrtps_cpp.hpp"
#include "incubator_cpp_pkg_interfaces/msg/detail/kalman_predictioni__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace incubator_cpp_pkg_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const incubator_cpp_pkg_interfaces::msg::DegreesCi &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  incubator_cpp_pkg_interfaces::msg::DegreesCi &);
size_t get_serialized_size(
  const incubator_cpp_pkg_interfaces::msg::DegreesCi &,
  size_t current_alignment);
size_t
max_serialized_size_DegreesCi(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace incubator_cpp_pkg_interfaces

// functions for incubator_cpp_pkg_interfaces::msg::DegreesCi already declared above

// functions for incubator_cpp_pkg_interfaces::msg::DegreesCi already declared above

namespace incubator_cpp_pkg_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const incubator_cpp_pkg_interfaces::msg::Secondsi &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  incubator_cpp_pkg_interfaces::msg::Secondsi &);
size_t get_serialized_size(
  const incubator_cpp_pkg_interfaces::msg::Secondsi &,
  size_t current_alignment);
size_t
max_serialized_size_Secondsi(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace incubator_cpp_pkg_interfaces


namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_incubator_cpp_pkg_interfaces
cdr_serialize(
  const incubator_cpp_pkg_interfaces::msg::KalmanPredictioni & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: t_heater
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.t_heater,
    cdr);
  // Member: prediction_error
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.prediction_error,
    cdr);
  // Member: average_temperature
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.average_temperature,
    cdr);
  // Member: prediction_time
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.prediction_time,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_incubator_cpp_pkg_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  incubator_cpp_pkg_interfaces::msg::KalmanPredictioni & ros_message)
{
  // Member: t_heater
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.t_heater);

  // Member: prediction_error
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.prediction_error);

  // Member: average_temperature
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.average_temperature);

  // Member: prediction_time
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.prediction_time);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_incubator_cpp_pkg_interfaces
get_serialized_size(
  const incubator_cpp_pkg_interfaces::msg::KalmanPredictioni & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: t_heater

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.t_heater, current_alignment);
  // Member: prediction_error

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.prediction_error, current_alignment);
  // Member: average_temperature

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.average_temperature, current_alignment);
  // Member: prediction_time

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.prediction_time, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_incubator_cpp_pkg_interfaces
max_serialized_size_KalmanPredictioni(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: t_heater
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_DegreesCi(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: prediction_error
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_DegreesCi(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: average_temperature
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_DegreesCi(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: prediction_time
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Secondsi(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = incubator_cpp_pkg_interfaces::msg::KalmanPredictioni;
    is_plain =
      (
      offsetof(DataType, prediction_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _KalmanPredictioni__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const incubator_cpp_pkg_interfaces::msg::KalmanPredictioni *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _KalmanPredictioni__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _KalmanPredictioni__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const incubator_cpp_pkg_interfaces::msg::KalmanPredictioni *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _KalmanPredictioni__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_KalmanPredictioni(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _KalmanPredictioni__callbacks = {
  "incubator_cpp_pkg_interfaces::msg",
  "KalmanPredictioni",
  _KalmanPredictioni__cdr_serialize,
  _KalmanPredictioni__cdr_deserialize,
  _KalmanPredictioni__get_serialized_size,
  _KalmanPredictioni__max_serialized_size
};

static rosidl_message_type_support_t _KalmanPredictioni__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_KalmanPredictioni__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace incubator_cpp_pkg_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_incubator_cpp_pkg_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<incubator_cpp_pkg_interfaces::msg::KalmanPredictioni>()
{
  return &incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::_KalmanPredictioni__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, incubator_cpp_pkg_interfaces, msg, KalmanPredictioni)() {
  return &incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::_KalmanPredictioni__handle;
}

#ifdef __cplusplus
}
#endif
