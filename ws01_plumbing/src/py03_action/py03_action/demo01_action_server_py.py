# 需求：编写动作服务端，需要解析客户端提交的数字，遍历该数字并累加求和，最终结果响应回客户端
#       且响应过程中需要生成连续反馈。
# 分析：
#     1.创建动作服务端对象;
#     2.处理提交的目标值;
#     3.生成连续反馈;
#     4.响应最终结果;
#     5.处理取消请求;
# 流程：
#     1.包含头文件
#     2.初始化ROS2客户端
#     3.自定义节点类
#       3-1.创建动作服务端对象;
#       3-2.处理提交的目标值（回调函数）;---默认实现
#       3-3.生成连续反馈和最终响应（回调函数）;
#       3-4.处理取消请求（回调函数）---默认实现
#     4.调用spin函数，并传入节点对象;
#     5.资源释放

import rclpy
import rclpy.action
import time
from rclpy.node import Node
from rclpy.action import ActionServer
from base_interfaces_demo.action import Progress


class ProgressActionServer(Node):
    def __init__(self):
        super().__init__("progress_action_server_node_py")
        self.get_logger().info("动作通信服务端py创建")
        # 3-1.创建动作服务端对象;
        self.server = ActionServer(
            self,
            Progress,
            "get_sum",
            # callback_group=ReentrantCallbackGroup(),
            execute_callback=self.execute_callback,
        )
        #  3-3.生成连续反馈和最终响应（回调函数）;

    def execute_callback(self, goal_handle):
        # 1.生成连续反馈
        # 首先要获取目标值，然后遍历，遍历中进行累加，且每循环一次就计算进度，并作为连续反馈发布
        num = goal_handle.request.num
        sum = 0
        for i in range(1, num + 1):  # 左闭右开
            sum += i
            feedback = Progress.Feedback()
            feedback.progress = i / num
            goal_handle.publish_feedback(feedback)
            self.get_logger().info("连续反馈:%.2f" % feedback.progress)
            time.sleep(1.0)

        # 2.响应最终结果
        goal_handle.succeed()
        result = Progress.Result()
        result.sum = sum
        self.get_logger().info("计算结果:%d" % result.sum)
        return result


def main(args=None):
    rclpy.init(args=args)
    rclpy.spin(ProgressActionServer())
    rclpy.shutdown()


if __name__ == "__main__":
    main()
