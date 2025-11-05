#include <ceres/ceres.h>
#include <iostream>
#include <Eigen/Dense>
#include <opencv2/core/core.hpp>
#include <Eigen/Core>
#include "sophus/se3.hpp"
#include <g2o/core/g2o_core_api.h>
#include <cmath>

using namespace std;
using namespace Eigen;

int main(int argc, char **argv)
{
    double ar = 1.0, br = 2.0, cr = 1.0;  // 真实参数值
    double ae = 3.0, be = -2.0, ce = 5.0; // 估计参数值
    int N = 100;                          // 数据点
    double w_sigma = 1.0;                 // 噪声Sigma值
    double inv_sigma = 1.0 / w_sigma;
    cv::RNG rng; // OpenCV随机数产生器

    vector<double> x_data, y_data;
    for (int i = 0; i < N; i++)
    {
        double x = i / 100.0;
        x_data.push_back(x);
        y_data.push_back(exp(ar * x * x + br * x + cr) + rng.gaussian(w_sigma * w_sigma));

        /* code */
    }
    //
    int iterations = 100;
    double cost = 0, lastcost = 0;
    chrono::steady_clock::time_point t1 = chrono::steady_clock::now();
    for (int iter = 0; iter < iterations; iter++)
    {
        Matrix3d H = Matrix3d::Zero();
        Vector3d b = Vector3d::Zero();
        cost = 0;
        for (int i = 0; i < N; i++)
        {
            double xi = x_data[i], yi = y_data[i];
            double error = yi - exp(ae * xi * xi + be * xi + ce);
            Vector3d J; // Jacobian Mat
            J[0] = -xi * xi * exp(ae * xi * xi + be * xi + ce);
            J[1] = -xi * exp(ae * xi * xi + be * xi + ce);
            J[2] = -exp(ae * xi * xi + be * xi + ce);

            H += inv_sigma * inv_sigma * J * J.transpose();
            b += -inv_sigma * inv_sigma * error * J;
            cost += error * error;
            /* code */
        }
        //
        Vector3d dx = H.ldlt().solve(b);
        if (isnan(dx[0]))
        {
            cout << "result is nan!" << endl;
            break;
        }
        if (iter > 0 && cost >= lastcost)
        {
            cout << "cost:" << cost << ">=last cost:" << lastcost << ",break." << endl;
            break;
        }
        ae += dx[0];
        be += dx[1];
        ce += dx[2];
        lastcost = cost;

        cout << "total cost:" << cost << ",\t\tupdate:" << dx.transpose() << "\t\testimated params:" << ae << ","
             << be << "," << ce << endl;
    }
    chrono::steady_clock::time_point t2 = chrono::steady_clock::now();
    chrono::duration<double> time_used = chrono::duration_cast<chrono::duration<double>>(t2 - t1);
    cout << "solve time cost=" << time_used.count() << "s." << endl;
    cout << "estimated abc=" << ae << "," << be << "," << ce << endl;

    return 0;
}
