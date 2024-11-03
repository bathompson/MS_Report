// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from incubator_cpp_pkg_interfaces:msg/DegreesCi.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__rosidl_typesupport_introspection_c.h"
#include "incubator_cpp_pkg_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__functions.h"
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__struct.h"


// Include directives for member types
// Member `value`
#include "incubator_cpp_pkg_interfaces/msg/float32.h"
// Member `value`
#include "incubator_cpp_pkg_interfaces/msg/detail/float32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void incubator_cpp_pkg_interfaces__msg__DegreesCi__rosidl_typesupport_introspection_c__DegreesCi_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  incubator_cpp_pkg_interfaces__msg__DegreesCi__init(message_memory);
}

void incubator_cpp_pkg_interfaces__msg__DegreesCi__rosidl_typesupport_introspection_c__DegreesCi_fini_function(void * message_memory)
{
  incubator_cpp_pkg_interfaces__msg__DegreesCi__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember incubator_cpp_pkg_interfaces__msg__DegreesCi__rosidl_typesupport_introspection_c__DegreesCi_message_member_array[1] = {
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(incubator_cpp_pkg_interfaces__msg__DegreesCi, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers incubator_cpp_pkg_interfaces__msg__DegreesCi__rosidl_typesupport_introspection_c__DegreesCi_message_members = {
  "incubator_cpp_pkg_interfaces__msg",  // message namespace
  "DegreesCi",  // message name
  1,  // number of fields
  sizeof(incubator_cpp_pkg_interfaces__msg__DegreesCi),
  incubator_cpp_pkg_interfaces__msg__DegreesCi__rosidl_typesupport_introspection_c__DegreesCi_message_member_array,  // message members
  incubator_cpp_pkg_interfaces__msg__DegreesCi__rosidl_typesupport_introspection_c__DegreesCi_init_function,  // function to initialize message memory (memory has to be allocated)
  incubator_cpp_pkg_interfaces__msg__DegreesCi__rosidl_typesupport_introspection_c__DegreesCi_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t incubator_cpp_pkg_interfaces__msg__DegreesCi__rosidl_typesupport_introspection_c__DegreesCi_message_type_support_handle = {
  0,
  &incubator_cpp_pkg_interfaces__msg__DegreesCi__rosidl_typesupport_introspection_c__DegreesCi_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_incubator_cpp_pkg_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, incubator_cpp_pkg_interfaces, msg, DegreesCi)() {
  incubator_cpp_pkg_interfaces__msg__DegreesCi__rosidl_typesupport_introspection_c__DegreesCi_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, incubator_cpp_pkg_interfaces, msg, Float32)();
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__rosidl_typesupport_introspection_c__DegreesCi_message_type_support_handle.typesupport_identifier) {
    incubator_cpp_pkg_interfaces__msg__DegreesCi__rosidl_typesupport_introspection_c__DegreesCi_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &incubator_cpp_pkg_interfaces__msg__DegreesCi__rosidl_typesupport_introspection_c__DegreesCi_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
