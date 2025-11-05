import rclpy
from rclpy.node import Node

#!/usr/bin/env python3

import rclpy

from rclpy.node import Node


class WriterNode(Node):
    def __init__(self, name):
        super().__init__(name)
        self.get_logger().info("hello,i am%s." % name)


def main(args=None):
    rclpy.init(args=args)
    li4_node = WriterNode("li4")
    # li4_node.get_logger().info("hello,i am li4.")
    rclpy.spin(li4_node)
    rclpy.shutdown()
