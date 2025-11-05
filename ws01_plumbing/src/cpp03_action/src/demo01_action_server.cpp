/*
需求：编写动作服务端，需要解析客户端提交的数字，遍历该数字并累加求和，最终结果响应回客户端
      且响应过程中需要生成连续反馈。
分析：
    1.创建动作服务端对象;
    2.处理提交的目标值;
    3.生成连续反馈;
    4.响应最终结果;
    5.处理取消请求;
流程：
    1.包含头文件
    2.初始化ROS2客户端
    3.自定义节点类
      3-1.创建动作服务端对象;
      3-2.处理提交的目标值（回调函数）;
      3-3.生成连续反馈和最终响应（回调函数）;
      3-4.处理取消请求（回调函数）
    4.调用spin函数，并传入节点对象指针;
    5.资源释放
*/

#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "base_interfaces_demo/action/progress.hpp"

using base_interfaces_demo::action::Progress;
using std::placeholders::_1;
using std::placeholders::_2;

// 3.自定义节点类
class ProgressActionServer : public rclcpp::Node
{
private:
  rclcpp_action::Server<Progress>::SharedPtr server_;
  // 3 - 2.处理提交的目标值（回调函数）;
  rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID &uuid, std::shared_ptr<const Progress::Goal> goal)
  {
    // 业务逻辑：提交的数字是否大于1，是就接收，否则拒绝
    if (goal->num <= 1)
    {
      RCLCPP_INFO(this->get_logger(), "提交的目标值必须大于1");
      return rclcpp_action::GoalResponse::REJECT;
    }
    RCLCPP_INFO(this->get_logger(), "提交的目标合法");
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }
  // 3 - 3.处理取消请求（回调函数）
  rclcpp_action::CancelResponse handle_cancel(std::shared_ptr<rclcpp_action::ServerGoalHandle<Progress>> goal_handle)
  {
    (void)goal_handle;
    RCLCPP_INFO(this->get_logger(), "接收到任务取消请求");
    return rclcpp_action::CancelResponse::ACCEPT;
  }
  // 3 - 4.生成连续反馈和最终响应（回调函数）;
  void execute(std::shared_ptr<rclcpp_action::ServerGoalHandle<Progress>> goal_handle)
  {
    // 1.生成连续反馈返回给客户端

    // 首先要获取目标值，然后遍历，遍历中进行累加，且每循环一次就计算进度，并作为连续反馈发布
    int num = goal_handle->get_goal()->num;
    int sum = 0;
    auto feedback = std::make_shared<Progress::Feedback>();
    auto result = std::make_shared<Progress::Result>();
    // 设置休眠
    rclcpp::Rate rate(1.0);
    for (int i = 1; i <= num; i++)
    {
      sum += i;
      double progress = i / (double)num; // 计算进度
      feedback->progress = progress;

      goal_handle->publish_feedback(feedback);
      RCLCPP_INFO(this->get_logger(), "连续反馈中,进度：%.2f", progress);

      // 判断是否接收到了取消请求
      // 如果接收到了，终止程序，return
      if (goal_handle->is_canceling())
      {
        result->sum = sum;
        goal_handle->canceled(result);
        RCLCPP_INFO(this->get_logger(), "任务被取消了！");
        return;
        /* code */
      }
      rate.sleep();
    }

    // 2.生成最终响应结果
    if (rclcpp::ok())
    {

      result->sum = sum;
      goal_handle->succeed(result);
      RCLCPP_INFO(this->get_logger(), "最终结果是：%d", sum);
    }
  }
  void handle_accepted(std::shared_ptr<rclcpp_action::ServerGoalHandle<Progress>> goal_handle)
  {
    // 新建子线程，处理耗时的主逻辑实现
    std::thread(std::bind(&ProgressActionServer::execute, this, goal_handle)).detach();
  }

public:
  ProgressActionServer() : Node("progress_action_server_node_cpp")
  {
    RCLCPP_INFO(this->get_logger(), "action服务端创建!");
    // 3 - 1.创建动作服务端对象;
    server_ = rclcpp_action::create_server<Progress>(
        this,
        "get_sum",
        // using GoalCallback = std::function<GoalResponse(
        //     const GoalUUID &, std::shared_ptr<const typename ActionT::Goal>)>;
        std::bind(&ProgressActionServer::handle_goal, this, _1, _2),
        // using CancelCallback = std::function<CancelResponse(std::shared_ptr<ServerGoalHandle<ActionT>>)>;
        std::bind(&ProgressActionServer::handle_cancel, this, _1),
        // using AcceptedCallback = std::function<void(std::shared_ptr<ServerGoalHandle<ActionT>>)>;
        std::bind(&ProgressActionServer::handle_accepted, this, _1)
        // /// Signature of a callback that accepts or rejects requests to cancel a goal.
        // /// Signature of a callback that is used to notify when the goal has been accepted.

    );
    // template <typename ActionT, typename NodeT>
    // typename Server<ActionT>::SharedPtr
    // create_server(
    //     NodeT node,
    //     const std::string &name,
    //     typename Server<ActionT>::GoalCallback handle_goal,
    //     typename Server<ActionT>::CancelCallback handle_cancel,
    //     typename Server<ActionT>::AcceptedCallback handle_accepted,
    //     const rcl_action_server_options_t &options = rcl_action_server_get_default_options(),
    //     rclcpp::CallbackGroup::SharedPtr group = nullptr)
  };
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ProgressActionServer>());
  rclcpp::shutdown();
  return 0;
}
