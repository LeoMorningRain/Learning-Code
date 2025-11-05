# 需求：客户端提交2个整形数据，并处理响应结果
# 流程：
# 前提：main函数中需要判断提交的参数个数是否正确
# 1.导包
# 2.初始化ROS2客户端
# 3.自定义节点类
#     3-1创建客户端
#     3-2连接服务器（对于服务通信而言，如果客户端连接不到服务器，那么不能发送请求）
#     3-3发送请求
# 4.创建对象
#     需要调用连接服务的函数，根据连接结果做下一步处理
#     连接服务后，调用请求发送函数；
#     再处理响应结果
# 5.资源释放


import rclpy
from rclpy.node import Node
from base_interfaces_demo.srv import AddInts
import sys
from rclpy.logging import get_logger


class AddIntsClient(Node):

    def __init__(self):
        super().__init__("add_ints_client_pynode")
        self.get_logger().info("客户端建立py")
        #     3-1创建客户端
        self.client = self.create_client(AddInts, "add_ints")
        #     3-2连接服务器（对于服务通信而言，如果客户端连接不到服务器，那么不能发送请求）
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("连接服务器中")

        #     3-3发送请求

    def send_request(self):
        request = AddInts.Request()
        request.num1 = int(sys.argv[1])
        request.num2 = int(sys.argv[2])
        self.future = self.client.call_async(request)


def main(args=None):
    # 校验操作
    if len(sys.argv) != 3:
        get_logger("rclpy").error("请提交两个整形数据！")
        return
    rclpy.init(args=args)
    # rclpy.spin(/* ClassName */())
    client = AddIntsClient()
    client.send_request()
    # 处理响应
    rclpy.spin_until_future_complete(client, client.future)
    try:
        response = client.future.result()
        client.get_logger().info("sum=%d" % response.sum)
    except:
        client.get_logger().info("服务端响应失败")

    rclpy.shutdown()


if __name__ == "__main__":
    main()


# import rclpy
# from rclpy.node import Node
# from rclpy.logging import get_logger
# from base_interfaces_demo.srv import AddInts
# import sys


# class AddintsClient(Node):
#     #   3.自定义节点类
#     def __init__(self):
#         super().__init__("add_ints_client_py")
#         self.get_logger().info("客户端建立！！(py)")
#         #     3-1创建客户端
#         self.client = self.create_client(
#             AddInts,
#             "add_ints",
#         )
#         #     3-2连接服务器
#         while not self.client.wait_for_service(timeout_sec=1.0):
#             self.get_logger().info("服务连接中")

#     #     3-3发送请求
#     def send_request(self):
#         request = AddInts.Request()
#         request.num1 = int(sys.argv[1])
#         request.num2 = int(sys.argv[2])
#         self.future = self.client.call_async(request)

#         # while not self.client.wait_for_service(timeout_sec=1.0):
#         #     if not rclpy.ok():
#         #         self.get_logger().error("Interruped while waiting for the server.")
#         #         return
#         #     else:
#         #         self.get_logger().info("Server not available, waiting again...")


# def main(args=None):
#     # 校验操作
#     if len(sys.argv) != 3:
#         get_logger("rclpy").error("请提交两个整形数据！")
#         return
#     rclpy.init(args=args)
#     client = AddintsClient()
#     # 发送请求
#     client.send_request()
#     # 处理响应
#     rclpy.spin_until_future_complete(client, client.future)
#     try:
#         response = client.future.result()
#         client.get_logger().info("响应结果: sum=%d" % response.sum)
#     except:
#         client.get_logger().error("服务响应失败！")
#     # rclpy.spin(AddintsClient())客户端发送一次就结束了
#     rclpy.shutdown()


# if __name__ == "__main__":
#     main()
