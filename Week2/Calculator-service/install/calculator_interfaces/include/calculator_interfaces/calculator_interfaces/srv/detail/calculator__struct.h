// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from calculator_interfaces:srv/Calculator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "calculator_interfaces/srv/calculator.h"


#ifndef CALCULATOR_INTERFACES__SRV__DETAIL__CALCULATOR__STRUCT_H_
#define CALCULATOR_INTERFACES__SRV__DETAIL__CALCULATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'operation'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Calculator in the package calculator_interfaces.
typedef struct calculator_interfaces__srv__Calculator_Request
{
  double a;
  double b;
  rosidl_runtime_c__String operation;
} calculator_interfaces__srv__Calculator_Request;

// Struct for a sequence of calculator_interfaces__srv__Calculator_Request.
typedef struct calculator_interfaces__srv__Calculator_Request__Sequence
{
  calculator_interfaces__srv__Calculator_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calculator_interfaces__srv__Calculator_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'error'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Calculator in the package calculator_interfaces.
typedef struct calculator_interfaces__srv__Calculator_Response
{
  double result;
  rosidl_runtime_c__String error;
} calculator_interfaces__srv__Calculator_Response;

// Struct for a sequence of calculator_interfaces__srv__Calculator_Response.
typedef struct calculator_interfaces__srv__Calculator_Response__Sequence
{
  calculator_interfaces__srv__Calculator_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calculator_interfaces__srv__Calculator_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  calculator_interfaces__srv__Calculator_Event__request__MAX_SIZE = 1
};
// response
enum
{
  calculator_interfaces__srv__Calculator_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Calculator in the package calculator_interfaces.
typedef struct calculator_interfaces__srv__Calculator_Event
{
  service_msgs__msg__ServiceEventInfo info;
  calculator_interfaces__srv__Calculator_Request__Sequence request;
  calculator_interfaces__srv__Calculator_Response__Sequence response;
} calculator_interfaces__srv__Calculator_Event;

// Struct for a sequence of calculator_interfaces__srv__Calculator_Event.
typedef struct calculator_interfaces__srv__Calculator_Event__Sequence
{
  calculator_interfaces__srv__Calculator_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calculator_interfaces__srv__Calculator_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CALCULATOR_INTERFACES__SRV__DETAIL__CALCULATOR__STRUCT_H_
