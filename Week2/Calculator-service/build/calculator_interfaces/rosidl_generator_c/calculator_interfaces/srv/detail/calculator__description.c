// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from calculator_interfaces:srv/Calculator.idl
// generated code does not contain a copyright notice

#include "calculator_interfaces/srv/detail/calculator__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_calculator_interfaces
const rosidl_type_hash_t *
calculator_interfaces__srv__Calculator__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3e, 0xd0, 0x61, 0xb7, 0x04, 0x15, 0x00, 0x4f,
      0xf7, 0x37, 0xdf, 0x29, 0xec, 0x18, 0xe5, 0xea,
      0x82, 0x69, 0xe5, 0xa4, 0xd4, 0xc4, 0x05, 0xf6,
      0x35, 0x20, 0xc8, 0x91, 0x59, 0x39, 0xe8, 0x16,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_calculator_interfaces
const rosidl_type_hash_t *
calculator_interfaces__srv__Calculator_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf1, 0x98, 0x85, 0x79, 0xb6, 0x4f, 0xf8, 0xe3,
      0x48, 0x2c, 0x79, 0x40, 0xfa, 0x2d, 0x74, 0xb6,
      0x23, 0x6c, 0x7c, 0x12, 0x87, 0xcc, 0xe5, 0xe4,
      0x17, 0xe8, 0x8b, 0xc7, 0x25, 0x64, 0x2a, 0x81,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_calculator_interfaces
const rosidl_type_hash_t *
calculator_interfaces__srv__Calculator_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0x10, 0x51, 0xde, 0x46, 0xed, 0x8c, 0x66,
      0x58, 0xf6, 0x9c, 0x2b, 0x20, 0x2a, 0x92, 0x6e,
      0x7d, 0x80, 0x44, 0x64, 0xaf, 0xfe, 0x3e, 0x87,
      0x0c, 0x2c, 0xe2, 0xf7, 0x4f, 0xf5, 0xc1, 0x57,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_calculator_interfaces
const rosidl_type_hash_t *
calculator_interfaces__srv__Calculator_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0x8f, 0x85, 0xa2, 0xb6, 0x26, 0x20, 0x2f,
      0xf7, 0x3f, 0x51, 0x51, 0x3b, 0xd4, 0xdb, 0x90,
      0xc2, 0xaa, 0x5c, 0x1f, 0x4f, 0x0b, 0x79, 0x46,
      0x3a, 0x84, 0x3a, 0x07, 0x0f, 0xe3, 0xd2, 0xe4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char calculator_interfaces__srv__Calculator__TYPE_NAME[] = "calculator_interfaces/srv/Calculator";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char calculator_interfaces__srv__Calculator_Event__TYPE_NAME[] = "calculator_interfaces/srv/Calculator_Event";
static char calculator_interfaces__srv__Calculator_Request__TYPE_NAME[] = "calculator_interfaces/srv/Calculator_Request";
static char calculator_interfaces__srv__Calculator_Response__TYPE_NAME[] = "calculator_interfaces/srv/Calculator_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char calculator_interfaces__srv__Calculator__FIELD_NAME__request_message[] = "request_message";
static char calculator_interfaces__srv__Calculator__FIELD_NAME__response_message[] = "response_message";
static char calculator_interfaces__srv__Calculator__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field calculator_interfaces__srv__Calculator__FIELDS[] = {
  {
    {calculator_interfaces__srv__Calculator__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {calculator_interfaces__srv__Calculator_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {calculator_interfaces__srv__Calculator__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {calculator_interfaces__srv__Calculator_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {calculator_interfaces__srv__Calculator__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {calculator_interfaces__srv__Calculator_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription calculator_interfaces__srv__Calculator__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {calculator_interfaces__srv__Calculator_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {calculator_interfaces__srv__Calculator_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {calculator_interfaces__srv__Calculator_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
calculator_interfaces__srv__Calculator__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {calculator_interfaces__srv__Calculator__TYPE_NAME, 36, 36},
      {calculator_interfaces__srv__Calculator__FIELDS, 3, 3},
    },
    {calculator_interfaces__srv__Calculator__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = calculator_interfaces__srv__Calculator_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = calculator_interfaces__srv__Calculator_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = calculator_interfaces__srv__Calculator_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char calculator_interfaces__srv__Calculator_Request__FIELD_NAME__a[] = "a";
static char calculator_interfaces__srv__Calculator_Request__FIELD_NAME__b[] = "b";
static char calculator_interfaces__srv__Calculator_Request__FIELD_NAME__operation[] = "operation";

static rosidl_runtime_c__type_description__Field calculator_interfaces__srv__Calculator_Request__FIELDS[] = {
  {
    {calculator_interfaces__srv__Calculator_Request__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {calculator_interfaces__srv__Calculator_Request__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {calculator_interfaces__srv__Calculator_Request__FIELD_NAME__operation, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
calculator_interfaces__srv__Calculator_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {calculator_interfaces__srv__Calculator_Request__TYPE_NAME, 44, 44},
      {calculator_interfaces__srv__Calculator_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char calculator_interfaces__srv__Calculator_Response__FIELD_NAME__result[] = "result";
static char calculator_interfaces__srv__Calculator_Response__FIELD_NAME__error[] = "error";

static rosidl_runtime_c__type_description__Field calculator_interfaces__srv__Calculator_Response__FIELDS[] = {
  {
    {calculator_interfaces__srv__Calculator_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {calculator_interfaces__srv__Calculator_Response__FIELD_NAME__error, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
calculator_interfaces__srv__Calculator_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {calculator_interfaces__srv__Calculator_Response__TYPE_NAME, 45, 45},
      {calculator_interfaces__srv__Calculator_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char calculator_interfaces__srv__Calculator_Event__FIELD_NAME__info[] = "info";
static char calculator_interfaces__srv__Calculator_Event__FIELD_NAME__request[] = "request";
static char calculator_interfaces__srv__Calculator_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field calculator_interfaces__srv__Calculator_Event__FIELDS[] = {
  {
    {calculator_interfaces__srv__Calculator_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {calculator_interfaces__srv__Calculator_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {calculator_interfaces__srv__Calculator_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {calculator_interfaces__srv__Calculator_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {calculator_interfaces__srv__Calculator_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription calculator_interfaces__srv__Calculator_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {calculator_interfaces__srv__Calculator_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {calculator_interfaces__srv__Calculator_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
calculator_interfaces__srv__Calculator_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {calculator_interfaces__srv__Calculator_Event__TYPE_NAME, 42, 42},
      {calculator_interfaces__srv__Calculator_Event__FIELDS, 3, 3},
    },
    {calculator_interfaces__srv__Calculator_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = calculator_interfaces__srv__Calculator_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = calculator_interfaces__srv__Calculator_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 a\n"
  "float64 b\n"
  "string operation\n"
  "---\n"
  "float64 result\n"
  "string error\n"
  "";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
calculator_interfaces__srv__Calculator__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {calculator_interfaces__srv__Calculator__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 70, 70},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
calculator_interfaces__srv__Calculator_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {calculator_interfaces__srv__Calculator_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
calculator_interfaces__srv__Calculator_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {calculator_interfaces__srv__Calculator_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
calculator_interfaces__srv__Calculator_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {calculator_interfaces__srv__Calculator_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
calculator_interfaces__srv__Calculator__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *calculator_interfaces__srv__Calculator__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *calculator_interfaces__srv__Calculator_Event__get_individual_type_description_source(NULL);
    sources[3] = *calculator_interfaces__srv__Calculator_Request__get_individual_type_description_source(NULL);
    sources[4] = *calculator_interfaces__srv__Calculator_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
calculator_interfaces__srv__Calculator_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *calculator_interfaces__srv__Calculator_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
calculator_interfaces__srv__Calculator_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *calculator_interfaces__srv__Calculator_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
calculator_interfaces__srv__Calculator_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *calculator_interfaces__srv__Calculator_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *calculator_interfaces__srv__Calculator_Request__get_individual_type_description_source(NULL);
    sources[3] = *calculator_interfaces__srv__Calculator_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
