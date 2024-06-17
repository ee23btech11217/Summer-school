// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from calculator_interfaces:srv/Calculator.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "calculator_interfaces/srv/detail/calculator__rosidl_typesupport_introspection_c.h"
#include "calculator_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "calculator_interfaces/srv/detail/calculator__functions.h"
#include "calculator_interfaces/srv/detail/calculator__struct.h"


// Include directives for member types
// Member `operation`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void calculator_interfaces__srv__Calculator_Request__rosidl_typesupport_introspection_c__Calculator_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  calculator_interfaces__srv__Calculator_Request__init(message_memory);
}

void calculator_interfaces__srv__Calculator_Request__rosidl_typesupport_introspection_c__Calculator_Request_fini_function(void * message_memory)
{
  calculator_interfaces__srv__Calculator_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember calculator_interfaces__srv__Calculator_Request__rosidl_typesupport_introspection_c__Calculator_Request_message_member_array[3] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calculator_interfaces__srv__Calculator_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calculator_interfaces__srv__Calculator_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calculator_interfaces__srv__Calculator_Request, operation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers calculator_interfaces__srv__Calculator_Request__rosidl_typesupport_introspection_c__Calculator_Request_message_members = {
  "calculator_interfaces__srv",  // message namespace
  "Calculator_Request",  // message name
  3,  // number of fields
  sizeof(calculator_interfaces__srv__Calculator_Request),
  false,  // has_any_key_member_
  calculator_interfaces__srv__Calculator_Request__rosidl_typesupport_introspection_c__Calculator_Request_message_member_array,  // message members
  calculator_interfaces__srv__Calculator_Request__rosidl_typesupport_introspection_c__Calculator_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  calculator_interfaces__srv__Calculator_Request__rosidl_typesupport_introspection_c__Calculator_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t calculator_interfaces__srv__Calculator_Request__rosidl_typesupport_introspection_c__Calculator_Request_message_type_support_handle = {
  0,
  &calculator_interfaces__srv__Calculator_Request__rosidl_typesupport_introspection_c__Calculator_Request_message_members,
  get_message_typesupport_handle_function,
  &calculator_interfaces__srv__Calculator_Request__get_type_hash,
  &calculator_interfaces__srv__Calculator_Request__get_type_description,
  &calculator_interfaces__srv__Calculator_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calculator_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calculator_interfaces, srv, Calculator_Request)() {
  if (!calculator_interfaces__srv__Calculator_Request__rosidl_typesupport_introspection_c__Calculator_Request_message_type_support_handle.typesupport_identifier) {
    calculator_interfaces__srv__Calculator_Request__rosidl_typesupport_introspection_c__Calculator_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &calculator_interfaces__srv__Calculator_Request__rosidl_typesupport_introspection_c__Calculator_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "calculator_interfaces/srv/detail/calculator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "calculator_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "calculator_interfaces/srv/detail/calculator__functions.h"
// already included above
// #include "calculator_interfaces/srv/detail/calculator__struct.h"


// Include directives for member types
// Member `error`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void calculator_interfaces__srv__Calculator_Response__rosidl_typesupport_introspection_c__Calculator_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  calculator_interfaces__srv__Calculator_Response__init(message_memory);
}

void calculator_interfaces__srv__Calculator_Response__rosidl_typesupport_introspection_c__Calculator_Response_fini_function(void * message_memory)
{
  calculator_interfaces__srv__Calculator_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember calculator_interfaces__srv__Calculator_Response__rosidl_typesupport_introspection_c__Calculator_Response_message_member_array[2] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calculator_interfaces__srv__Calculator_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calculator_interfaces__srv__Calculator_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers calculator_interfaces__srv__Calculator_Response__rosidl_typesupport_introspection_c__Calculator_Response_message_members = {
  "calculator_interfaces__srv",  // message namespace
  "Calculator_Response",  // message name
  2,  // number of fields
  sizeof(calculator_interfaces__srv__Calculator_Response),
  false,  // has_any_key_member_
  calculator_interfaces__srv__Calculator_Response__rosidl_typesupport_introspection_c__Calculator_Response_message_member_array,  // message members
  calculator_interfaces__srv__Calculator_Response__rosidl_typesupport_introspection_c__Calculator_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  calculator_interfaces__srv__Calculator_Response__rosidl_typesupport_introspection_c__Calculator_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t calculator_interfaces__srv__Calculator_Response__rosidl_typesupport_introspection_c__Calculator_Response_message_type_support_handle = {
  0,
  &calculator_interfaces__srv__Calculator_Response__rosidl_typesupport_introspection_c__Calculator_Response_message_members,
  get_message_typesupport_handle_function,
  &calculator_interfaces__srv__Calculator_Response__get_type_hash,
  &calculator_interfaces__srv__Calculator_Response__get_type_description,
  &calculator_interfaces__srv__Calculator_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calculator_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calculator_interfaces, srv, Calculator_Response)() {
  if (!calculator_interfaces__srv__Calculator_Response__rosidl_typesupport_introspection_c__Calculator_Response_message_type_support_handle.typesupport_identifier) {
    calculator_interfaces__srv__Calculator_Response__rosidl_typesupport_introspection_c__Calculator_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &calculator_interfaces__srv__Calculator_Response__rosidl_typesupport_introspection_c__Calculator_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "calculator_interfaces/srv/detail/calculator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "calculator_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "calculator_interfaces/srv/detail/calculator__functions.h"
// already included above
// #include "calculator_interfaces/srv/detail/calculator__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "calculator_interfaces/srv/calculator.h"
// Member `request`
// Member `response`
// already included above
// #include "calculator_interfaces/srv/detail/calculator__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__Calculator_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  calculator_interfaces__srv__Calculator_Event__init(message_memory);
}

void calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__Calculator_Event_fini_function(void * message_memory)
{
  calculator_interfaces__srv__Calculator_Event__fini(message_memory);
}

size_t calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__size_function__Calculator_Event__request(
  const void * untyped_member)
{
  const calculator_interfaces__srv__Calculator_Request__Sequence * member =
    (const calculator_interfaces__srv__Calculator_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__get_const_function__Calculator_Event__request(
  const void * untyped_member, size_t index)
{
  const calculator_interfaces__srv__Calculator_Request__Sequence * member =
    (const calculator_interfaces__srv__Calculator_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__get_function__Calculator_Event__request(
  void * untyped_member, size_t index)
{
  calculator_interfaces__srv__Calculator_Request__Sequence * member =
    (calculator_interfaces__srv__Calculator_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__fetch_function__Calculator_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const calculator_interfaces__srv__Calculator_Request * item =
    ((const calculator_interfaces__srv__Calculator_Request *)
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__get_const_function__Calculator_Event__request(untyped_member, index));
  calculator_interfaces__srv__Calculator_Request * value =
    (calculator_interfaces__srv__Calculator_Request *)(untyped_value);
  *value = *item;
}

void calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__assign_function__Calculator_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  calculator_interfaces__srv__Calculator_Request * item =
    ((calculator_interfaces__srv__Calculator_Request *)
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__get_function__Calculator_Event__request(untyped_member, index));
  const calculator_interfaces__srv__Calculator_Request * value =
    (const calculator_interfaces__srv__Calculator_Request *)(untyped_value);
  *item = *value;
}

bool calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__resize_function__Calculator_Event__request(
  void * untyped_member, size_t size)
{
  calculator_interfaces__srv__Calculator_Request__Sequence * member =
    (calculator_interfaces__srv__Calculator_Request__Sequence *)(untyped_member);
  calculator_interfaces__srv__Calculator_Request__Sequence__fini(member);
  return calculator_interfaces__srv__Calculator_Request__Sequence__init(member, size);
}

size_t calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__size_function__Calculator_Event__response(
  const void * untyped_member)
{
  const calculator_interfaces__srv__Calculator_Response__Sequence * member =
    (const calculator_interfaces__srv__Calculator_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__get_const_function__Calculator_Event__response(
  const void * untyped_member, size_t index)
{
  const calculator_interfaces__srv__Calculator_Response__Sequence * member =
    (const calculator_interfaces__srv__Calculator_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__get_function__Calculator_Event__response(
  void * untyped_member, size_t index)
{
  calculator_interfaces__srv__Calculator_Response__Sequence * member =
    (calculator_interfaces__srv__Calculator_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__fetch_function__Calculator_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const calculator_interfaces__srv__Calculator_Response * item =
    ((const calculator_interfaces__srv__Calculator_Response *)
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__get_const_function__Calculator_Event__response(untyped_member, index));
  calculator_interfaces__srv__Calculator_Response * value =
    (calculator_interfaces__srv__Calculator_Response *)(untyped_value);
  *value = *item;
}

void calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__assign_function__Calculator_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  calculator_interfaces__srv__Calculator_Response * item =
    ((calculator_interfaces__srv__Calculator_Response *)
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__get_function__Calculator_Event__response(untyped_member, index));
  const calculator_interfaces__srv__Calculator_Response * value =
    (const calculator_interfaces__srv__Calculator_Response *)(untyped_value);
  *item = *value;
}

bool calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__resize_function__Calculator_Event__response(
  void * untyped_member, size_t size)
{
  calculator_interfaces__srv__Calculator_Response__Sequence * member =
    (calculator_interfaces__srv__Calculator_Response__Sequence *)(untyped_member);
  calculator_interfaces__srv__Calculator_Response__Sequence__fini(member);
  return calculator_interfaces__srv__Calculator_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__Calculator_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calculator_interfaces__srv__Calculator_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(calculator_interfaces__srv__Calculator_Event, request),  // bytes offset in struct
    NULL,  // default value
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__size_function__Calculator_Event__request,  // size() function pointer
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__get_const_function__Calculator_Event__request,  // get_const(index) function pointer
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__get_function__Calculator_Event__request,  // get(index) function pointer
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__fetch_function__Calculator_Event__request,  // fetch(index, &value) function pointer
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__assign_function__Calculator_Event__request,  // assign(index, value) function pointer
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__resize_function__Calculator_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(calculator_interfaces__srv__Calculator_Event, response),  // bytes offset in struct
    NULL,  // default value
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__size_function__Calculator_Event__response,  // size() function pointer
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__get_const_function__Calculator_Event__response,  // get_const(index) function pointer
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__get_function__Calculator_Event__response,  // get(index) function pointer
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__fetch_function__Calculator_Event__response,  // fetch(index, &value) function pointer
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__assign_function__Calculator_Event__response,  // assign(index, value) function pointer
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__resize_function__Calculator_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__Calculator_Event_message_members = {
  "calculator_interfaces__srv",  // message namespace
  "Calculator_Event",  // message name
  3,  // number of fields
  sizeof(calculator_interfaces__srv__Calculator_Event),
  false,  // has_any_key_member_
  calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__Calculator_Event_message_member_array,  // message members
  calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__Calculator_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__Calculator_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__Calculator_Event_message_type_support_handle = {
  0,
  &calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__Calculator_Event_message_members,
  get_message_typesupport_handle_function,
  &calculator_interfaces__srv__Calculator_Event__get_type_hash,
  &calculator_interfaces__srv__Calculator_Event__get_type_description,
  &calculator_interfaces__srv__Calculator_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calculator_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calculator_interfaces, srv, Calculator_Event)() {
  calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__Calculator_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__Calculator_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calculator_interfaces, srv, Calculator_Request)();
  calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__Calculator_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calculator_interfaces, srv, Calculator_Response)();
  if (!calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__Calculator_Event_message_type_support_handle.typesupport_identifier) {
    calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__Calculator_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__Calculator_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "calculator_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "calculator_interfaces/srv/detail/calculator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers calculator_interfaces__srv__detail__calculator__rosidl_typesupport_introspection_c__Calculator_service_members = {
  "calculator_interfaces__srv",  // service namespace
  "Calculator",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // calculator_interfaces__srv__detail__calculator__rosidl_typesupport_introspection_c__Calculator_Request_message_type_support_handle,
  NULL,  // response message
  // calculator_interfaces__srv__detail__calculator__rosidl_typesupport_introspection_c__Calculator_Response_message_type_support_handle
  NULL  // event_message
  // calculator_interfaces__srv__detail__calculator__rosidl_typesupport_introspection_c__Calculator_Response_message_type_support_handle
};


static rosidl_service_type_support_t calculator_interfaces__srv__detail__calculator__rosidl_typesupport_introspection_c__Calculator_service_type_support_handle = {
  0,
  &calculator_interfaces__srv__detail__calculator__rosidl_typesupport_introspection_c__Calculator_service_members,
  get_service_typesupport_handle_function,
  &calculator_interfaces__srv__Calculator_Request__rosidl_typesupport_introspection_c__Calculator_Request_message_type_support_handle,
  &calculator_interfaces__srv__Calculator_Response__rosidl_typesupport_introspection_c__Calculator_Response_message_type_support_handle,
  &calculator_interfaces__srv__Calculator_Event__rosidl_typesupport_introspection_c__Calculator_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    calculator_interfaces,
    srv,
    Calculator
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    calculator_interfaces,
    srv,
    Calculator
  ),
  &calculator_interfaces__srv__Calculator__get_type_hash,
  &calculator_interfaces__srv__Calculator__get_type_description,
  &calculator_interfaces__srv__Calculator__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calculator_interfaces, srv, Calculator_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calculator_interfaces, srv, Calculator_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calculator_interfaces, srv, Calculator_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calculator_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calculator_interfaces, srv, Calculator)(void) {
  if (!calculator_interfaces__srv__detail__calculator__rosidl_typesupport_introspection_c__Calculator_service_type_support_handle.typesupport_identifier) {
    calculator_interfaces__srv__detail__calculator__rosidl_typesupport_introspection_c__Calculator_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)calculator_interfaces__srv__detail__calculator__rosidl_typesupport_introspection_c__Calculator_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calculator_interfaces, srv, Calculator_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calculator_interfaces, srv, Calculator_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calculator_interfaces, srv, Calculator_Event)()->data;
  }

  return &calculator_interfaces__srv__detail__calculator__rosidl_typesupport_introspection_c__Calculator_service_type_support_handle;
}
