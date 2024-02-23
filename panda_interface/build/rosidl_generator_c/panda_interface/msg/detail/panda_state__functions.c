// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from panda_interface:msg/PandaState.idl
// generated code does not contain a copyright notice
#include "panda_interface/msg/detail/panda_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
panda_interface__msg__PandaState__init(panda_interface__msg__PandaState * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // velocity
  return true;
}

void
panda_interface__msg__PandaState__fini(panda_interface__msg__PandaState * msg)
{
  if (!msg) {
    return;
  }
  // position
  // velocity
}

bool
panda_interface__msg__PandaState__are_equal(const panda_interface__msg__PandaState * lhs, const panda_interface__msg__PandaState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->position[i] != rhs->position[i]) {
      return false;
    }
  }
  // velocity
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->velocity[i] != rhs->velocity[i]) {
      return false;
    }
  }
  return true;
}

bool
panda_interface__msg__PandaState__copy(
  const panda_interface__msg__PandaState * input,
  panda_interface__msg__PandaState * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  for (size_t i = 0; i < 7; ++i) {
    output->position[i] = input->position[i];
  }
  // velocity
  for (size_t i = 0; i < 7; ++i) {
    output->velocity[i] = input->velocity[i];
  }
  return true;
}

panda_interface__msg__PandaState *
panda_interface__msg__PandaState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_interface__msg__PandaState * msg = (panda_interface__msg__PandaState *)allocator.allocate(sizeof(panda_interface__msg__PandaState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(panda_interface__msg__PandaState));
  bool success = panda_interface__msg__PandaState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
panda_interface__msg__PandaState__destroy(panda_interface__msg__PandaState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    panda_interface__msg__PandaState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
panda_interface__msg__PandaState__Sequence__init(panda_interface__msg__PandaState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_interface__msg__PandaState * data = NULL;

  if (size) {
    data = (panda_interface__msg__PandaState *)allocator.zero_allocate(size, sizeof(panda_interface__msg__PandaState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = panda_interface__msg__PandaState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        panda_interface__msg__PandaState__fini(&data[i - 1]);
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
panda_interface__msg__PandaState__Sequence__fini(panda_interface__msg__PandaState__Sequence * array)
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
      panda_interface__msg__PandaState__fini(&array->data[i]);
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

panda_interface__msg__PandaState__Sequence *
panda_interface__msg__PandaState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_interface__msg__PandaState__Sequence * array = (panda_interface__msg__PandaState__Sequence *)allocator.allocate(sizeof(panda_interface__msg__PandaState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = panda_interface__msg__PandaState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
panda_interface__msg__PandaState__Sequence__destroy(panda_interface__msg__PandaState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    panda_interface__msg__PandaState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
panda_interface__msg__PandaState__Sequence__are_equal(const panda_interface__msg__PandaState__Sequence * lhs, const panda_interface__msg__PandaState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!panda_interface__msg__PandaState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
panda_interface__msg__PandaState__Sequence__copy(
  const panda_interface__msg__PandaState__Sequence * input,
  panda_interface__msg__PandaState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(panda_interface__msg__PandaState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    panda_interface__msg__PandaState * data =
      (panda_interface__msg__PandaState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!panda_interface__msg__PandaState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          panda_interface__msg__PandaState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!panda_interface__msg__PandaState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
