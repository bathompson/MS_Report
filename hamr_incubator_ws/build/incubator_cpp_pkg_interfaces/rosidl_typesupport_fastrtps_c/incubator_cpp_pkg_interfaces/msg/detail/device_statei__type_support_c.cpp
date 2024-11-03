// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from incubator_cpp_pkg_interfaces:msg/DeviceStatei.idl
// generated code does not contain a copyright notice
#include "incubator_cpp_pkg_interfaces/msg/detail/device_statei__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "incubator_cpp_pkg_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "incubator_cpp_pkg_interfaces/msg/detail/device_statei__struct.h"
#include "incubator_cpp_pkg_interfaces/msg/detail/device_statei__functions.h"
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
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__functions.h"  // average_internal_temp, t1, t2, t3
#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__functions.h"  // elapsed_time, execution_interval, t1_time, t2_time, t3_time

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


using _DeviceStatei__ros_msg_type = incubator_cpp_pkg_interfaces__msg__DeviceStatei;

static bool _DeviceStatei__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DeviceStatei__ros_msg_type * ros_message = static_cast<const _DeviceStatei__ros_msg_type *>(untyped_ros_message);
  // Field name: t1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, DegreesCi
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->t1, cdr))
    {
      return false;
    }
  }

  // Field name: t1_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->t1_time, cdr))
    {
      return false;
    }
  }

  // Field name: t2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, DegreesCi
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->t2, cdr))
    {
      return false;
    }
  }

  // Field name: t2_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->t2_time, cdr))
    {
      return false;
    }
  }

  // Field name: t3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, DegreesCi
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->t3, cdr))
    {
      return false;
    }
  }

  // Field name: t3_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->t3_time, cdr))
    {
      return false;
    }
  }

  // Field name: average_internal_temp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, DegreesCi
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->average_internal_temp, cdr))
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

  // Field name: execution_interval
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->execution_interval, cdr))
    {
      return false;
    }
  }

  // Field name: elapsed_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->elapsed_time, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _DeviceStatei__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DeviceStatei__ros_msg_type * ros_message = static_cast<_DeviceStatei__ros_msg_type *>(untyped_ros_message);
  // Field name: t1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, DegreesCi
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->t1))
    {
      return false;
    }
  }

  // Field name: t1_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->t1_time))
    {
      return false;
    }
  }

  // Field name: t2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, DegreesCi
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->t2))
    {
      return false;
    }
  }

  // Field name: t2_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->t2_time))
    {
      return false;
    }
  }

  // Field name: t3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, DegreesCi
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->t3))
    {
      return false;
    }
  }

  // Field name: t3_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->t3_time))
    {
      return false;
    }
  }

  // Field name: average_internal_temp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, DegreesCi
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->average_internal_temp))
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

  // Field name: execution_interval
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->execution_interval))
    {
      return false;
    }
  }

  // Field name: elapsed_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, Secondsi
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->elapsed_time))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_incubator_cpp_pkg_interfaces
size_t get_serialized_size_incubator_cpp_pkg_interfaces__msg__DeviceStatei(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DeviceStatei__ros_msg_type * ros_message = static_cast<const _DeviceStatei__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name t1

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__DegreesCi(
    &(ros_message->t1), current_alignment);
  // field.name t1_time

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__Secondsi(
    &(ros_message->t1_time), current_alignment);
  // field.name t2

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__DegreesCi(
    &(ros_message->t2), current_alignment);
  // field.name t2_time

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__Secondsi(
    &(ros_message->t2_time), current_alignment);
  // field.name t3

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__DegreesCi(
    &(ros_message->t3), current_alignment);
  // field.name t3_time

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__Secondsi(
    &(ros_message->t3_time), current_alignment);
  // field.name average_internal_temp

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__DegreesCi(
    &(ros_message->average_internal_temp), current_alignment);
  // field.name heater_on

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__Boolean(
    &(ros_message->heater_on), current_alignment);
  // field.name fan_on

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__Boolean(
    &(ros_message->fan_on), current_alignment);
  // field.name execution_interval

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__Secondsi(
    &(ros_message->execution_interval), current_alignment);
  // field.name elapsed_time

  current_alignment += get_serialized_size_incubator_cpp_pkg_interfaces__msg__Secondsi(
    &(ros_message->elapsed_time), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _DeviceStatei__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_incubator_cpp_pkg_interfaces__msg__DeviceStatei(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_incubator_cpp_pkg_interfaces
size_t max_serialized_size_incubator_cpp_pkg_interfaces__msg__DeviceStatei(
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

  // member: t1
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
  // member: t1_time
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
  // member: t2
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
  // member: t2_time
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
  // member: t3
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
  // member: t3_time
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
  // member: average_internal_temp
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
  // member: execution_interval
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
  // member: elapsed_time
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
    using DataType = incubator_cpp_pkg_interfaces__msg__DeviceStatei;
    is_plain =
      (
      offsetof(DataType, elapsed_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DeviceStatei__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_incubator_cpp_pkg_interfaces__msg__DeviceStatei(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DeviceStatei = {
  "incubator_cpp_pkg_interfaces::msg",
  "DeviceStatei",
  _DeviceStatei__cdr_serialize,
  _DeviceStatei__cdr_deserialize,
  _DeviceStatei__get_serialized_size,
  _DeviceStatei__max_serialized_size
};

static rosidl_message_type_support_t _DeviceStatei__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DeviceStatei,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, incubator_cpp_pkg_interfaces, msg, DeviceStatei)() {
  return &_DeviceStatei__type_support;
}

#if defined(__cplusplus)
}
#endif
