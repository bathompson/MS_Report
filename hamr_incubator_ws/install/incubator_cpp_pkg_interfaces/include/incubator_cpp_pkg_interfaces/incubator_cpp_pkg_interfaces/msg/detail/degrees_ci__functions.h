// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from incubator_cpp_pkg_interfaces:msg/DegreesCi.idl
// generated code does not contain a copyright notice

#ifndef INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEGREES_CI__FUNCTIONS_H_
#define INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEGREES_CI__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "incubator_cpp_pkg_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__struct.h"

/// Initialize msg/DegreesCi message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * incubator_cpp_pkg_interfaces__msg__DegreesCi
 * )) before or use
 * incubator_cpp_pkg_interfaces__msg__DegreesCi__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_incubator_cpp_pkg_interfaces
bool
incubator_cpp_pkg_interfaces__msg__DegreesCi__init(incubator_cpp_pkg_interfaces__msg__DegreesCi * msg);

/// Finalize msg/DegreesCi message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_incubator_cpp_pkg_interfaces
void
incubator_cpp_pkg_interfaces__msg__DegreesCi__fini(incubator_cpp_pkg_interfaces__msg__DegreesCi * msg);

/// Create msg/DegreesCi message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * incubator_cpp_pkg_interfaces__msg__DegreesCi__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_incubator_cpp_pkg_interfaces
incubator_cpp_pkg_interfaces__msg__DegreesCi *
incubator_cpp_pkg_interfaces__msg__DegreesCi__create();

/// Destroy msg/DegreesCi message.
/**
 * It calls
 * incubator_cpp_pkg_interfaces__msg__DegreesCi__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_incubator_cpp_pkg_interfaces
void
incubator_cpp_pkg_interfaces__msg__DegreesCi__destroy(incubator_cpp_pkg_interfaces__msg__DegreesCi * msg);

/// Check for msg/DegreesCi message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_incubator_cpp_pkg_interfaces
bool
incubator_cpp_pkg_interfaces__msg__DegreesCi__are_equal(const incubator_cpp_pkg_interfaces__msg__DegreesCi * lhs, const incubator_cpp_pkg_interfaces__msg__DegreesCi * rhs);

/// Copy a msg/DegreesCi message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_incubator_cpp_pkg_interfaces
bool
incubator_cpp_pkg_interfaces__msg__DegreesCi__copy(
  const incubator_cpp_pkg_interfaces__msg__DegreesCi * input,
  incubator_cpp_pkg_interfaces__msg__DegreesCi * output);

/// Initialize array of msg/DegreesCi messages.
/**
 * It allocates the memory for the number of elements and calls
 * incubator_cpp_pkg_interfaces__msg__DegreesCi__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_incubator_cpp_pkg_interfaces
bool
incubator_cpp_pkg_interfaces__msg__DegreesCi__Sequence__init(incubator_cpp_pkg_interfaces__msg__DegreesCi__Sequence * array, size_t size);

/// Finalize array of msg/DegreesCi messages.
/**
 * It calls
 * incubator_cpp_pkg_interfaces__msg__DegreesCi__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_incubator_cpp_pkg_interfaces
void
incubator_cpp_pkg_interfaces__msg__DegreesCi__Sequence__fini(incubator_cpp_pkg_interfaces__msg__DegreesCi__Sequence * array);

/// Create array of msg/DegreesCi messages.
/**
 * It allocates the memory for the array and calls
 * incubator_cpp_pkg_interfaces__msg__DegreesCi__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_incubator_cpp_pkg_interfaces
incubator_cpp_pkg_interfaces__msg__DegreesCi__Sequence *
incubator_cpp_pkg_interfaces__msg__DegreesCi__Sequence__create(size_t size);

/// Destroy array of msg/DegreesCi messages.
/**
 * It calls
 * incubator_cpp_pkg_interfaces__msg__DegreesCi__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_incubator_cpp_pkg_interfaces
void
incubator_cpp_pkg_interfaces__msg__DegreesCi__Sequence__destroy(incubator_cpp_pkg_interfaces__msg__DegreesCi__Sequence * array);

/// Check for msg/DegreesCi message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_incubator_cpp_pkg_interfaces
bool
incubator_cpp_pkg_interfaces__msg__DegreesCi__Sequence__are_equal(const incubator_cpp_pkg_interfaces__msg__DegreesCi__Sequence * lhs, const incubator_cpp_pkg_interfaces__msg__DegreesCi__Sequence * rhs);

/// Copy an array of msg/DegreesCi messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_incubator_cpp_pkg_interfaces
bool
incubator_cpp_pkg_interfaces__msg__DegreesCi__Sequence__copy(
  const incubator_cpp_pkg_interfaces__msg__DegreesCi__Sequence * input,
  incubator_cpp_pkg_interfaces__msg__DegreesCi__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INCUBATOR_CPP_PKG_INTERFACES__MSG__DETAIL__DEGREES_CI__FUNCTIONS_H_
