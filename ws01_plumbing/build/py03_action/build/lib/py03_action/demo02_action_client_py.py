# 需求：订阅发布方发布的消息，并在终端输出
# 流程：
#     1.导包
#     2.初始化ros2客户端
#     3.自定义节点类
#     4.调用spin函数，并传入节点对象；
#     5.资源释放
import rclpy
from rclpy.node import Node


class ProgressActionClient(Node):
    def __init__(self):
        super().__init__("progress_action_client_node_py")
        self.get_logger().info("动作通信客户端py创建")


def main(args=None):
    rclpy.init(args=args)
    rclpy.spin(ProgressActionClient())
    rclpy.shutdown()


if __name__ == "__main__":
    main()
