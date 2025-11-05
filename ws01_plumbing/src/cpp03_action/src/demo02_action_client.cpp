/*
需求：编写动作客户端，可以发送一个整形数据到服务端，并处理服务端的连续反馈和最终响应结果.
      且响应过程中需要生成连续反馈。
分析：
    前提：可以解析终端下动态传入的参数。
    1.创建动作服务端对象;
    2.处理提交的目标值;
    3.生成连续反馈;
    4.响应最终结果;
    5.处理取消请求;
流程：
    1.包含头文件
    2.初始化ROS2客户端
    3.自定义节点类
      3-1.创建动作客户端对象;
      3-2.发送请求;
      3-3.处理关于目标值的服务端响应（回调函数）;
      3-4.处理连续反馈（回调函数）;
      3-5.处理最终响应结果（回调函数）;
    4.调用spin函数，并传入节点对象指针;
    5.资源释放
*/
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "base_interfaces_demo/action/progress.hpp"

using base_interfaces_demo::action::Progress;
using namespace std::chrono_literals;

class ProgressActionClient : public rclcpp::Node
{
private:
    rclcpp_action::Client<Progress>::SharedPtr client_;

public:
    ProgressActionClient() : Node("progress_action_client_node_cpp")
    {
        RCLCPP_INFO(this->get_logger(), "action客户端创建!");
        // 3 - 1.创建动作客户端对象;
        client_ = rclcpp_action::create_client<Progress>(this, "get_sum");
        //  template <typename ActionT, typename NodeT>
        //  typename Client<ActionT>::SharedPtr
        //  create_client(
        //      NodeT node,
        //      const std::string &name,
        //      rclcpp::CallbackGroup::SharedPtr group = nullptr,
        //      const rcl_action_client_options_t &options = rcl_action_client_get_default_options())
        //  {
        //      return rclcpp_action::create_client<ActionT>(
        //          node->get_node_base_interface(),
        //          node->get_node_graph_interface(),
        //          node->get_node_logging_interface(),
        //          node->get_node_waitables_interface(),
        //          name,
        //          group,
        //          options);
        //  }
        // 3 - 2.发送请求;
    }
    void send_goal(int num)
    {
        // 1.需要确保链接到服务端
        if (!client_->wait_for_action_server(10s))
        {
            RCLCPP_ERROR(this->get_logger(), "服务链接失败!");
        }
        // 2.发送具体请求
        using std::placeholders::_1;
        using std::placeholders::_2;
        auto goal = Progress ::Goal();
        goal.num = num;
        auto send_goal_options =
            rclcpp_action::Client<Progress>::SendGoalOptions();
        send_goal_options.goal_response_callback =
            std::bind(&ProgressActionClient::goal_response_callback, this, _1);
        send_goal_options.feedback_callback =
            std::bind(&ProgressActionClient::feedback_callback, this, _1, _2);
        send_goal_options.result_callback =
            std::bind(&ProgressActionClient::result_callback, this, _1);
        RCLCPP_INFO(this->get_logger(), "Sending goal");
        auto future = client_->async_send_goal(goal, send_goal_options);
    }

    // 3 - 3.处理关于目标值的服务端响应（回调函数）;
    // using GoalHandle = ClientGoalHandle<ActionT>;
    // using GoalResponseCallback = std::function<void(typename GoalHandle::SharedPtr)>;
    void goal_response_callback(rclcpp_action::ClientGoalHandle<Progress>::SharedPtr goal_handle)
    {
        if (!goal_handle)
        {
            RCLCPP_INFO(this->get_logger(), "目标请求被服务端拒绝！");
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "目标处理中！");
        }
    }
    // 3 - 4.处理连续反馈（回调函数）;
    // using GoalHandle = ClientGoalHandle<ActionT>;
    // using FeedbackCallback = typename GoalHandle::FeedbackCallback;
    // using FeedbackCallback =
    //     std::function<void(
    //         typename ClientGoalHandle<ActionT>::SharedPtr,
    //         const std::shared_ptr<const Feedback>)>;
    void feedback_callback(rclcpp_action::ClientGoalHandle<Progress>::SharedPtr goal_handle, const std::shared_ptr<const Progress::Feedback> feedback)
    {
        (void)goal_handle;
        double progress = feedback->progress;
        int pro = (int)(progress * 100);
        RCLCPP_INFO(this->get_logger(), "当前进度：%d%%", pro);
    }
    // 3 - 5.处理最终响应结果（回调函数）;
    // using GoalHandle = ClientGoalHandle<ActionT>;
    // using ResultCallback = typename GoalHandle::ResultCallback;
    // using ResultCallback = std::function<void(const WrappedResult &result)>;
    // struct WrappedResult
    // {
    //     /// The unique identifier of the goal
    //     GoalUUID goal_id;
    //     /// A status to indicate if the goal was canceled, aborted, or suceeded
    //     ResultCode code;
    //     /// User defined fields sent back with an action
    //     typename ActionT::Result::SharedPtr result;
    // };
    void result_callback(const rclcpp_action::ClientGoalHandle<Progress>::WrappedResult &result)
    {
        // result.code
        // 通过状态码判断最终结果状态
        if (result.code == rclcpp_action::ResultCode::SUCCEEDED)
        {
            RCLCPP_INFO(this->get_logger(), "最终结果：%d", result.result->sum);
        }
        else if (result.code == rclcpp_action::ResultCode::ABORTED)
        {
            RCLCPP_INFO(this->get_logger(), "被中断！");
        }
        else if (result.code == rclcpp_action::ResultCode::CANCELED)
        {
            RCLCPP_INFO(this->get_logger(), "被取消！");
        }
        else if (result.code == rclcpp_action::ResultCode::UNKNOWN)
        {
            RCLCPP_INFO(this->get_logger(), "未知异常！");
        }
    }
};

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "请提交一个整形数据！");
        return 1;
        /* code */
    }

    rclcpp::init(argc, argv);
    auto node = std::make_shared<ProgressActionClient>();
    node->send_goal(atoi(argv[1]));
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}