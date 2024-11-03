// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from incubator_cpp_pkg_interfaces:msg/Integer64.idl
// generated code does not contain a copyright notice
#include "incubator_cpp_pkg_interfaces/msg/detail/integer64__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
incubator_cpp_pkg_interfaces__msg__Integer64__init(incubator_cpp_pkg_interfaces__msg__Integer64 * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
incubator_cpp_pkg_interfaces__msg__Integer64__fini(incubator_cpp_pkg_interfaces__msg__Integer64 * msg)
{
  if (!msg) {
    return;
  }
  // data
}

bool
incubator_cpp_pkg_interfaces__msg__Integer64__are_equal(const incubator_cpp_pkg_interfaces__msg__Integer64 * lhs, const incubator_cpp_pkg_interfaces__msg__Integer64 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (lhs->data != rhs->data) {
    return false;
  }
  return true;
}

bool
incubator_cpp_pkg_interfaces__msg__Integer64__copy(
  const incubator_cpp_pkg_interfaces__msg__Integer64 * input,
  incubator_cpp_pkg_interfaces__msg__Integer64 * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  output->data = input->data;
  return true;
}

incubator_cpp_pkg_interfaces__msg__Integer64 *
incubator_cpp_pkg_interfaces__msg__Integer64__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  incubator_cpp_pkg_interfaces__msg__Integer64 * msg = (incubator_cpp_pkg_interfaces__msg__Integer64 *)allocator.allocate(sizeof(incubator_cpp_pkg_interfaces__msg__Integer64), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(incubator_cpp_pkg_interfaces__msg__Integer64));
  bool success = incubator_cpp_pkg_interfaces__msg__Integer64__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
incubator_cpp_pkg_interfaces__msg__Integer64__destroy(incubator_cpp_pkg_interfaces__msg__Integer64 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    incubator_cpp_pkg_interfaces__msg__Integer64__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
incubator_cpp_pkg_interfaces__msg__Integer64__Sequence__init(incubator_cpp_pkg_interfaces__msg__Integer64__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  incubator_cpp_pkg_interfaces__msg__Integer64 * data = NULL;

  if (size) {
    data = (incubator_cpp_pkg_interfaces__msg__Integer64 *)allocator.zero_allocate(size, sizeof(incubator_cpp_pkg_interfaces__msg__Integer64), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = incubator_cpp_pkg_interfaces__msg__Integer64__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        incubator_cpp_pkg_interfaces__msg__Integer64__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
incubator_cpp_pkg_interfaces__msg__Integer64__Sequence__fini(incubator_cpp_pkg_interfaces__msg__Integer64__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      incubator_cpp_pkg_interfaces__msg__Integer64__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

incubator_cpp_pkg_interfaces__msg__Integer64__Sequence *
incubator_cpp_pkg_interfaces__msg__Integer64__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  incubator_cpp_pkg_interfaces__msg__Integer64__Sequence * array = (incubator_cpp_pkg_interfaces__msg__Integer64__Sequence *)allocator.allocate(sizeof(incubator_cpp_pkg_interfaces__msg__Integer64__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = incubator_cpp_pkg_interfaces__msg__Integer64__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
incubator_cpp_pkg_interfaces__msg__Integer64__Sequence__destroy(incubator_cpp_pkg_interfaces__msg__Integer64__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    incubator_cpp_pkg_interfaces__msg__Integer64__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
incubator_cpp_pkg_interfaces__msg__Integer64__Sequence__are_equal(const incubator_cpp_pkg_interfaces__msg__Integer64__Sequence * lhs, const incubator_cpp_pkg_interfaces__msg__Integer64__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!incubator_cpp_pkg_interfaces__msg__Integer64__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
incubator_cpp_pkg_interfaces__msg__Integer64__Sequence__copy(
  const incubator_cpp_pkg_interfaces__msg__Integer64__Sequence * input,
  incubator_cpp_pkg_interfaces__msg__Integer64__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(incubator_cpp_pkg_interfaces__msg__Integer64);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    incubator_cpp_pkg_interfaces__msg__Integer64 * data =
      (incubator_cpp_pkg_interfaces__msg__Integer64 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!incubator_cpp_pkg_interfaces__msg__Integer64__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          incubator_cpp_pkg_interfaces__msg__Integer64__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!incubator_cpp_pkg_interfaces__msg__Integer64__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
