// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from calculator_interfaces:srv/Calculator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "calculator_interfaces/srv/calculator.hpp"


#ifndef CALCULATOR_INTERFACES__SRV__DETAIL__CALCULATOR__TRAITS_HPP_
#define CALCULATOR_INTERFACES__SRV__DETAIL__CALCULATOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "calculator_interfaces/srv/detail/calculator__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace calculator_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Calculator_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: operation
  {
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Calculator_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: operation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Calculator_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace calculator_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use calculator_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const calculator_interfaces::srv::Calculator_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  calculator_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use calculator_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const calculator_interfaces::srv::Calculator_Request & msg)
{
  return calculator_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<calculator_interfaces::srv::Calculator_Request>()
{
  return "calculator_interfaces::srv::Calculator_Request";
}

template<>
inline const char * name<calculator_interfaces::srv::Calculator_Request>()
{
  return "calculator_interfaces/srv/Calculator_Request";
}

template<>
struct has_fixed_size<calculator_interfaces::srv::Calculator_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<calculator_interfaces::srv::Calculator_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<calculator_interfaces::srv::Calculator_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace calculator_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Calculator_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Calculator_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Calculator_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace calculator_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use calculator_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const calculator_interfaces::srv::Calculator_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  calculator_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use calculator_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const calculator_interfaces::srv::Calculator_Response & msg)
{
  return calculator_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<calculator_interfaces::srv::Calculator_Response>()
{
  return "calculator_interfaces::srv::Calculator_Response";
}

template<>
inline const char * name<calculator_interfaces::srv::Calculator_Response>()
{
  return "calculator_interfaces/srv/Calculator_Response";
}

template<>
struct has_fixed_size<calculator_interfaces::srv::Calculator_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<calculator_interfaces::srv::Calculator_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<calculator_interfaces::srv::Calculator_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace calculator_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Calculator_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Calculator_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Calculator_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace calculator_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use calculator_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const calculator_interfaces::srv::Calculator_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  calculator_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use calculator_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const calculator_interfaces::srv::Calculator_Event & msg)
{
  return calculator_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<calculator_interfaces::srv::Calculator_Event>()
{
  return "calculator_interfaces::srv::Calculator_Event";
}

template<>
inline const char * name<calculator_interfaces::srv::Calculator_Event>()
{
  return "calculator_interfaces/srv/Calculator_Event";
}

template<>
struct has_fixed_size<calculator_interfaces::srv::Calculator_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<calculator_interfaces::srv::Calculator_Event>
  : std::integral_constant<bool, has_bounded_size<calculator_interfaces::srv::Calculator_Request>::value && has_bounded_size<calculator_interfaces::srv::Calculator_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<calculator_interfaces::srv::Calculator_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<calculator_interfaces::srv::Calculator>()
{
  return "calculator_interfaces::srv::Calculator";
}

template<>
inline const char * name<calculator_interfaces::srv::Calculator>()
{
  return "calculator_interfaces/srv/Calculator";
}

template<>
struct has_fixed_size<calculator_interfaces::srv::Calculator>
  : std::integral_constant<
    bool,
    has_fixed_size<calculator_interfaces::srv::Calculator_Request>::value &&
    has_fixed_size<calculator_interfaces::srv::Calculator_Response>::value
  >
{
};

template<>
struct has_bounded_size<calculator_interfaces::srv::Calculator>
  : std::integral_constant<
    bool,
    has_bounded_size<calculator_interfaces::srv::Calculator_Request>::value &&
    has_bounded_size<calculator_interfaces::srv::Calculator_Response>::value
  >
{
};

template<>
struct is_service<calculator_interfaces::srv::Calculator>
  : std::true_type
{
};

template<>
struct is_service_request<calculator_interfaces::srv::Calculator_Request>
  : std::true_type
{
};

template<>
struct is_service_response<calculator_interfaces::srv::Calculator_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CALCULATOR_INTERFACES__SRV__DETAIL__CALCULATOR__TRAITS_HPP_
