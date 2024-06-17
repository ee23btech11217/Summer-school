import rclpy
from rclpy.node import Node
from calculator_interfaces.srv import Calculator

class CalculatorServer(Node):

    def __init__(self):
        super().__init__('calculator_server')
        self.srv = self.create_service(Calculator, 'calculate', self.calculate_callback)
        self.get_logger().info('Calculator Service Server is ready.')

    def calculate_callback(self, request, response):
        a = request.a
        b = request.b
        operation = request.operation
        response.error = ''
        
        try:
            if operation == 'add':
                response.result = a + b
            elif operation == 'subtract':
                response.result = a - b
            elif operation == 'multiply':
                response.result = a * b
            elif operation == 'divide':
                if b != 0:
                    response.result = a / b
                else:
                    response.error = 'Division by zero error.'
            else:
                response.error = 'Invalid operation. Supported operations: add, subtract, multiply, divide.'
        except Exception as e:
            response.error = str(e)
        
        return response

def main(args=None):
    rclpy.init(args=args)
    calculator_server = CalculatorServer()
    rclpy.spin(calculator_server)
    calculator_server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

