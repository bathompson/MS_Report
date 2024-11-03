// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from incubator_cpp_pkg_interfaces:msg/DeviceStatei.idl
// generated code does not contain a copyright notice
#include "incubator_cpp_pkg_interfaces/msg/detail/device_statei__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `t1`
// Member `t2`
// Member `t3`
// Member `average_internal_temp`
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__functions.h"
// Member `t1_time`
// Member `t2_time`
// Member `t3_time`
// Member `execution_interval`
// Member `elapsed_time`
#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__functions.h"
// Member `heater_on`
// Member `fan_on`
#include "incubator_cpp_pkg_interfaces/msg/detail/boolean__functions.h"

bool
incubator_cpp_pkg_interfaces__msg__DeviceStatei__init(incubator_cpp_pkg_interfaces__msg__DeviceStatei * msg)
{
  if (!msg) {
    return false;
  }
  // t1
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__init(&msg->t1)) {
    incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(msg);
    return false;
  }
  // t1_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__init(&msg->t1_time)) {
    incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(msg);
    return false;
  }
  // t2
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__init(&msg->t2)) {
    incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(msg);
    return false;
  }
  // t2_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__init(&msg->t2_time)) {
    incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(msg);
    return false;
  }
  // t3
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__init(&msg->t3)) {
    incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(msg);
    return false;
  }
  // t3_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__init(&msg->t3_time)) {
    incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(msg);
    return false;
  }
  // average_internal_temp
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__init(&msg->average_internal_temp)) {
    incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(msg);
    return false;
  }
  // heater_on
  if (!incubator_cpp_pkg_interfaces__msg__Boolean__init(&msg->heater_on)) {
    incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(msg);
    return false;
  }
  // fan_on
  if (!incubator_cpp_pkg_interfaces__msg__Boolean__init(&msg->fan_on)) {
    incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(msg);
    return false;
  }
  // execution_interval
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__init(&msg->execution_interval)) {
    incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(msg);
    return false;
  }
  // elapsed_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__init(&msg->elapsed_time)) {
    incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(msg);
    return false;
  }
  return true;
}

void
incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(incubator_cpp_pkg_interfaces__msg__DeviceStatei * msg)
{
  if (!msg) {
    return;
  }
  // t1
  incubator_cpp_pkg_interfaces__msg__DegreesCi__fini(&msg->t1);
  // t1_time
  incubator_cpp_pkg_interfaces__msg__Secondsi__fini(&msg->t1_time);
  // t2
  incubator_cpp_pkg_interfaces__msg__DegreesCi__fini(&msg->t2);
  // t2_time
  incubator_cpp_pkg_interfaces__msg__Secondsi__fini(&msg->t2_time);
  // t3
  incubator_cpp_pkg_interfaces__msg__DegreesCi__fini(&msg->t3);
  // t3_time
  incubator_cpp_pkg_interfaces__msg__Secondsi__fini(&msg->t3_time);
  // average_internal_temp
  incubator_cpp_pkg_interfaces__msg__DegreesCi__fini(&msg->average_internal_temp);
  // heater_on
  incubator_cpp_pkg_interfaces__msg__Boolean__fini(&msg->heater_on);
  // fan_on
  incubator_cpp_pkg_interfaces__msg__Boolean__fini(&msg->fan_on);
  // execution_interval
  incubator_cpp_pkg_interfaces__msg__Secondsi__fini(&msg->execution_interval);
  // elapsed_time
  incubator_cpp_pkg_interfaces__msg__Secondsi__fini(&msg->elapsed_time);
}

bool
incubator_cpp_pkg_interfaces__msg__DeviceStatei__are_equal(const incubator_cpp_pkg_interfaces__msg__DeviceStatei * lhs, const incubator_cpp_pkg_interfaces__msg__DeviceStatei * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // t1
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__are_equal(
      &(lhs->t1), &(rhs->t1)))
  {
    return false;
  }
  // t1_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__are_equal(
      &(lhs->t1_time), &(rhs->t1_time)))
  {
    return false;
  }
  // t2
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__are_equal(
      &(lhs->t2), &(rhs->t2)))
  {
    return false;
  }
  // t2_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__are_equal(
      &(lhs->t2_time), &(rhs->t2_time)))
  {
    return false;
  }
  // t3
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__are_equal(
      &(lhs->t3), &(rhs->t3)))
  {
    return false;
  }
  // t3_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__are_equal(
      &(lhs->t3_time), &(rhs->t3_time)))
  {
    return false;
  }
  // average_internal_temp
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__are_equal(
      &(lhs->average_internal_temp), &(rhs->average_internal_temp)))
  {
    return false;
  }
  // heater_on
  if (!incubator_cpp_pkg_interfaces__msg__Boolean__are_equal(
      &(lhs->heater_on), &(rhs->heater_on)))
  {
    return false;
  }
  // fan_on
  if (!incubator_cpp_pkg_interfaces__msg__Boolean__are_equal(
      &(lhs->fan_on), &(rhs->fan_on)))
  {
    return false;
  }
  // execution_interval
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__are_equal(
      &(lhs->execution_interval), &(rhs->execution_interval)))
  {
    return false;
  }
  // elapsed_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__are_equal(
      &(lhs->elapsed_time), &(rhs->elapsed_time)))
  {
    return false;
  }
  return true;
}

bool
incubator_cpp_pkg_interfaces__msg__DeviceStatei__copy(
  const incubator_cpp_pkg_interfaces__msg__DeviceStatei * input,
  incubator_cpp_pkg_interfaces__msg__DeviceStatei * output)
{
  if (!input || !output) {
    return false;
  }
  // t1
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__copy(
      &(input->t1), &(output->t1)))
  {
    return false;
  }
  // t1_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__copy(
      &(input->t1_time), &(output->t1_time)))
  {
    return false;
  }
  // t2
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__copy(
      &(input->t2), &(output->t2)))
  {
    return false;
  }
  // t2_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__copy(
      &(input->t2_time), &(output->t2_time)))
  {
    return false;
  }
  // t3
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__copy(
      &(input->t3), &(output->t3)))
  {
    return false;
  }
  // t3_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__copy(
      &(input->t3_time), &(output->t3_time)))
  {
    return false;
  }
  // average_internal_temp
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__copy(
      &(input->average_internal_temp), &(output->average_internal_temp)))
  {
    return false;
  }
  // heater_on
  if (!incubator_cpp_pkg_interfaces__msg__Boolean__copy(
      &(input->heater_on), &(output->heater_on)))
  {
    return false;
  }
  // fan_on
  if (!incubator_cpp_pkg_interfaces__msg__Boolean__copy(
      &(input->fan_on), &(output->fan_on)))
  {
    return false;
  }
  // execution_interval
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__copy(
      &(input->execution_interval), &(output->execution_interval)))
  {
    return false;
  }
  // elapsed_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__copy(
      &(input->elapsed_time), &(output->elapsed_time)))
  {
    return false;
  }
  return true;
}

incubator_cpp_pkg_interfaces__msg__DeviceStatei *
incubator_cpp_pkg_interfaces__msg__DeviceStatei__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  incubator_cpp_pkg_interfaces__msg__DeviceStatei * msg = (incubator_cpp_pkg_interfaces__msg__DeviceStatei *)allocator.allocate(sizeof(incubator_cpp_pkg_interfaces__msg__DeviceStatei), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(incubator_cpp_pkg_interfaces__msg__DeviceStatei));
  bool success = incubator_cpp_pkg_interfaces__msg__DeviceStatei__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
incubator_cpp_pkg_interfaces__msg__DeviceStatei__destroy(incubator_cpp_pkg_interfaces__msg__DeviceStatei * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence__init(incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  incubator_cpp_pkg_interfaces__msg__DeviceStatei * data = NULL;

  if (size) {
    data = (incubator_cpp_pkg_interfaces__msg__DeviceStatei *)allocator.zero_allocate(size, sizeof(incubator_cpp_pkg_interfaces__msg__DeviceStatei), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = incubator_cpp_pkg_interfaces__msg__DeviceStatei__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(&data[i - 1]);
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
incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence__fini(incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence * array)
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
      incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(&array->data[i]);
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

incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence *
incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence * array = (incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence *)allocator.allocate(sizeof(incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence__destroy(incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence__are_equal(const incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence * lhs, const incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!incubator_cpp_pkg_interfaces__msg__DeviceStatei__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence__copy(
  const incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence * input,
  incubator_cpp_pkg_interfaces__msg__DeviceStatei__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(incubator_cpp_pkg_interfaces__msg__DeviceStatei);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    incubator_cpp_pkg_interfaces__msg__DeviceStatei * data =
      (incubator_cpp_pkg_interfaces__msg__DeviceStatei *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!incubator_cpp_pkg_interfaces__msg__DeviceStatei__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          incubator_cpp_pkg_interfaces__msg__DeviceStatei__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!incubator_cpp_pkg_interfaces__msg__DeviceStatei__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
