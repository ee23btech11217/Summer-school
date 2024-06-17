import sys
import rclpy
from rclpy.node import Node
from calculator_interfaces.srv import Calculator

class CalculatorClient(Node):

    def __init__(self):
        super().__init__('calculator_client')
        self.cli = self.create_client(Calculator, 'calculate')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        self.req = Calculator.Request()

    def send_request(self, a, b, operation):
        self.req.a = a
        self.req.b = b
        self.req.operation = operation
        self.future = self.cli.call_async(self.req)

def main(args=None):
    rclpy.init(args=args)
    
    if len(sys.argv) != 4:
        print("Usage: calculator_client <a> <b> <operation>")
        return

    a = float(sys.argv[1])
    b = float(sys.argv[2])
    operation = sys.argv[3]

    calculator_client = CalculatorClient()
    calculator_client.send_request(a, b, operation)

    while rclpy.ok():
        rclpy.spin_once(calculator_client)
        if calculator_client.future.done():
            try:
                response = calculator_client.future.result()
            except Exception as e:
                calculator_client.get_logger().info(f'Service call failed {str(e)}')
            else:
                if response.error:
                    calculator_client.get_logger().info(f'Error: {response.error}')
                else:
                    calculator_client.get_logger().info(f'Result: {response.result}')
            break

    calculator_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

