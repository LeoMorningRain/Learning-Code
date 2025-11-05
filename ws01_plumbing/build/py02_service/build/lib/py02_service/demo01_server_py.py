# /*
# 需求：编写服务端，接收客户端发送的请求，提取其中两个整形数据，相加后将结果响应回客户端
# 步骤：
#   1.导包
#   2.初始化ROS2客户端
#   3.定义节点类
#     3.1创建服务端
#     3.2回调函数：处理请求数据并响应结果
#   4.调用spin函数，并传入节点对象；
#   5.资源释放

# */

import rclpy
from rclpy.node import Node
from base_interfaces_demo.srv import AddInts


class AddIntsServer(Node):

    def __init__(self):
        super().__init__("add_ints_server_pynode")
        self.get_logger().info("服务端建立py")
        self.sever = self.create_service(AddInts, "add_ints", self.add)
        # 回调函数

    def add(self, request, response):
        response.sum = request.num1 + request.num2
        self.get_logger().info("%d+%d=%d" % (request.num1, request.num2, response.sum))
        return response


def main(args=None):
    rclpy.init(args=args)
    rclpy.spin(AddIntsServer())
    rclpy.shutdown()


if __name__ == "__main__":
    main()


# import rclpy
# from rclpy.node import Node
# from base_interfaces_demo.srv import AddInts


# class AddIntsServer(Node):
#     def __init__(self):
#         super().__init__("add_ints_sever_node_py")
#         self.get_logger().info("服务端建立(py)!")
#         # 创建服务端
#         self.server = self.create_service(AddInts, "add_ints", self.add)
#         # 回调函数

#     def add(self, request, response):
#         response.sum = request.num1 + request.num2
#         self.get_logger().info("%d+%d=%d" % (request.num1, request.num2, response.sum))
#         return response


# def main(args=None):
#     rclpy.init(args=args)
#     rclpy.spin(AddIntsServer())
#     rclpy.shutdown()


# if __name__ == "__main__":
#     main()
