# Todo:以某个固定频率发送学生信息
# 流程：
# 1.导包
# 2.初始化ROS2客户端
# 3.自定义节点类；
#   3-1.创建消息发布方
#   3-2.创建定时器
#   3-3.组织并发布消息
# 4.调用spin函数，传入自定义类对象
# 5.释放资源

import rclpy

from rclpy.node import Node
from std_msgs.msg import String


# 3.自定义节点类；
class Talker(Node):
    def __init__(self):
        super().__init__("talker_node_py")
        self.get_logger().info("发布方创建了(python)!")
        # create a counter
        self.count = 0
        #   3-1.创建消息发布方
        """
            para:
            1.topic type
            2.topic name
            3.QOS
        """
        self.publisher = self.create_publisher(String, "chatter", 10)
        #   3-2.创建定时器
        """
        参数：
            1.时间间隔
            2.回调函数
        返回值：定时器对象

        """
        self.timer = self.create_timer(1.0, self.on_timer)

    def on_timer(self):
        #   3-3.组织并发布消息
        message = String()
        message.data = "hello world(python)!" + str(self.count)
        self.publisher.publish(message)
        self.count += 1
        self.get_logger().info("发布的数据：%s" % message.data)


def main(args=None):
    rclpy.init(args=args)
    rclpy.spin(Talker())
    rclpy.shutdown()
