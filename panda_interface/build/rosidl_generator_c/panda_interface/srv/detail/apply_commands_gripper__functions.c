// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from panda_interface:srv/ApplyCommandsGripper.idl
// generated code does not contain a copyright notice
#include "panda_interface/srv/detail/apply_commands_gripper__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `command`
#include "panda_interface/msg/detail/panda_gripper_command__functions.h"

bool
panda_interface__srv__ApplyCommandsGripper_Request__init(panda_interface__srv__ApplyCommandsGripper_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!panda_interface__msg__PandaGripperCommand__init(&msg->command)) {
    panda_interface__srv__ApplyCommandsGripper_Request__fini(msg);
    return false;
  }
  return true;
}

void
panda_interface__srv__ApplyCommandsGripper_Request__fini(panda_interface__srv__ApplyCommandsGripper_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
  panda_interface__msg__PandaGripperCommand__fini(&msg->command);
}

bool
panda_interface__srv__ApplyCommandsGripper_Request__are_equal(const panda_interface__srv__ApplyCommandsGripper_Request * lhs, const panda_interface__srv__ApplyCommandsGripper_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!panda_interface__msg__PandaGripperCommand__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
panda_interface__srv__ApplyCommandsGripper_Request__copy(
  const panda_interface__srv__ApplyCommandsGripper_Request * input,
  panda_interface__srv__ApplyCommandsGripper_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!panda_interface__msg__PandaGripperCommand__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

panda_interface__srv__ApplyCommandsGripper_Request *
panda_interface__srv__ApplyCommandsGripper_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_interface__srv__ApplyCommandsGripper_Request * msg = (panda_interface__srv__ApplyCommandsGripper_Request *)allocator.allocate(sizeof(panda_interface__srv__ApplyCommandsGripper_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(panda_interface__srv__ApplyCommandsGripper_Request));
  bool success = panda_interface__srv__ApplyCommandsGripper_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
panda_interface__srv__ApplyCommandsGripper_Request__destroy(panda_interface__srv__ApplyCommandsGripper_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    panda_interface__srv__ApplyCommandsGripper_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
panda_interface__srv__ApplyCommandsGripper_Request__Sequence__init(panda_interface__srv__ApplyCommandsGripper_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_interface__srv__ApplyCommandsGripper_Request * data = NULL;

  if (size) {
    data = (panda_interface__srv__ApplyCommandsGripper_Request *)allocator.zero_allocate(size, sizeof(panda_interface__srv__ApplyCommandsGripper_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = panda_interface__srv__ApplyCommandsGripper_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        panda_interface__srv__ApplyCommandsGripper_Request__fini(&data[i - 1]);
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
panda_interface__srv__ApplyCommandsGripper_Request__Sequence__fini(panda_interface__srv__ApplyCommandsGripper_Request__Sequence * array)
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
      panda_interface__srv__ApplyCommandsGripper_Request__fini(&array->data[i]);
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

panda_interface__srv__ApplyCommandsGripper_Request__Sequence *
panda_interface__srv__ApplyCommandsGripper_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_interface__srv__ApplyCommandsGripper_Request__Sequence * array = (panda_interface__srv__ApplyCommandsGripper_Request__Sequence *)allocator.allocate(sizeof(panda_interface__srv__ApplyCommandsGripper_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = panda_interface__srv__ApplyCommandsGripper_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
panda_interface__srv__ApplyCommandsGripper_Request__Sequence__destroy(panda_interface__srv__ApplyCommandsGripper_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    panda_interface__srv__ApplyCommandsGripper_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
panda_interface__srv__ApplyCommandsGripper_Request__Sequence__are_equal(const panda_interface__srv__ApplyCommandsGripper_Request__Sequence * lhs, const panda_interface__srv__ApplyCommandsGripper_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!panda_interface__srv__ApplyCommandsGripper_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
panda_interface__srv__ApplyCommandsGripper_Request__Sequence__copy(
  const panda_interface__srv__ApplyCommandsGripper_Request__Sequence * input,
  panda_interface__srv__ApplyCommandsGripper_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(panda_interface__srv__ApplyCommandsGripper_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    panda_interface__srv__ApplyCommandsGripper_Request * data =
      (panda_interface__srv__ApplyCommandsGripper_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!panda_interface__srv__ApplyCommandsGripper_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          panda_interface__srv__ApplyCommandsGripper_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!panda_interface__srv__ApplyCommandsGripper_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
panda_interface__srv__ApplyCommandsGripper_Response__init(panda_interface__srv__ApplyCommandsGripper_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
panda_interface__srv__ApplyCommandsGripper_Response__fini(panda_interface__srv__ApplyCommandsGripper_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
panda_interface__srv__ApplyCommandsGripper_Response__are_equal(const panda_interface__srv__ApplyCommandsGripper_Response * lhs, const panda_interface__srv__ApplyCommandsGripper_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
panda_interface__srv__ApplyCommandsGripper_Response__copy(
  const panda_interface__srv__ApplyCommandsGripper_Response * input,
  panda_interface__srv__ApplyCommandsGripper_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

panda_interface__srv__ApplyCommandsGripper_Response *
panda_interface__srv__ApplyCommandsGripper_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_interface__srv__ApplyCommandsGripper_Response * msg = (panda_interface__srv__ApplyCommandsGripper_Response *)allocator.allocate(sizeof(panda_interface__srv__ApplyCommandsGripper_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(panda_interface__srv__ApplyCommandsGripper_Response));
  bool success = panda_interface__srv__ApplyCommandsGripper_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
panda_interface__srv__ApplyCommandsGripper_Response__destroy(panda_interface__srv__ApplyCommandsGripper_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    panda_interface__srv__ApplyCommandsGripper_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
panda_interface__srv__ApplyCommandsGripper_Response__Sequence__init(panda_interface__srv__ApplyCommandsGripper_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_interface__srv__ApplyCommandsGripper_Response * data = NULL;

  if (size) {
    data = (panda_interface__srv__ApplyCommandsGripper_Response *)allocator.zero_allocate(size, sizeof(panda_interface__srv__ApplyCommandsGripper_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = panda_interface__srv__ApplyCommandsGripper_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        panda_interface__srv__ApplyCommandsGripper_Response__fini(&data[i - 1]);
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
panda_interface__srv__ApplyCommandsGripper_Response__Sequence__fini(panda_interface__srv__ApplyCommandsGripper_Response__Sequence * array)
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
      panda_interface__srv__ApplyCommandsGripper_Response__fini(&array->data[i]);
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

panda_interface__srv__ApplyCommandsGripper_Response__Sequence *
panda_interface__srv__ApplyCommandsGripper_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panda_interface__srv__ApplyCommandsGripper_Response__Sequence * array = (panda_interface__srv__ApplyCommandsGripper_Response__Sequence *)allocator.allocate(sizeof(panda_interface__srv__ApplyCommandsGripper_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = panda_interface__srv__ApplyCommandsGripper_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
panda_interface__srv__ApplyCommandsGripper_Response__Sequence__destroy(panda_interface__srv__ApplyCommandsGripper_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    panda_interface__srv__ApplyCommandsGripper_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
panda_interface__srv__ApplyCommandsGripper_Response__Sequence__are_equal(const panda_interface__srv__ApplyCommandsGripper_Response__Sequence * lhs, const panda_interface__srv__ApplyCommandsGripper_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!panda_interface__srv__ApplyCommandsGripper_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
panda_interface__srv__ApplyCommandsGripper_Response__Sequence__copy(
  const panda_interface__srv__ApplyCommandsGripper_Response__Sequence * input,
  panda_interface__srv__ApplyCommandsGripper_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(panda_interface__srv__ApplyCommandsGripper_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    panda_interface__srv__ApplyCommandsGripper_Response * data =
      (panda_interface__srv__ApplyCommandsGripper_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!panda_interface__srv__ApplyCommandsGripper_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          panda_interface__srv__ApplyCommandsGripper_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!panda_interface__srv__ApplyCommandsGripper_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
