// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from incubator_cpp_pkg_interfaces:msg/KalmanPredictioni.idl
// generated code does not contain a copyright notice
#include "incubator_cpp_pkg_interfaces/msg/detail/kalman_predictioni__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `t_heater`
// Member `prediction_error`
// Member `average_temperature`
#include "incubator_cpp_pkg_interfaces/msg/detail/degrees_ci__functions.h"
// Member `prediction_time`
#include "incubator_cpp_pkg_interfaces/msg/detail/secondsi__functions.h"

bool
incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__init(incubator_cpp_pkg_interfaces__msg__KalmanPredictioni * msg)
{
  if (!msg) {
    return false;
  }
  // t_heater
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__init(&msg->t_heater)) {
    incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__fini(msg);
    return false;
  }
  // prediction_error
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__init(&msg->prediction_error)) {
    incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__fini(msg);
    return false;
  }
  // average_temperature
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__init(&msg->average_temperature)) {
    incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__fini(msg);
    return false;
  }
  // prediction_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__init(&msg->prediction_time)) {
    incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__fini(msg);
    return false;
  }
  return true;
}

void
incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__fini(incubator_cpp_pkg_interfaces__msg__KalmanPredictioni * msg)
{
  if (!msg) {
    return;
  }
  // t_heater
  incubator_cpp_pkg_interfaces__msg__DegreesCi__fini(&msg->t_heater);
  // prediction_error
  incubator_cpp_pkg_interfaces__msg__DegreesCi__fini(&msg->prediction_error);
  // average_temperature
  incubator_cpp_pkg_interfaces__msg__DegreesCi__fini(&msg->average_temperature);
  // prediction_time
  incubator_cpp_pkg_interfaces__msg__Secondsi__fini(&msg->prediction_time);
}

bool
incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__are_equal(const incubator_cpp_pkg_interfaces__msg__KalmanPredictioni * lhs, const incubator_cpp_pkg_interfaces__msg__KalmanPredictioni * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // t_heater
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__are_equal(
      &(lhs->t_heater), &(rhs->t_heater)))
  {
    return false;
  }
  // prediction_error
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__are_equal(
      &(lhs->prediction_error), &(rhs->prediction_error)))
  {
    return false;
  }
  // average_temperature
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__are_equal(
      &(lhs->average_temperature), &(rhs->average_temperature)))
  {
    return false;
  }
  // prediction_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__are_equal(
      &(lhs->prediction_time), &(rhs->prediction_time)))
  {
    return false;
  }
  return true;
}

bool
incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__copy(
  const incubator_cpp_pkg_interfaces__msg__KalmanPredictioni * input,
  incubator_cpp_pkg_interfaces__msg__KalmanPredictioni * output)
{
  if (!input || !output) {
    return false;
  }
  // t_heater
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__copy(
      &(input->t_heater), &(output->t_heater)))
  {
    return false;
  }
  // prediction_error
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__copy(
      &(input->prediction_error), &(output->prediction_error)))
  {
    return false;
  }
  // average_temperature
  if (!incubator_cpp_pkg_interfaces__msg__DegreesCi__copy(
      &(input->average_temperature), &(output->average_temperature)))
  {
    return false;
  }
  // prediction_time
  if (!incubator_cpp_pkg_interfaces__msg__Secondsi__copy(
      &(input->prediction_time), &(output->prediction_time)))
  {
    return false;
  }
  return true;
}

incubator_cpp_pkg_interfaces__msg__KalmanPredictioni *
incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  incubator_cpp_pkg_interfaces__msg__KalmanPredictioni * msg = (incubator_cpp_pkg_interfaces__msg__KalmanPredictioni *)allocator.allocate(sizeof(incubator_cpp_pkg_interfaces__msg__KalmanPredictioni), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(incubator_cpp_pkg_interfaces__msg__KalmanPredictioni));
  bool success = incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__destroy(incubator_cpp_pkg_interfaces__msg__KalmanPredictioni * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence__init(incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  incubator_cpp_pkg_interfaces__msg__KalmanPredictioni * data = NULL;

  if (size) {
    data = (incubator_cpp_pkg_interfaces__msg__KalmanPredictioni *)allocator.zero_allocate(size, sizeof(incubator_cpp_pkg_interfaces__msg__KalmanPredictioni), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__fini(&data[i - 1]);
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
incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence__fini(incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence * array)
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
      incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__fini(&array->data[i]);
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

incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence *
incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence * array = (incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence *)allocator.allocate(sizeof(incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence__destroy(incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence__are_equal(const incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence * lhs, const incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence__copy(
  const incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence * input,
  incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(incubator_cpp_pkg_interfaces__msg__KalmanPredictioni);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    incubator_cpp_pkg_interfaces__msg__KalmanPredictioni * data =
      (incubator_cpp_pkg_interfaces__msg__KalmanPredictioni *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!incubator_cpp_pkg_interfaces__msg__KalmanPredictioni__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
