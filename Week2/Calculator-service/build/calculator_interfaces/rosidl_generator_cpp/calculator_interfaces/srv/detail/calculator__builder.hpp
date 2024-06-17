// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from calculator_interfaces:srv/Calculator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "calculator_interfaces/srv/calculator.hpp"


#ifndef CALCULATOR_INTERFACES__SRV__DETAIL__CALCULATOR__BUILDER_HPP_
#define CALCULATOR_INTERFACES__SRV__DETAIL__CALCULATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "calculator_interfaces/srv/detail/calculator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace calculator_interfaces
{

namespace srv
{

namespace builder
{

class Init_Calculator_Request_operation
{
public:
  explicit Init_Calculator_Request_operation(::calculator_interfaces::srv::Calculator_Request & msg)
  : msg_(msg)
  {}
  ::calculator_interfaces::srv::Calculator_Request operation(::calculator_interfaces::srv::Calculator_Request::_operation_type arg)
  {
    msg_.operation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::calculator_interfaces::srv::Calculator_Request msg_;
};

class Init_Calculator_Request_b
{
public:
  explicit Init_Calculator_Request_b(::calculator_interfaces::srv::Calculator_Request & msg)
  : msg_(msg)
  {}
  Init_Calculator_Request_operation b(::calculator_interfaces::srv::Calculator_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Calculator_Request_operation(msg_);
  }

private:
  ::calculator_interfaces::srv::Calculator_Request msg_;
};

class Init_Calculator_Request_a
{
public:
  Init_Calculator_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Calculator_Request_b a(::calculator_interfaces::srv::Calculator_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Calculator_Request_b(msg_);
  }

private:
  ::calculator_interfaces::srv::Calculator_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::calculator_interfaces::srv::Calculator_Request>()
{
  return calculator_interfaces::srv::builder::Init_Calculator_Request_a();
}

}  // namespace calculator_interfaces


namespace calculator_interfaces
{

namespace srv
{

namespace builder
{

class Init_Calculator_Response_error
{
public:
  explicit Init_Calculator_Response_error(::calculator_interfaces::srv::Calculator_Response & msg)
  : msg_(msg)
  {}
  ::calculator_interfaces::srv::Calculator_Response error(::calculator_interfaces::srv::Calculator_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::calculator_interfaces::srv::Calculator_Response msg_;
};

class Init_Calculator_Response_result
{
public:
  Init_Calculator_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Calculator_Response_error result(::calculator_interfaces::srv::Calculator_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_Calculator_Response_error(msg_);
  }

private:
  ::calculator_interfaces::srv::Calculator_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::calculator_interfaces::srv::Calculator_Response>()
{
  return calculator_interfaces::srv::builder::Init_Calculator_Response_result();
}

}  // namespace calculator_interfaces


namespace calculator_interfaces
{

namespace srv
{

namespace builder
{

class Init_Calculator_Event_response
{
public:
  explicit Init_Calculator_Event_response(::calculator_interfaces::srv::Calculator_Event & msg)
  : msg_(msg)
  {}
  ::calculator_interfaces::srv::Calculator_Event response(::calculator_interfaces::srv::Calculator_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::calculator_interfaces::srv::Calculator_Event msg_;
};

class Init_Calculator_Event_request
{
public:
  explicit Init_Calculator_Event_request(::calculator_interfaces::srv::Calculator_Event & msg)
  : msg_(msg)
  {}
  Init_Calculator_Event_response request(::calculator_interfaces::srv::Calculator_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Calculator_Event_response(msg_);
  }

private:
  ::calculator_interfaces::srv::Calculator_Event msg_;
};

class Init_Calculator_Event_info
{
public:
  Init_Calculator_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Calculator_Event_request info(::calculator_interfaces::srv::Calculator_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Calculator_Event_request(msg_);
  }

private:
  ::calculator_interfaces::srv::Calculator_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::calculator_interfaces::srv::Calculator_Event>()
{
  return calculator_interfaces::srv::builder::Init_Calculator_Event_info();
}

}  // namespace calculator_interfaces

#endif  // CALCULATOR_INTERFACES__SRV__DETAIL__CALCULATOR__BUILDER_HPP_
