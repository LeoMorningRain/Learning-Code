#include <iostream>
// #include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/calib3d/calib3d.hpp>
#include <chrono>

using namespace std;
using namespace cv;

void find_feature_matches(
    const Mat &img_1, const Mat &img_2,
    std::vector<cv::KeyPoint> &keypoints_1,
    std::vector<cv::KeyPoint> &keypoints_2,
    std::vector<cv::DMatch> &matches);

void pose_estimation_2d2d(
    const std::vector<cv::KeyPoint> &keypoint_1,
    const std::vector<cv::KeyPoint> &keypoints_2,
    const std::vector<cv::DMatch> &matches);

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        std::cout << "usage:triangulation imag1 imag2" << std::endl;
    }
    // 读取图像
    Mat img_1 = imread(argv[1], IMREAD_COLOR);
    Mat img_2 = imread(argv[2], IMREAD_COLOR);
    assert(img_1.data != nullptr && img_2.data != nullptr);

    // 初始化
    std::vector<KeyPoint> keypoints_1, keypoints_2;
    std::vector<DMatch> matches;
    find_feature_matches(img_1, img_2, keypoints_1, keypoints_2, matches);
    cout << "一共找到了" << matches.size() << "组匹配点" << endl;
    Mat R, t;
    pose_estimation_2d2d(keypoints_1, keypoints_2, matches, R, t);

    // 三角化
    vector<Point3d> points;
    return 0;
}
void find_feature_matches(const Mat &img_1, const Mat &img_2,
                          vector<KeyPoint> &keypoints_1,
                          vector<KeyPoint> keypoints_2,
                          vector<DMatch> &matches)
{
    // 初始化
    Mat descriptor_1, descriptor_2;
    Ptr<FeatureDetector> detector = cv::ORB::create();

    Ptr<DescriptorExtractor> descriptor = cv::ORB::create();
    Ptr<DescriptorMatcher> matcher = DescriptorMatcher::create("BruteForce-Hamming");
    // 第一步：检测Oriented FAST角点的位置
    detector->detect(img_1, keypoints_1);
    detector->detect(img_2, keypoints_2);
    // 第二步：计算BRIEF描述子；
    descriptor->compute(img_1, keypoints_1, descriptor_1);
    descriptor->compute(img_2, keypoints_2, descriptor_2);
    // 第三步：对两幅图像中的BRIEF描述子进行匹配，使用 Hamming 距离
    vector<DMatch> match;
    matcher->match(descriptor_1, descriptor_2, match);
    // 第四步:匹配点对筛选
    double min_dist = 10000, max_dist = 0;
    // 找出所有匹配之间的最小距离和最大距离, 即是最相似的和最不相似的两组点之间的距离
    for (int i = 0; i < descriptor_1.rows; i++)
    {
        double dist = match[i].distance;
        if (dist < min_dist)
            min_dist = dist;
        if (dist > max_dist)
            max_dist = dist;
    }
    printf("--Max dist :%f \n", max_dist);
    printf("--Min dist:%f \n", min_dist);
    for (int i = 0; i < descriptor_1.rows; i++)
    {
        if (match[i] <= max(min_dist * 2, 30.0))
        {
            matches.push_back(match[i]);
        }
    }
}
void pose_estimation_2d2d(
    const std::vector<KeyPoint> &keypoints_1,
    const std::vector<KeyPoint> &keypoints_2,
    const vector<DMatch> &matches,
    Mat &R, Mat &t)
{
    // 相机内参,TUM Freiburg2
    Mat K = (Mat_<double>(3, 3) << 520.9, 0, 325.1, 0, 521.0, 249.7, 0, 0, 1);
    vector<Point2f> points1;
    vector<Point2f> points2;
    for (int i = 0; i < (int)matches.size(); i++)
    {
        points1.push_back(keypoints_1[matches[i].queryIdx].pt);
        points2.push_back(keypoints_2[matches[i].trainIdx].pt);
    }

    //
    Point2d principal_point(325.1, 249.7);
    int focal_length = 521; // 相机焦距, TUM dataset标定值
    Mat essential_matrix;
    essential_matrix = findEssentialMat(points1, points2, focal_length, principal_point);
}
