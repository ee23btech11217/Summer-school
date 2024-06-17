
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
import random

class TemperaturePublisher(Node):

    def __init__(self):
        super().__init__('temperature_publisher')
        self.declare_parameter('publish_rate', 1.0)
        publish_rate = self.get_parameter('publish_rate').value
        self.publisher_ = self.create_publisher(Float64, 'temperature', 10)
        self.timer = self.create_timer(1.0 / publish_rate, self.publish_temperature)
    
    def publish_temperature(self):
        temperature = random.gaussian(25.0, 2.0)
        msg = Float64()
        msg.data = temperature
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: {temperature:.2f}')

def main(args=None):
    rclpy.init(args=args)
    node = TemperaturePublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
