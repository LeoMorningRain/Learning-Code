/*
需求：创建客户端，组织数据并提交，然后处理响应结果（需要关注业务流程）。

流程：
    前提：main函数中需要判断提交的参数个数是否正确
    1.包含头文件
    2.初始化ROS2客户端
    3.自定义节点类
        3-1创建客户端
        3-2连接服务器（对于服务通信而言，如果客户端连接不到服务器，那么不能发送请求）
        3-3发送请求
    4.创建对象指针
        需要调用连接服务的函数，根据连接结果做下一步处理
        连接服务后，调用请求发送函数；
        再处理响应结果
    5.资源释放
*/
#include "rclcpp/rclcpp.hpp"
#include "base_interfaces_demo/srv/add_ints.hpp"

using base_interfaces_demo::srv::AddInts;
using namespace std::chrono_literals;

class AddIntsClient : public rclcpp::Node
{
private:
    /* data */
    rclcpp::Client<AddInts>::SharedPtr client_;

public:
    AddIntsClient() : Node("add_ints_server_node_cpp")
    {
        RCLCPP_INFO(this->get_logger(), "客户端节点创建");
        /*
        创建客户端；！
        模板：服务接口；
        参数：
            服务话题名称；
        返回值：服务对象
        */
        client_ = this->create_client<AddInts>("add_ints");
    };
    // 3 - 2连接服务器（对于服务通信而言，如果客户端连接不到服务器，那么不能发送请求）
    // 连接服务器成功返回true，否则false
    bool connect_server()
    {
        // client_->wait_for_service(1s);
        while (!client_->wait_for_service(1s)) // 循环以1s为超时时间连接服务器，直到连接到服务器才推出循环
        {
            // 循环等待过程中，对ctrl+c作出特殊处理，否则会无限打印
            // 1.判断ctrl+c按下；2.处理方式
            // 按下ctrl +c是结束ROS2程序，意味着要释放资源，比如需要关闭context，所以此时RCLCPP_INFO使用当前节点去getlogger，就会报错
            // rclcpp::getlogger不受context影响
            if (!rclcpp::ok())
            {
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "强行终止客户端");
                return false;
            }

            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "服务连接中！");
        }

        return true;
    }
    // 3-3发送请求
    // 发送请求函数---参数：两个整形数据，返回值：是提交请求后服务端的返回结果
    rclcpp::Client<AddInts>::FutureAndRequestId send_request(int num1, int num2)
    {
        // 组织请求数据
        // 发送
        auto request = std::make_shared<AddInts::Request>();
        request->num1 = num1;
        request->num2 = num2;
        return client_->async_send_request(request);
    }
};

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "请提交两个整形数字！"); // 直接通过rclcpp获取日志(错误)对象，“rclcpp”是日志管理器的名称
        return 1;
    }

    rclcpp::init(argc, argv);
    // 创建客户端对象
    auto client = std::make_shared<AddIntsClient>();
    // 调用客户端对象的连接服务器功能
    bool flag = client->connect_server();
    // 根据连接结果做进一步处理
    if (!flag)
    {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "服务器连接失败，程序推出");
        return 0;
    }
    // 调用请求函数，接收处理
    auto future = client->send_request(atoi(argv[1]), atoi(argv[2]));
    //
    if (rclcpp::spin_until_future_complete(client, future) == rclcpp::FutureReturnCode::SUCCESS)
    {
        RCLCPP_INFO(client->get_logger(), "响应成功！sum=%d", future.get()->sum);
        /* code */
    }
    else
    {
        RCLCPP_INFO(client->get_logger(), "响应失败！");
        /* code */
    }

    rclcpp::shutdown();
    return 0;
}