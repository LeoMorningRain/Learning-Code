# 需求：订阅发布方发布的消息，并在终端输出
# 流程：
#     1.包含头文件
#     2.初始化ros2客户端
#     3.自定义节点类
#         3-1.创建订阅方
#         3-2.解析并输出数据
#     4.调用spin函数，并传入节点对象；
#     5.资源释放


import rclpy
from rclpy.node import Node
from base_interfaces_demo.msg import Student


class ListenerStu(Node):
    stu = Student()

    def __init__(self):
        #     3.自定义节点类
        super().__init__("listenerstu_node_py")
        #     3-1.创建订阅方
        self.subscription = self.create_subscription(
            Student, "chatter_stu", self.do_callback, 10
        )
        #     3-2.解析并输出数据

    def do_callback(self, stu):

        self.get_logger().info(
            "订阅的数据是:name=%s,age=%d,height=%.2f" % (stu.name, stu.age, stu.height)
        )


def main(args=None):
    rclpy.init(args=args)
    rclpy.spin(ListenerStu())
    rclpy.shutdown()


if __name__ == "__main__":
    main()
