
#include "rclcpp/rclcpp.hpp"
#include <iostream>

class SingleDogNode : public rclcpp::Node
{
private:
    /* data */
public:
    SingleDogNode::SingleDogNode(std::string name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(), "DAJIAHAO%s", name.c_str());
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
