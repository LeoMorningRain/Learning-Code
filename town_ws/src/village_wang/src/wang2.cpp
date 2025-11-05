#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs//msg/u_int32.hpp"
#include <iostream>

using std::placeholders::_1;
using std::placeholders::_2;

class SingleDogNode : public rclcpp::Node
{
private:
    // 3.声明订阅者和发布者
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_novel;
    rclcpp::Publisher<std_msgs::msg::UInt32>::SharedPtr pub_money;
    // 2.编写回调函数
    void novel_callback(const std_msgs::msg::String::SharedPtr novels)
    {
        std_msgs::msg::UInt32 money;
        money.data = 10;
        // 发布钱
        pub_money->publish(money);
        // 4.编写回调处理逻辑
        RCLCPP_INFO(this->get_logger(), "already read%s", novels->data.c_str());
    }

public:
    SingleDogNode(std::string name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(), "DAJIAHAO%s", name.c_str());
        sub_novel = this->create_subscription<std_msgs::msg::String>("sex_girl", 10, std::bind(&SingleDogNode::novel_callback, this, _1));
        pub_money = this->create_publisher<std_msgs::msg::UInt32>("sex_girl_money", 10);
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SingleDogNode>("wang2");
    RCLCPP_INFO(node->get_logger(), "hello.");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
