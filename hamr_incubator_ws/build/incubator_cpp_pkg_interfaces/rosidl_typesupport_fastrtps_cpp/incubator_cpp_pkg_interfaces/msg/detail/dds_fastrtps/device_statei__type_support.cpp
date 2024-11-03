// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from incubator_cpp_pkg_interfaces:msg/DeviceStatei.idl
// generated code does not contain a copyright notice
#include "incubator_cpp_pkg_interfaces/msg/detail/device_statei__rosidl_typesupport_fastrtps_cpp.hpp"
#include "incubator_cpp_pkg_interfaces/msg/detail/device_statei__struct.hpp"

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

// functions for incubator_cpp_pkg_interfaces::msg::DegreesCi already declared above

// functions for incubator_cpp_pkg_interfaces::msg::Secondsi already declared above

// functions for incubator_cpp_pkg_interfaces::msg::DegreesCi already declared above

// functions for incubator_cpp_pkg_interfaces::msg::Secondsi already declared above

// functions for incubator_cpp_pkg_interfaces::msg::DegreesCi already declared above

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
  const incubator_cpp_pkg_interfaces::msg::DeviceStatei & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: t1
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.t1,
    cdr);
  // Member: t1_time
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.t1_time,
    cdr);
  // Member: t2
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.t2,
    cdr);
  // Member: t2_time
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.t2_time,
    cdr);
  // Member: t3
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.t3,
    cdr);
  // Member: t3_time
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.t3_time,
    cdr);
  // Member: average_internal_temp
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.average_internal_temp,
    cdr);
  // Member: heater_on
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.heater_on,
    cdr);
  // Member: fan_on
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.fan_on,
    cdr);
  // Member: execution_interval
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.execution_interval,
    cdr);
  // Member: elapsed_time
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.elapsed_time,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_incubator_cpp_pkg_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  incubator_cpp_pkg_interfaces::msg::DeviceStatei & ros_message)
{
  // Member: t1
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.t1);

  // Member: t1_time
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.t1_time);

  // Member: t2
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.t2);

  // Member: t2_time
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.t2_time);

  // Member: t3
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.t3);

  // Member: t3_time
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.t3_time);

  // Member: average_internal_temp
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.average_internal_temp);

  // Member: heater_on
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.heater_on);

  // Member: fan_on
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.fan_on);

  // Member: execution_interval
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.execution_interval);

  // Member: elapsed_time
  incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.elapsed_time);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_incubator_cpp_pkg_interfaces
get_serialized_size(
  const incubator_cpp_pkg_interfaces::msg::DeviceStatei & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: t1

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.t1, current_alignment);
  // Member: t1_time

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.t1_time, current_alignment);
  // Member: t2

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.t2, current_alignment);
  // Member: t2_time

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.t2_time, current_alignment);
  // Member: t3

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.t3, current_alignment);
  // Member: t3_time

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.t3_time, current_alignment);
  // Member: average_internal_temp

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.average_internal_temp, current_alignment);
  // Member: heater_on

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.heater_on, current_alignment);
  // Member: fan_on

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.fan_on, current_alignment);
  // Member: execution_interval

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.execution_interval, current_alignment);
  // Member: elapsed_time

  current_alignment +=
    incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.elapsed_time, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_incubator_cpp_pkg_interfaces
max_serialized_size_DeviceStatei(
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


  // Member: t1
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

  // Member: t1_time
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

  // Member: t2
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

  // Member: t2_time
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

  // Member: t3
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

  // Member: t3_time
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

  // Member: average_internal_temp
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

  // Member: execution_interval
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

  // Member: elapsed_time
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
    using DataType = incubator_cpp_pkg_interfaces::msg::DeviceStatei;
    is_plain =
      (
      offsetof(DataType, elapsed_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DeviceStatei__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const incubator_cpp_pkg_interfaces::msg::DeviceStatei *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DeviceStatei__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<incubator_cpp_pkg_interfaces::msg::DeviceStatei *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DeviceStatei__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const incubator_cpp_pkg_interfaces::msg::DeviceStatei *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DeviceStatei__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DeviceStatei(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DeviceStatei__callbacks = {
  "incubator_cpp_pkg_interfaces::msg",
  "DeviceStatei",
  _DeviceStatei__cdr_serialize,
  _DeviceStatei__cdr_deserialize,
  _DeviceStatei__get_serialized_size,
  _DeviceStatei__max_serialized_size
};

static rosidl_message_type_support_t _DeviceStatei__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DeviceStatei__callbacks,
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
get_message_type_support_handle<incubator_cpp_pkg_interfaces::msg::DeviceStatei>()
{
  return &incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::_DeviceStatei__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, incubator_cpp_pkg_interfaces, msg, DeviceStatei)() {
  return &incubator_cpp_pkg_interfaces::msg::typesupport_fastrtps_cpp::_DeviceStatei__handle;
}

#ifdef __cplusplus
}
#endif
