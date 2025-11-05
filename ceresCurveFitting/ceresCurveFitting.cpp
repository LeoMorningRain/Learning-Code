//
// Created by Leo on 23-10-07.
//

#include <iostream>
#include <opencv2/core/core.hpp>
#include <ceres/ceres.h>
#include <chrono>

using namespace std;
using namespace ceres;
// 需要加强的知识点
// C++结构体，bool函数，指针的含义和用法****
// 代码的熟练度

// CostFunctionModel
struct CeresCurveFittingCost
{
    CeresCurveFittingCost(double x, double y) : x_(x), y_(y) {}
    const double x_, y_;
    // 残差的计算
    template <typename T>
    bool operator()(
        const T *const abc, T *residual) const
    {
        residual[0] = y_ - exp(abc[0] * x_ * x_ + abc[1] * x_ + abc[2]);
        return true;
    }
};
//
int main(int argc, char **argv)
{
    double ar = 1.0, br = 2.0, cr = 1.0;  // 真实参数值
    double ae = 2.0, be = -1.0, ce = 5.0; // 估计参数值
    int N = 100;                          // 数据点
    double w_sigma = 1.0;                 // 噪声Sigma值
    double inv_sigma = 1.0 / w_sigma;
    cv::RNG rng;                   // OpenCV随机数产生器
    vector<double> x_data, y_data; // 数据
    for (int i = 0; i < N; i++)
    {
        double x = i / 100.0;

        x_data.push_back(x);
        y_data.push_back(ar * x * x + br * x + cr + rng.gaussian(w_sigma * w_sigma));
    }
    double abc[3] = {ae, be, ce};

    // 构建最小二乘问题
    Problem problem;
    for (int i = 0; i < N; i++)
    {
        problem.AddResidualBlock(
            new AutoDiffCostFunction<CeresCurveFittingCost, 1, 3>(
                new CeresCurveFittingCost(x_data[i], y_data[i])),
            nullptr,
            abc);
    }
    // Run the solver!
    // 配置求解器
    Solver::Options options;
    chrono::steady_clock::time_point t1 = chrono::steady_clock::now();
    options.linear_solver_type = DENSE_NORMAL_CHOLESKY;
    options.minimizer_progress_to_stdout = true;
    Solver::Summary summary;
    Solve(options, &problem, &summary);
    chrono::steady_clock::time_point t2 = chrono::steady_clock::now();
    chrono::duration<double> time_used = chrono::duration_cast<chrono::duration<double>>(t2 - t1);
    cout << "solve time cost = " << time_used.count() << " seconds. " << endl;

    // 输出结果
    cout << summary.BriefReport() << endl;
    cout << "estimated a,b,c = ";
    for (auto a : abc)
        cout << a << " ";
    cout << endl;

    return 0;
}
