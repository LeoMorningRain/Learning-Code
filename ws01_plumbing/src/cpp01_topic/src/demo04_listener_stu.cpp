/*
需求：订阅发布方发布的消息，并在终端输出
流程：
    1.包含头文件
    2.初始化ros2客户端
    3.自定义节点类
        3-1.创建订阅方
        3-2.解析并输出数据
    4.调用spin函数，并传入节点对象指针；
    5.资源释放
*/

#include "rclcpp/rclcpp.hpp"
#include "base_interfaces_demo/msg/student.hpp"

using base_interfaces_demo::msg::Student;

class ListenerStu : public rclcpp::Node
{

private:
    /* data */
    rclcpp::Subscription<Student>::SharedPtr subscription_;
    void db_callback(const Student &stu)
    {
        RCLCPP_INFO(this->get_logger(), "收到的信息是name=%s,age=%d,height=%.2f", stu.name.c_str(), stu.age, stu.height);
    }

public:
    ListenerStu() : Node("listenerstu_node_cpp")
    {
        subscription_ = this->create_subscription<Student>("chatter_stu", 10, std::bind(&ListenerStu::db_callback, this, std::placeholders::_1));
    };
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ListenerStu>());
    rclcpp::shutdown();
    return 0;
}
