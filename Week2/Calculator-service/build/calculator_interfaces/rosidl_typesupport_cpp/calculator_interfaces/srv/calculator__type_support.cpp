// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from calculator_interfaces:srv/Calculator.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "calculator_interfaces/srv/detail/calculator__functions.h"
#include "calculator_interfaces/srv/detail/calculator__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace calculator_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Calculator_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Calculator_Request_type_support_ids_t;

static const _Calculator_Request_type_support_ids_t _Calculator_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Calculator_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Calculator_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Calculator_Request_type_support_symbol_names_t _Calculator_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, calculator_interfaces, srv, Calculator_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, calculator_interfaces, srv, Calculator_Request)),
  }
};

typedef struct _Calculator_Request_type_support_data_t
{
  void * data[2];
} _Calculator_Request_type_support_data_t;

static _Calculator_Request_type_support_data_t _Calculator_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Calculator_Request_message_typesupport_map = {
  2,
  "calculator_interfaces",
  &_Calculator_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Calculator_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Calculator_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Calculator_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Calculator_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &calculator_interfaces__srv__Calculator_Request__get_type_hash,
  &calculator_interfaces__srv__Calculator_Request__get_type_description,
  &calculator_interfaces__srv__Calculator_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace calculator_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<calculator_interfaces::srv::Calculator_Request>()
{
  return &::calculator_interfaces::srv::rosidl_typesupport_cpp::Calculator_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, calculator_interfaces, srv, Calculator_Request)() {
  return get_message_type_support_handle<calculator_interfaces::srv::Calculator_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "calculator_interfaces/srv/detail/calculator__functions.h"
// already included above
// #include "calculator_interfaces/srv/detail/calculator__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calculator_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Calculator_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Calculator_Response_type_support_ids_t;

static const _Calculator_Response_type_support_ids_t _Calculator_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Calculator_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Calculator_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Calculator_Response_type_support_symbol_names_t _Calculator_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, calculator_interfaces, srv, Calculator_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, calculator_interfaces, srv, Calculator_Response)),
  }
};

typedef struct _Calculator_Response_type_support_data_t
{
  void * data[2];
} _Calculator_Response_type_support_data_t;

static _Calculator_Response_type_support_data_t _Calculator_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Calculator_Response_message_typesupport_map = {
  2,
  "calculator_interfaces",
  &_Calculator_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Calculator_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Calculator_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Calculator_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Calculator_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &calculator_interfaces__srv__Calculator_Response__get_type_hash,
  &calculator_interfaces__srv__Calculator_Response__get_type_description,
  &calculator_interfaces__srv__Calculator_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace calculator_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<calculator_interfaces::srv::Calculator_Response>()
{
  return &::calculator_interfaces::srv::rosidl_typesupport_cpp::Calculator_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, calculator_interfaces, srv, Calculator_Response)() {
  return get_message_type_support_handle<calculator_interfaces::srv::Calculator_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "calculator_interfaces/srv/detail/calculator__functions.h"
// already included above
// #include "calculator_interfaces/srv/detail/calculator__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calculator_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Calculator_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Calculator_Event_type_support_ids_t;

static const _Calculator_Event_type_support_ids_t _Calculator_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Calculator_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Calculator_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Calculator_Event_type_support_symbol_names_t _Calculator_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, calculator_interfaces, srv, Calculator_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, calculator_interfaces, srv, Calculator_Event)),
  }
};

typedef struct _Calculator_Event_type_support_data_t
{
  void * data[2];
} _Calculator_Event_type_support_data_t;

static _Calculator_Event_type_support_data_t _Calculator_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Calculator_Event_message_typesupport_map = {
  2,
  "calculator_interfaces",
  &_Calculator_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Calculator_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Calculator_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Calculator_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Calculator_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &calculator_interfaces__srv__Calculator_Event__get_type_hash,
  &calculator_interfaces__srv__Calculator_Event__get_type_description,
  &calculator_interfaces__srv__Calculator_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace calculator_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<calculator_interfaces::srv::Calculator_Event>()
{
  return &::calculator_interfaces::srv::rosidl_typesupport_cpp::Calculator_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, calculator_interfaces, srv, Calculator_Event)() {
  return get_message_type_support_handle<calculator_interfaces::srv::Calculator_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "calculator_interfaces/srv/detail/calculator__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calculator_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Calculator_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Calculator_type_support_ids_t;

static const _Calculator_type_support_ids_t _Calculator_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Calculator_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Calculator_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Calculator_type_support_symbol_names_t _Calculator_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, calculator_interfaces, srv, Calculator)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, calculator_interfaces, srv, Calculator)),
  }
};

typedef struct _Calculator_type_support_data_t
{
  void * data[2];
} _Calculator_type_support_data_t;

static _Calculator_type_support_data_t _Calculator_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Calculator_service_typesupport_map = {
  2,
  "calculator_interfaces",
  &_Calculator_service_typesupport_ids.typesupport_identifier[0],
  &_Calculator_service_typesupport_symbol_names.symbol_name[0],
  &_Calculator_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Calculator_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Calculator_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<calculator_interfaces::srv::Calculator_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<calculator_interfaces::srv::Calculator_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<calculator_interfaces::srv::Calculator_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<calculator_interfaces::srv::Calculator>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<calculator_interfaces::srv::Calculator>,
  &calculator_interfaces__srv__Calculator__get_type_hash,
  &calculator_interfaces__srv__Calculator__get_type_description,
  &calculator_interfaces__srv__Calculator__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace calculator_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<calculator_interfaces::srv::Calculator>()
{
  return &::calculator_interfaces::srv::rosidl_typesupport_cpp::Calculator_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, calculator_interfaces, srv, Calculator)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<calculator_interfaces::srv::Calculator>();
}

#ifdef __cplusplus
}
#endif
