// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from calculator_interfaces:srv/Calculator.idl
// generated code does not contain a copyright notice
#include "calculator_interfaces/srv/detail/calculator__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `operation`
#include "rosidl_runtime_c/string_functions.h"

bool
calculator_interfaces__srv__Calculator_Request__init(calculator_interfaces__srv__Calculator_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // operation
  if (!rosidl_runtime_c__String__init(&msg->operation)) {
    calculator_interfaces__srv__Calculator_Request__fini(msg);
    return false;
  }
  return true;
}

void
calculator_interfaces__srv__Calculator_Request__fini(calculator_interfaces__srv__Calculator_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // operation
  rosidl_runtime_c__String__fini(&msg->operation);
}

bool
calculator_interfaces__srv__Calculator_Request__are_equal(const calculator_interfaces__srv__Calculator_Request * lhs, const calculator_interfaces__srv__Calculator_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // operation
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->operation), &(rhs->operation)))
  {
    return false;
  }
  return true;
}

bool
calculator_interfaces__srv__Calculator_Request__copy(
  const calculator_interfaces__srv__Calculator_Request * input,
  calculator_interfaces__srv__Calculator_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // operation
  if (!rosidl_runtime_c__String__copy(
      &(input->operation), &(output->operation)))
  {
    return false;
  }
  return true;
}

calculator_interfaces__srv__Calculator_Request *
calculator_interfaces__srv__Calculator_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  calculator_interfaces__srv__Calculator_Request * msg = (calculator_interfaces__srv__Calculator_Request *)allocator.allocate(sizeof(calculator_interfaces__srv__Calculator_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(calculator_interfaces__srv__Calculator_Request));
  bool success = calculator_interfaces__srv__Calculator_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
calculator_interfaces__srv__Calculator_Request__destroy(calculator_interfaces__srv__Calculator_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    calculator_interfaces__srv__Calculator_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
calculator_interfaces__srv__Calculator_Request__Sequence__init(calculator_interfaces__srv__Calculator_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  calculator_interfaces__srv__Calculator_Request * data = NULL;

  if (size) {
    data = (calculator_interfaces__srv__Calculator_Request *)allocator.zero_allocate(size, sizeof(calculator_interfaces__srv__Calculator_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = calculator_interfaces__srv__Calculator_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        calculator_interfaces__srv__Calculator_Request__fini(&data[i - 1]);
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
calculator_interfaces__srv__Calculator_Request__Sequence__fini(calculator_interfaces__srv__Calculator_Request__Sequence * array)
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
      calculator_interfaces__srv__Calculator_Request__fini(&array->data[i]);
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

calculator_interfaces__srv__Calculator_Request__Sequence *
calculator_interfaces__srv__Calculator_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  calculator_interfaces__srv__Calculator_Request__Sequence * array = (calculator_interfaces__srv__Calculator_Request__Sequence *)allocator.allocate(sizeof(calculator_interfaces__srv__Calculator_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = calculator_interfaces__srv__Calculator_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
calculator_interfaces__srv__Calculator_Request__Sequence__destroy(calculator_interfaces__srv__Calculator_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    calculator_interfaces__srv__Calculator_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
calculator_interfaces__srv__Calculator_Request__Sequence__are_equal(const calculator_interfaces__srv__Calculator_Request__Sequence * lhs, const calculator_interfaces__srv__Calculator_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!calculator_interfaces__srv__Calculator_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
calculator_interfaces__srv__Calculator_Request__Sequence__copy(
  const calculator_interfaces__srv__Calculator_Request__Sequence * input,
  calculator_interfaces__srv__Calculator_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(calculator_interfaces__srv__Calculator_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    calculator_interfaces__srv__Calculator_Request * data =
      (calculator_interfaces__srv__Calculator_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!calculator_interfaces__srv__Calculator_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          calculator_interfaces__srv__Calculator_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!calculator_interfaces__srv__Calculator_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
calculator_interfaces__srv__Calculator_Response__init(calculator_interfaces__srv__Calculator_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  // error
  if (!rosidl_runtime_c__String__init(&msg->error)) {
    calculator_interfaces__srv__Calculator_Response__fini(msg);
    return false;
  }
  return true;
}

void
calculator_interfaces__srv__Calculator_Response__fini(calculator_interfaces__srv__Calculator_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  // error
  rosidl_runtime_c__String__fini(&msg->error);
}

bool
calculator_interfaces__srv__Calculator_Response__are_equal(const calculator_interfaces__srv__Calculator_Response * lhs, const calculator_interfaces__srv__Calculator_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  return true;
}

bool
calculator_interfaces__srv__Calculator_Response__copy(
  const calculator_interfaces__srv__Calculator_Response * input,
  calculator_interfaces__srv__Calculator_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  // error
  if (!rosidl_runtime_c__String__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  return true;
}

calculator_interfaces__srv__Calculator_Response *
calculator_interfaces__srv__Calculator_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  calculator_interfaces__srv__Calculator_Response * msg = (calculator_interfaces__srv__Calculator_Response *)allocator.allocate(sizeof(calculator_interfaces__srv__Calculator_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(calculator_interfaces__srv__Calculator_Response));
  bool success = calculator_interfaces__srv__Calculator_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
calculator_interfaces__srv__Calculator_Response__destroy(calculator_interfaces__srv__Calculator_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    calculator_interfaces__srv__Calculator_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
calculator_interfaces__srv__Calculator_Response__Sequence__init(calculator_interfaces__srv__Calculator_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  calculator_interfaces__srv__Calculator_Response * data = NULL;

  if (size) {
    data = (calculator_interfaces__srv__Calculator_Response *)allocator.zero_allocate(size, sizeof(calculator_interfaces__srv__Calculator_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = calculator_interfaces__srv__Calculator_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        calculator_interfaces__srv__Calculator_Response__fini(&data[i - 1]);
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
calculator_interfaces__srv__Calculator_Response__Sequence__fini(calculator_interfaces__srv__Calculator_Response__Sequence * array)
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
      calculator_interfaces__srv__Calculator_Response__fini(&array->data[i]);
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

calculator_interfaces__srv__Calculator_Response__Sequence *
calculator_interfaces__srv__Calculator_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  calculator_interfaces__srv__Calculator_Response__Sequence * array = (calculator_interfaces__srv__Calculator_Response__Sequence *)allocator.allocate(sizeof(calculator_interfaces__srv__Calculator_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = calculator_interfaces__srv__Calculator_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
calculator_interfaces__srv__Calculator_Response__Sequence__destroy(calculator_interfaces__srv__Calculator_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    calculator_interfaces__srv__Calculator_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
calculator_interfaces__srv__Calculator_Response__Sequence__are_equal(const calculator_interfaces__srv__Calculator_Response__Sequence * lhs, const calculator_interfaces__srv__Calculator_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!calculator_interfaces__srv__Calculator_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
calculator_interfaces__srv__Calculator_Response__Sequence__copy(
  const calculator_interfaces__srv__Calculator_Response__Sequence * input,
  calculator_interfaces__srv__Calculator_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(calculator_interfaces__srv__Calculator_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    calculator_interfaces__srv__Calculator_Response * data =
      (calculator_interfaces__srv__Calculator_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!calculator_interfaces__srv__Calculator_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          calculator_interfaces__srv__Calculator_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!calculator_interfaces__srv__Calculator_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "calculator_interfaces/srv/detail/calculator__functions.h"

bool
calculator_interfaces__srv__Calculator_Event__init(calculator_interfaces__srv__Calculator_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    calculator_interfaces__srv__Calculator_Event__fini(msg);
    return false;
  }
  // request
  if (!calculator_interfaces__srv__Calculator_Request__Sequence__init(&msg->request, 0)) {
    calculator_interfaces__srv__Calculator_Event__fini(msg);
    return false;
  }
  // response
  if (!calculator_interfaces__srv__Calculator_Response__Sequence__init(&msg->response, 0)) {
    calculator_interfaces__srv__Calculator_Event__fini(msg);
    return false;
  }
  return true;
}

void
calculator_interfaces__srv__Calculator_Event__fini(calculator_interfaces__srv__Calculator_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  calculator_interfaces__srv__Calculator_Request__Sequence__fini(&msg->request);
  // response
  calculator_interfaces__srv__Calculator_Response__Sequence__fini(&msg->response);
}

bool
calculator_interfaces__srv__Calculator_Event__are_equal(const calculator_interfaces__srv__Calculator_Event * lhs, const calculator_interfaces__srv__Calculator_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!calculator_interfaces__srv__Calculator_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!calculator_interfaces__srv__Calculator_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
calculator_interfaces__srv__Calculator_Event__copy(
  const calculator_interfaces__srv__Calculator_Event * input,
  calculator_interfaces__srv__Calculator_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!calculator_interfaces__srv__Calculator_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!calculator_interfaces__srv__Calculator_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

calculator_interfaces__srv__Calculator_Event *
calculator_interfaces__srv__Calculator_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  calculator_interfaces__srv__Calculator_Event * msg = (calculator_interfaces__srv__Calculator_Event *)allocator.allocate(sizeof(calculator_interfaces__srv__Calculator_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(calculator_interfaces__srv__Calculator_Event));
  bool success = calculator_interfaces__srv__Calculator_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
calculator_interfaces__srv__Calculator_Event__destroy(calculator_interfaces__srv__Calculator_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    calculator_interfaces__srv__Calculator_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
calculator_interfaces__srv__Calculator_Event__Sequence__init(calculator_interfaces__srv__Calculator_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  calculator_interfaces__srv__Calculator_Event * data = NULL;

  if (size) {
    data = (calculator_interfaces__srv__Calculator_Event *)allocator.zero_allocate(size, sizeof(calculator_interfaces__srv__Calculator_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = calculator_interfaces__srv__Calculator_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        calculator_interfaces__srv__Calculator_Event__fini(&data[i - 1]);
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
calculator_interfaces__srv__Calculator_Event__Sequence__fini(calculator_interfaces__srv__Calculator_Event__Sequence * array)
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
      calculator_interfaces__srv__Calculator_Event__fini(&array->data[i]);
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

calculator_interfaces__srv__Calculator_Event__Sequence *
calculator_interfaces__srv__Calculator_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  calculator_interfaces__srv__Calculator_Event__Sequence * array = (calculator_interfaces__srv__Calculator_Event__Sequence *)allocator.allocate(sizeof(calculator_interfaces__srv__Calculator_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = calculator_interfaces__srv__Calculator_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
calculator_interfaces__srv__Calculator_Event__Sequence__destroy(calculator_interfaces__srv__Calculator_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    calculator_interfaces__srv__Calculator_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
calculator_interfaces__srv__Calculator_Event__Sequence__are_equal(const calculator_interfaces__srv__Calculator_Event__Sequence * lhs, const calculator_interfaces__srv__Calculator_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!calculator_interfaces__srv__Calculator_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
calculator_interfaces__srv__Calculator_Event__Sequence__copy(
  const calculator_interfaces__srv__Calculator_Event__Sequence * input,
  calculator_interfaces__srv__Calculator_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(calculator_interfaces__srv__Calculator_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    calculator_interfaces__srv__Calculator_Event * data =
      (calculator_interfaces__srv__Calculator_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!calculator_interfaces__srv__Calculator_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          calculator_interfaces__srv__Calculator_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!calculator_interfaces__srv__Calculator_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
