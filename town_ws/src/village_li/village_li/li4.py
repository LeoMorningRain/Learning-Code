import rclpy
from rclpy.node import Node
from std_msgs.msg import String  # 导入消息类型
from std_msgs.msg import String, UInt32

#!/usr/bin/env python3
"""
导入消息类型

声明并创建发布者

编写发布逻辑发布数据
"""
import rclpy

from rclpy.node import Node


class WriterNode(Node):
    def __init__(self, name):
        super().__init__(name)
        self.get_logger().info("hello,i am %s." % name)
        self.pub_novel = self.create_publisher(
            String, "sex_girl", 10
        )  # 声明并创建发布者
        self.count = 0
        self.timer_period = 5
        self.timer = self.create_timer(self.timer_period, self.timer_callback)
        self.account = 80
        self.sub_money = self.create_subscription(
            UInt32, "sex_girl_money", self.recv_money_callback, 10
        )

    def timer_callback(self):
        msg = String()
        msg.data = "第%d回:艳湖%d次偶遇胡艳娘" % (self.count, self.count)
        self.pub_novel.publish(msg)
        self.get_logger().info("发布了一个章节的小说，内容是：%s" % msg.data)
        self.count += 1

    def recv_money_callback(self, money):
        self.account += money.data
        self.get_logger().info(
            "收到了%d的稿费，现在账户里有%d的钱" % (money.data, self.account)
        )


def main(args=None):
    # 入口函数
    # 编写ROS2节点的一般步骤：
    # 1.导入库文件；
    # 2.初始化客户端库；
    # 3.新建节点对象；
    # 4.spin循环节点；
    # 5.关闭客户端库

    rclpy.init(args=args)
    li5_node = WriterNode("li4")
    rclpy.spin(li5_node)
    rclpy.shutdown()
