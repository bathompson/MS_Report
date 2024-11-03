// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from incubator_cpp_pkg_interfaces:msg/ControllerStatusi.idl
// generated code does not contain a copyright notice
#include "incubator_cpp_pkg_interfaces/msg/detail/controller_statusi__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "incubator_cpp_pkg_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "incubator_cpp_pkg_interfaces/msg/detail/controller_statusi__struct.h"
#include "incubator_cpp_pkg_interfaces/msg/detail/controller_statusi__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "incubator_cpp_pkg_interfaces/msg/detail/boolean__functions.h"  // fan_on, heater_on
#include "incubator_cpp_pkg_interfaces/msg/detail/controller_state__functions.h"  // current_state
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__functions.h"  // lower_bound, target_temp
#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__functions.h"  // cur_time, heating_gap, heating_time, next_time

// forward declare type support functions
size_t get_serialized_size_incubator_cpp_pkg_interfaces__msg__Boolean(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_incubator_cpp_pkg_interfaces__msg__Boolean(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Boolean)();
size_t get_serialized_size_incubator_cpp_pkg_interfaces__msg__ControllerState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_incubator_cpp_pkg_interfaces__msg__ControllerState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, ControllerState)();
size_t get_serialized_size_incubator_cpp_pkg_interfaces__msg__DegreesCi(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_incubator_cpp_pkg_interfaces__msg__DegreesCi(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, DegreesCi)();
size_t get_serialized_size_incubator_cpp_pkg_interfaces__msg__Secondsi(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_incubator_cpp_pkg_interfaces__msg__Secondsi(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi)();


using _ControllerStatusi__ros_msg_type = incubator_cpp_pkg_interfaces__msg__ControllerStatusi;

static bool _ControllerStatusi__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControllerStatusi__ros_msg_type * ros_message = static_cast<const _ControllerStatusi__ros_msg_type *>(untyped_ros_message);
  // Field name: cur_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cur_time, cdr))
    {
      return false;
    }
  }

  // Field name: heater_on
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Boolean
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->heater_on, cdr))
    {
      return false;
    }
  }

  // Field name: fan_on
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Boolean
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fan_on, cdr))
    {
      return false;
    }
  }

  // Field name: current_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, ControllerState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->current_state, cdr))
    {
      return false;
    }
  }

  // Field name: next_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->next_time, cdr))
    {
      return false;
    }
  }

  // Field name: target_temp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, DegreesCi
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->target_temp, cdr))
    {
      return false;
    }
  }

  // Field name: lower_bound
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, DegreesCi
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lower_bound, cdr))
    {
      return false;
    }
  }

  // Field name: heating_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->heating_time, cdr))
    {
      return false;
    }
  }

  // Field name: heating_gap
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->heating_gap, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ControllerStatusi__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControllerStatusi__ros_msg_type * ros_message = static_cast<_ControllerStatusi__ros_msg_type *>(untyped_ros_message);
  // Field name: cur_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cur_time))
    {
      return false;
    }
  }

  // Field name: heater_on
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Boolean
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->heater_on))
    {
      return false;
    }
  }

  // Field name: fan_on
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Boolean
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fan_on))
    {
      return false;
    }
  }

  // Field name: current_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, ControllerState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->current_state))
    {
      return false;
    }
  }

  // Field name: next_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->next_time))
    {
      return false;
    }
  }

  // Field name: target_temp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, DegreesCi
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->target_temp))
    {
      return false;
    }
  }

  // Field name: lower_bound
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, DegreesCi
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lower_bound))
    {
      return false;
    }
  }

  // Field name: heating_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->heating_time))
    {
      return false;
    }
  }

  // Field name: heating_gap
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->heating_gap))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_incubator_cpp_pkg_interfaces
size_t get_serialized_size_incubator_cpp_pkg_interfaces__msg__ControllerStatusi(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControllerStatusi__ros_msg_type * ros_message = static_cast<const _ControllerStatusi__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cur_time

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__Secondsi(
    &(ros_message->cur_time), current_alignment);
  // field.name heater_on

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__Boolean(
    &(ros_message->heater_on), current_alignment);
  // field.name fan_on

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__Boolean(
    &(ros_message->fan_on), current_alignment);
  // field.name current_state

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__ControllerState(
    &(ros_message->current_state), current_alignment);
  // field.name next_time

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__Secondsi(
    &(ros_message->next_time), current_alignment);
  // field.name target_temp

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__DegreesCi(
    &(ros_message->target_temp), current_alignment);
  // field.name lower_bound

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__DegreesCi(
    &(ros_message->lower_bound), current_alignment);
  // field.name heating_time

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__Secondsi(
    &(ros_message->heating_time), current_alignment);
  // field.name heating_gap

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__Secondsi(
    &(ros_message->heating_gap), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ControllerStatusi__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_incubator_cpp_pkg_interfaces__msg__ControllerStatusi(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_incubator_cpp_pkg_interfaces
size_t max_serialized_size_incubator_cpp_pkg_interfaces__msg__ControllerStatusi(
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

  // member: cur_time
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_incubator_cpp_pkg_interfaces__msg__Secondsi(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: heater_on
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_incubator_cpp_pkg_interfaces__msg__Boolean(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: fan_on
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_incubator_cpp_pkg_interfaces__msg__Boolean(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: current_state
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_incubator_cpp_pkg_interfaces__msg__ControllerState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: next_time
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_incubator_cpp_pkg_interfaces__msg__Secondsi(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: target_temp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_incubator_cpp_pkg_interfaces__msg__DegreesCi(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lower_bound
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_incubator_cpp_pkg_interfaces__msg__DegreesCi(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: heating_time
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_incubator_cpp_pkg_interfaces__msg__Secondsi(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: heating_gap
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_incubator_cpp_pkg_interfaces__msg__Secondsi(
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
    using DataType = incubator_cpp_pkg_interfaces__msg__ControllerStatusi;
    is_plain =
      (
      offsetof(DataType, heating_gap) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ControllerStatusi__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_incubator_cpp_pkg_interfaces__msg__ControllerStatusi(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControllerStatusi = {
  "incubator_cpp_pkg_interfaces::msg",
  "ControllerStatusi",
  _ControllerStatusi__cdr_serialize,
  _ControllerStatusi__cdr_deserialize,
  _ControllerStatusi__get_serialized_size,
  _ControllerStatusi__max_serialized_size
};

static rosidl_message_type_support_t _ControllerStatusi__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControllerStatusi,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, ControllerStatusi)() {
  return &_ControllerStatusi__type_support;
}

#if defined(__cplusplus)
}
#endif
