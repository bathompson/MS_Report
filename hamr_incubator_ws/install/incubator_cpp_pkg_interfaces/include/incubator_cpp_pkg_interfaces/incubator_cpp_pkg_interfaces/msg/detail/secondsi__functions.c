// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from incubator_cpp_pkg_interfaces:msg/Secondsi.idl
// generated code does not contain a copyright notice
#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `value`
#include "incubator_cpp_pkg_interfaces/msg/detail/integer64__functions.h"

bool
incubator_cpp_pkg_interfaces__msg__Secondsi__init(incubator_cpp_pkg_interfaces__msg__Secondsi * msg)
{
  if (!msg) {
    return false;
  }
  // value
  if (!incubator_cpp_pkg_interfaces__msg__Integer64__init(&msg->value)) {
    incubator_cpp_pkg_interfaces__msg__Secondsi__fini(msg);
    return false;
  }
  return true;
}

void
incubator_cpp_pkg_interfaces__msg__Secondsi__fini(incubator_cpp_pkg_interfaces__msg__Secondsi * msg)
{
  if (!msg) {
    return;
  }
  // value
  incubator_cpp_pkg_interfaces__msg__Integer64__fini(&msg->value);
}

bool
incubator_cpp_pkg_interfaces__msg__Secondsi__are_equal(const incubator_cpp_pkg_interfaces__msg__Secondsi * lhs, const incubator_cpp_pkg_interfaces__msg__Secondsi * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (!incubator_cpp_pkg_interfaces__msg__Integer64__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
incubator_cpp_pkg_interfaces__msg__Secondsi__copy(
  const incubator_cpp_pkg_interfaces__msg__Secondsi * input,
  incubator_cpp_pkg_interfaces__msg__Secondsi * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  if (!incubator_cpp_pkg_interfaces__msg__Integer64__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

incubator_cpp_pkg_interfaces__msg__Secondsi *
incubator_cpp_pkg_interfaces__msg__Secondsi__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  incubator_cpp_pkg_interfaces__msg__Secondsi * msg = (incubator_cpp_pkg_interfaces__msg__Secondsi *)allocator.allocate(sizeof(incubator_cpp_pkg_interfaces__msg__Secondsi), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(incubator_cpp_pkg_interfaces__msg__Secondsi));
  bool success = incubator_cpp_pkg_interfaces__msg__Secondsi__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
incubator_cpp_pkg_interfaces__msg__Secondsi__destroy(incubator_cpp_pkg_interfaces__msg__Secondsi * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    incubator_cpp_pkg_interfaces__msg__Secondsi__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence__init(incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  incubator_cpp_pkg_interfaces__msg__Secondsi * data = NULL;

  if (size) {
    data = (incubator_cpp_pkg_interfaces__msg__Secondsi *)allocator.zero_allocate(size, sizeof(incubator_cpp_pkg_interfaces__msg__Secondsi), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = incubator_cpp_pkg_interfaces__msg__Secondsi__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        incubator_cpp_pkg_interfaces__msg__Secondsi__fini(&data[i - 1]);
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
incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence__fini(incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence * array)
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
      incubator_cpp_pkg_interfaces__msg__Secondsi__fini(&array->data[i]);
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

incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence *
incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence * array = (incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence *)allocator.allocate(sizeof(incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence__destroy(incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence__are_equal(const incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence * lhs, const incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!incubator_cpp_pkg_interfaces__msg__Secondsi__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence__copy(
  const incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence * input,
  incubator_cpp_pkg_interfaces__msg__Secondsi__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(incubator_cpp_pkg_interfaces__msg__Secondsi);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    incubator_cpp_pkg_interfaces__msg__Secondsi * data =
      (incubator_cpp_pkg_interfaces__msg__Secondsi *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!incubator_cpp_pkg_interfaces__msg__Secondsi__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          incubator_cpp_pkg_interfaces__msg__Secondsi__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!incubator_cpp_pkg_interfaces__msg__Secondsi__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}