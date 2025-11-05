
/*
需求：编写服务端，接收客户端发送的请求，提取其中两个整形数据，相加后将结果响应回客户端
步骤：
  1.包含头文件
  2.初始化ROS2客户端
  3.定义节点类
    3.1创建服务端
    3.2回调函数：处理请求数据并响应结果
  4.调用spin函数，并传入节点对象指针；
  5.资源释放

*/
#include "rclcpp/rclcpp.hpp"
#include "base_interfaces_demo/srv/add_ints.hpp"

using base_interfaces_demo::srv::AddInts;
using std::placeholders::_1;
using std::placeholders::_2;
class AddIntsServer : public rclcpp::Node
{
private:
  /* data */
  rclcpp::Service<AddInts>::SharedPtr server_;
  void add(const AddInts::Request::SharedPtr req, const AddInts::Response::SharedPtr res)
  {
    res->sum = req->num1 + req->num2;
    RCLCPP_INFO(this->get_logger(), "%d+%d=%d", req->num1, req->num2, res->sum);
  };

public:
  AddIntsServer() : Node("add_ints_server_node_cpp")
  {
    RCLCPP_INFO(this->get_logger(), "服务端节点创建");
    server_ = this->create_service<AddInts>("add_ints", std::bind(&AddIntsServer::add, this, _1, _2));
  };
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  // rclcpp::spin(std::make_shared<AddIntsServer>());客户端不需要挂起
  // 创建服务端对象
  auto server = std::make_shared<AddIntsServer>();
  rclcpp::spin(server);
  // client1 = client2;
  rclcpp::shutdown();
  return 0;
}
