// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from incubator_cpp_pkg_interfaces:msg/ControllerStatusi.idl
// generated code does not contain a copyright notice
#include "incubator_cpp_pkg_interfaces/msg/detail/controller_statusi__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cur_time`
// Member `next_time`
// Member `heating_time`
// Member `heating_gap`
#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__functions.h"
// Member `heater_on`
// Member `fan_on`
#include "incubator_cpp_pkg_interfaces/msg/detail/boolean__functions.h"
// Member `current_state`
#include "incubator_cpp_pkg_interfaces/msg/detail/controller_state__functions.h"
// Member `target_temp`
// Member `lower_bound`
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__functions.h"

bool
incubator_cpp_pkg_interfaces__msg__ControllerStatusi__init(incubator_cpp_pkg_interfaces__msg__ControllerStatusi * msg)
{
  if (!msg) {
    return false;
  }
  // cur_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__init(&msg->cur_time)) {
    incubator_cpp_pkg_interfaces__msg__ControllerStatusi__fini(msg);
    return false;
  }
  // heater_on
  if (!incubator_cpp_pkg_interfaces__msg__Boolean__init(&msg->heater_on)) {
    incubator_cpp_pkg_interfaces__msg__ControllerStatusi__fini(msg);
    return false;
  }
  // fan_on
  if (!incubator_cpp_pkg_interfaces__msg__Boolean__init(&msg->fan_on)) {
    incubator_cpp_pkg_interfaces__msg__ControllerStatusi__fini(msg);
    return false;
  }
  // current_state
  if (!incubator_cpp_pkg_interfaces__msg__ControllerState__init(&msg->current_state)) {
    incubator_cpp_pkg_interfaces__msg__ControllerStatusi__fini(msg);
    return false;
  }
  // next_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__init(&msg->next_time)) {
    incubator_cpp_pkg_interfaces__msg__ControllerStatusi__fini(msg);
    return false;
  }
  // target_temp
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__init(&msg->target_temp)) {
    incubator_cpp_pkg_interfaces__msg__ControllerStatusi__fini(msg);
    return false;
  }
  // lower_bound
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__init(&msg->lower_bound)) {
    incubator_cpp_pkg_interfaces__msg__ControllerStatusi__fini(msg);
    return false;
  }
  // heating_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__init(&msg->heating_time)) {
    incubator_cpp_pkg_interfaces__msg__ControllerStatusi__fini(msg);
    return false;
  }
  // heating_gap
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__init(&msg->heating_gap)) {
    incubator_cpp_pkg_interfaces__msg__ControllerStatusi__fini(msg);
    return false;
  }
  return true;
}

void
incubator_cpp_pkg_interfaces__msg__ControllerStatusi__fini(incubator_cpp_pkg_interfaces__msg__ControllerStatusi * msg)
{
  if (!msg) {
    return;
  }
  // cur_time
  incubator_cpp_pkg_interfaces__msg__Secondsi__fini(&msg->cur_time);
  // heater_on
  incubator_cpp_pkg_interfaces__msg__Boolean__fini(&msg->heater_on);
  // fan_on
  incubator_cpp_pkg_interfaces__msg__Boolean__fini(&msg->fan_on);
  // current_state
  incubator_cpp_pkg_interfaces__msg__ControllerState__fini(&msg->current_state);
  // next_time
  incubator_cpp_pkg_interfaces__msg__Secondsi__fini(&msg->next_time);
  // target_temp
  incubator_cpp_pkg_interfaces__msg__DegreesCi__fini(&msg->target_temp);
  // lower_bound
  incubator_cpp_pkg_interfaces__msg__DegreesCi__fini(&msg->lower_bound);
  // heating_time
  incubator_cpp_pkg_interfaces__msg__Secondsi__fini(&msg->heating_time);
  // heating_gap
  incubator_cpp_pkg_interfaces__msg__Secondsi__fini(&msg->heating_gap);
}

bool
incubator_cpp_pkg_interfaces__msg__ControllerStatusi__are_equal(const incubator_cpp_pkg_interfaces__msg__ControllerStatusi * lhs, const incubator_cpp_pkg_interfaces__msg__ControllerStatusi * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cur_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__are_equal(
      &(lhs->cur_time), &(rhs->cur_time)))
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
  // current_state
  if (!incubator_cpp_pkg_interfaces__msg__ControllerState__are_equal(
      &(lhs->current_state), &(rhs->current_state)))
  {
    return false;
  }
  // next_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__are_equal(
      &(lhs->next_time), &(rhs->next_time)))
  {
    return false;
  }
  // target_temp
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__are_equal(
      &(lhs->target_temp), &(rhs->target_temp)))
  {
    return false;
  }
  // lower_bound
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__are_equal(
      &(lhs->lower_bound), &(rhs->lower_bound)))
  {
    return false;
  }
  // heating_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__are_equal(
      &(lhs->heating_time), &(rhs->heating_time)))
  {
    return false;
  }
  // heating_gap
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__are_equal(
      &(lhs->heating_gap), &(rhs->heating_gap)))
  {
    return false;
  }
  return true;
}

bool
incubator_cpp_pkg_interfaces__msg__ControllerStatusi__copy(
  const incubator_cpp_pkg_interfaces__msg__ControllerStatusi * input,
  incubator_cpp_pkg_interfaces__msg__ControllerStatusi * output)
{
  if (!input || !output) {
    return false;
  }
  // cur_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__copy(
      &(input->cur_time), &(output->cur_time)))
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
  // current_state
  if (!incubator_cpp_pkg_interfaces__msg__ControllerState__copy(
      &(input->current_state), &(output->current_state)))
  {
    return false;
  }
  // next_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__copy(
      &(input->next_time), &(output->next_time)))
  {
    return false;
  }
  // target_temp
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__copy(
      &(input->target_temp), &(output->target_temp)))
  {
    return false;
  }
  // lower_bound
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__copy(
      &(input->lower_bound), &(output->lower_bound)))
  {
    return false;
  }
  // heating_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__copy(
      &(input->heating_time), &(output->heating_time)))
  {
    return false;
  }
  // heating_gap
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__copy(
      &(input->heating_gap), &(output->heating_gap)))
  {
    return false;
  }
  return true;
}

incubator_cpp_pkg_interfaces__msg__ControllerStatusi *
incubator_cpp_pkg_interfaces__msg__ControllerStatusi__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  incubator_cpp_pkg_interfaces__msg__ControllerStatusi * msg = (incubator_cpp_pkg_interfaces__msg__ControllerStatusi *)allocator.allocate(sizeof(incubator_cpp_pkg_interfaces__msg__ControllerStatusi), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(incubator_cpp_pkg_interfaces__msg__ControllerStatusi));
  bool success = incubator_cpp_pkg_interfaces__msg__ControllerStatusi__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
incubator_cpp_pkg_interfaces__msg__ControllerStatusi__destroy(incubator_cpp_pkg_interfaces__msg__ControllerStatusi * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    incubator_cpp_pkg_interfaces__msg__ControllerStatusi__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence__init(incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  incubator_cpp_pkg_interfaces__msg__ControllerStatusi * data = NULL;

  if (size) {
    data = (incubator_cpp_pkg_interfaces__msg__ControllerStatusi *)allocator.zero_allocate(size, sizeof(incubator_cpp_pkg_interfaces__msg__ControllerStatusi), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = incubator_cpp_pkg_interfaces__msg__ControllerStatusi__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        incubator_cpp_pkg_interfaces__msg__ControllerStatusi__fini(&data[i - 1]);
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
incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence__fini(incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence * array)
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
      incubator_cpp_pkg_interfaces__msg__ControllerStatusi__fini(&array->data[i]);
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

incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence *
incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence * array = (incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence *)allocator.allocate(sizeof(incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence__destroy(incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence__are_equal(const incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence * lhs, const incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!incubator_cpp_pkg_interfaces__msg__ControllerStatusi__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence__copy(
  const incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence * input,
  incubator_cpp_pkg_interfaces__msg__ControllerStatusi__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(incubator_cpp_pkg_interfaces__msg__ControllerStatusi);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    incubator_cpp_pkg_interfaces__msg__ControllerStatusi * data =
      (incubator_cpp_pkg_interfaces__msg__ControllerStatusi *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!incubator_cpp_pkg_interfaces__msg__ControllerStatusi__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          incubator_cpp_pkg_interfaces__msg__ControllerStatusi__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!incubator_cpp_pkg_interfaces__msg__ControllerStatusi__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
