// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from calculator_interfaces:srv/Calculator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "calculator_interfaces/srv/calculator.hpp"


#ifndef CALCULATOR_INTERFACES__SRV__DETAIL__CALCULATOR__STRUCT_HPP_
#define CALCULATOR_INTERFACES__SRV__DETAIL__CALCULATOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__calculator_interfaces__srv__Calculator_Request __attribute__((deprecated))
#else
# define DEPRECATED__calculator_interfaces__srv__Calculator_Request __declspec(deprecated)
#endif

namespace calculator_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Calculator_Request_
{
  using Type = Calculator_Request_<ContainerAllocator>;

  explicit Calculator_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
      this->operation = "";
    }
  }

  explicit Calculator_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : operation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
      this->operation = "";
    }
  }

  // field types and members
  using _a_type =
    double;
  _a_type a;
  using _b_type =
    double;
  _b_type b;
  using _operation_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _operation_type operation;

  // setters for named parameter idiom
  Type & set__a(
    const double & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const double & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__operation(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->operation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    calculator_interfaces::srv::Calculator_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const calculator_interfaces::srv::Calculator_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<calculator_interfaces::srv::Calculator_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<calculator_interfaces::srv::Calculator_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      calculator_interfaces::srv::Calculator_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<calculator_interfaces::srv::Calculator_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      calculator_interfaces::srv::Calculator_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<calculator_interfaces::srv::Calculator_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<calculator_interfaces::srv::Calculator_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<calculator_interfaces::srv::Calculator_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__calculator_interfaces__srv__Calculator_Request
    std::shared_ptr<calculator_interfaces::srv::Calculator_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__calculator_interfaces__srv__Calculator_Request
    std::shared_ptr<calculator_interfaces::srv::Calculator_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calculator_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->operation != other.operation) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calculator_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calculator_Request_

// alias to use template instance with default allocator
using Calculator_Request =
  calculator_interfaces::srv::Calculator_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace calculator_interfaces


#ifndef _WIN32
# define DEPRECATED__calculator_interfaces__srv__Calculator_Response __attribute__((deprecated))
#else
# define DEPRECATED__calculator_interfaces__srv__Calculator_Response __declspec(deprecated)
#endif

namespace calculator_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Calculator_Response_
{
  using Type = Calculator_Response_<ContainerAllocator>;

  explicit Calculator_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0.0;
      this->error = "";
    }
  }

  explicit Calculator_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0.0;
      this->error = "";
    }
  }

  // field types and members
  using _result_type =
    double;
  _result_type result;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__result(
    const double & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    calculator_interfaces::srv::Calculator_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const calculator_interfaces::srv::Calculator_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<calculator_interfaces::srv::Calculator_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<calculator_interfaces::srv::Calculator_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      calculator_interfaces::srv::Calculator_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<calculator_interfaces::srv::Calculator_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      calculator_interfaces::srv::Calculator_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<calculator_interfaces::srv::Calculator_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<calculator_interfaces::srv::Calculator_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<calculator_interfaces::srv::Calculator_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__calculator_interfaces__srv__Calculator_Response
    std::shared_ptr<calculator_interfaces::srv::Calculator_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__calculator_interfaces__srv__Calculator_Response
    std::shared_ptr<calculator_interfaces::srv::Calculator_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calculator_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calculator_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calculator_Response_

// alias to use template instance with default allocator
using Calculator_Response =
  calculator_interfaces::srv::Calculator_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace calculator_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__calculator_interfaces__srv__Calculator_Event __attribute__((deprecated))
#else
# define DEPRECATED__calculator_interfaces__srv__Calculator_Event __declspec(deprecated)
#endif

namespace calculator_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Calculator_Event_
{
  using Type = Calculator_Event_<ContainerAllocator>;

  explicit Calculator_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Calculator_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<calculator_interfaces::srv::Calculator_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<calculator_interfaces::srv::Calculator_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<calculator_interfaces::srv::Calculator_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<calculator_interfaces::srv::Calculator_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<calculator_interfaces::srv::Calculator_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<calculator_interfaces::srv::Calculator_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<calculator_interfaces::srv::Calculator_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<calculator_interfaces::srv::Calculator_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    calculator_interfaces::srv::Calculator_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const calculator_interfaces::srv::Calculator_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<calculator_interfaces::srv::Calculator_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<calculator_interfaces::srv::Calculator_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      calculator_interfaces::srv::Calculator_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<calculator_interfaces::srv::Calculator_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      calculator_interfaces::srv::Calculator_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<calculator_interfaces::srv::Calculator_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<calculator_interfaces::srv::Calculator_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<calculator_interfaces::srv::Calculator_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__calculator_interfaces__srv__Calculator_Event
    std::shared_ptr<calculator_interfaces::srv::Calculator_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__calculator_interfaces__srv__Calculator_Event
    std::shared_ptr<calculator_interfaces::srv::Calculator_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calculator_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calculator_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calculator_Event_

// alias to use template instance with default allocator
using Calculator_Event =
  calculator_interfaces::srv::Calculator_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace calculator_interfaces

namespace calculator_interfaces
{

namespace srv
{

struct Calculator
{
  using Request = calculator_interfaces::srv::Calculator_Request;
  using Response = calculator_interfaces::srv::Calculator_Response;
  using Event = calculator_interfaces::srv::Calculator_Event;
};

}  // namespace srv

}  // namespace calculator_interfaces

#endif  // CALCULATOR_INTERFACES__SRV__DETAIL__CALCULATOR__STRUCT_HPP_
