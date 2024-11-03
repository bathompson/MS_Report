// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from incubator_cpp_pkg_interfaces:msg/DeviceStatei.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "incubator_cpp_pkg_interfaces/msg/detail/device_statei__rosidl_typesupport_introspection_c.h"
#include "incubator_cpp_pkg_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "incubator_cpp_pkg_interfaces/msg/detail/device_statei__functions.h"
#include "incubator_cpp_pkg_interfaces/msg/detail/device_statei__struct.h"


// Include directives for member types
// Member `t1`
// Member `t2`
// Member `t3`
// Member `average_internal_temp`
#include "incubator_cpp_pkg_interfaces/msg/degrees_ci.h"
// Member `t1`
// Member `t2`
// Member `t3`
// Member `average_internal_temp`
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__rosidl_typesupport_introspection_c.h"
// Member `t1_time`
// Member `t2_time`
// Member `t3_time`
// Member `execution_interval`
// Member `elapsed_time`
#include "incubator_cpp_pkg_interfaces/msg/secondsi.h"
// Member `t1_time`
// Member `t2_time`
// Member `t3_time`
// Member `execution_interval`
// Member `elapsed_time`
#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__rosidl_typesupport_introspection_c.h"
// Member `heater_on`
// Member `fan_on`
#include "incubator_cpp_pkg_interfaces/msg/boolean.h"
// Member `heater_on`
// Member `fan_on`
#include "incubator_cpp_pkg_interfaces/msg/detail/boolean__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__init(message_memory);
}

void incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_fini_function(void * message_memory)
{
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_member_array[11] = {
  {
    "t1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces__msg__DeviceStatei, t1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t1_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces__msg__DeviceStatei, t1_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces__msg__DeviceStatei, t2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t2_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces__msg__DeviceStatei, t2_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces__msg__DeviceStatei, t3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t3_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces__msg__DeviceStatei, t3_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "average_internal_temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces__msg__DeviceStatei, average_internal_temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heater_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces__msg__DeviceStatei, heater_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fan_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces__msg__DeviceStatei, fan_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "execution_interval",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces__msg__DeviceStatei, execution_interval),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elapsed_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces__msg__DeviceStatei, elapsed_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_members = {
  "incubator_cpp_pkg_interfaces__msg",  // message namespace
  "DeviceStatei",  // message name
  11,  // number of fields
  sizeof(incubator_cpp_pkg_interfaces__msg__DeviceStatei),
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_member_array,  // message members
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_init_function,  // function to initialize message memory (memory has to be allocated)
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_type_support_handle = {
  0,
  &incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_incubator_cpp_pkg_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, incubator_cpp_pkg_interfaces, msg, DeviceStatei)() {
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, incubator_cpp_pkg_interfaces, msg, DegreesCi)();
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, incubator_cpp_pkg_interfaces, msg, Secondsi)();
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, incubator_cpp_pkg_interfaces, msg, DegreesCi)();
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, incubator_cpp_pkg_interfaces, msg, Secondsi)();
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, incubator_cpp_pkg_interfaces, msg, DegreesCi)();
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, incubator_cpp_pkg_interfaces, msg, Secondsi)();
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, incubator_cpp_pkg_interfaces, msg, DegreesCi)();
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, incubator_cpp_pkg_interfaces, msg, Boolean)();
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, incubator_cpp_pkg_interfaces, msg, Boolean)();
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, incubator_cpp_pkg_interfaces, msg, Secondsi)();
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, incubator_cpp_pkg_interfaces, msg, Secondsi)();
  if (!incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_type_support_handle.typesupport_identifier) {
    incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &incubator_cpp_pkg_interfaces__msg__DeviceStatei__rosidl_typesupport_introspection_c__DeviceStatei_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
