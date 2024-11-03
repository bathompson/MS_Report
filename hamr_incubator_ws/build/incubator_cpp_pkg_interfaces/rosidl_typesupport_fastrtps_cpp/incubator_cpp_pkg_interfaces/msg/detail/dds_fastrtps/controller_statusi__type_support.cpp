// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from incubator_cpp_pkg_interfaces:msg/ControllerStatusi.idl
// generated code does not contain a copyright notice
#include "incubator_cpp_pkg_interfaces/msg/detail/controller_statusi__rosidl_typesupport_fastrtps_cpp.hpp"
#include "incubator_cpp_pkg_interfaces/msg/detail/controller_statusi__struct.hpp"

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
bool cdr_serialize(
  const incubator_cpp_pkg_interfaces::msg::Boolean &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  incubator_cpp_pkg_interfaces::msg::Boolean &);
size_t get_serialized_size(
  const incubator_cpp_pkg_interfaces::msg::Boolean &,
  size_t current_alignment);
size_t
max_serialized_size_Boolean(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace incubator_cpp_pkg_interfaces

// functions for incubator_cpp_pkg_interfaces::msg::Boolean already declared above

namespace incubator_cpp_pkg_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const incubator_cpp_pkg_interfaces::msg::ControllerState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  incubator_cpp_pkg_interfaces::msg::ControllerState &);
size_t get_serialized_size(
  const incubator_cpp_pkg_interfaces::msg::ControllerState &,
  size_t current_alignment);
size_t
max_serialized_size_ControllerState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace incubator_cpp_pkg_interfaces

// functions for incubator_cpp_pkg_interfaces::msg::Secondsi already declared above

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

// functions for incubator_cpp_pkg_interfaces::msg::Secondsi already declared above

// functions for incubator_cpp_pkg_interfaces::msg::Secondsi already declared above


namespace incubator_cpp_pkg_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_incubator_cpp_pkg_interfaces
cdr_serialize(
  const incubator_cpp_pkg_interfaces::msg::ControllerStatusi & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cur_time
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.cur_time,
    cdr);
  // Member: heater_on
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.heater_on,
    cdr);
  // Member: fan_on
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.fan_on,
    cdr);
  // Member: current_state
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.current_state,
    cdr);
  // Member: next_time
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.next_time,
    cdr);
  // Member: target_temp
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.target_temp,
    cdr);
  // Member: lower_bound
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.lower_bound,
    cdr);
  // Member: heating_time
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.heating_time,
    cdr);
  // Member: heating_gap
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.heating_gap,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_incubator_cpp_pkg_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  incubator_cpp_pkg_interfaces::msg::ControllerStatusi & ros_message)
{
  // Member: cur_time
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.cur_time);

  // Member: heater_on
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.heater_on);

  // Member: fan_on
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.fan_on);

  // Member: current_state
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.current_state);

  // Member: next_time
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.next_time);

  // Member: target_temp
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.target_temp);

  // Member: lower_bound
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.lower_bound);

  // Member: heating_time
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.heating_time);

  // Member: heating_gap
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.heating_gap);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_incubator_cpp_pkg_interfaces
get_serialized_size(
  const incubator_cpp_pkg_interfaces::msg::ControllerStatusi & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cur_time

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.cur_time, current_alignment);
  // Member: heater_on

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.heater_on, current_alignment);
  // Member: fan_on

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.fan_on, current_alignment);
  // Member: current_state

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.current_state, current_alignment);
  // Member: next_time

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.next_time, current_alignment);
  // Member: target_temp

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.target_temp, current_alignment);
  // Member: lower_bound

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.lower_bound, current_alignment);
  // Member: heating_time

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.heating_time, current_alignment);
  // Member: heating_gap

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.heating_gap, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_incubator_cpp_pkg_interfaces
max_serialized_size_ControllerStatusi(
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


  // Member: cur_time
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

  // Member: heater_on
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Boolean(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: fan_on
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Boolean(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: current_state
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_ControllerState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: next_time
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

  // Member: target_temp
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

  // Member: lower_bound
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

  // Member: heating_time
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

  // Member: heating_gap
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
    using DataType = incubator_cpp_pkg_interfaces::msg::ControllerStatusi;
    is_plain =
      (
      offsetof(DataType, heating_gap) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ControllerStatusi__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const incubator_cpp_pkg_interfaces::msg::ControllerStatusi *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControllerStatusi__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<incubator_cpp_pkg_interfaces::msg::ControllerStatusi *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControllerStatusi__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const incubator_cpp_pkg_interfaces::msg::ControllerStatusi *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControllerStatusi__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ControllerStatusi(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ControllerStatusi__callbacks = {
  "incubator_cpp_pkg_interfaces::msg",
  "ControllerStatusi",
  _ControllerStatusi__cdr_serialize,
  _ControllerStatusi__cdr_deserialize,
  _ControllerStatusi__get_serialized_size,
  _ControllerStatusi__max_serialized_size
};

static rosidl_message_type_support_t _ControllerStatusi__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControllerStatusi__callbacks,
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
get_message_type_support_handle<incubator_cpp_pkg_interfaces::msg::ControllerStatusi>()
{
  return &incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::_ControllerStatusi__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, incubator_cpp_pkg_interfaces, msg, ControllerStatusi)() {
  return &incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::_ControllerStatusi__handle;
}

#ifdef __cplusplus
}
#endif
