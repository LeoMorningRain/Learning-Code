cmake_minimum_required(VERSION 3.22)
project(gaussianNewton)
find_package(Sophus REQUIRED)
find_package(OpenCV REQUIRED)

include_directories(${Sophus_INCLUDE_DIRS})
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories("/usr/include/eigen3")
find_package(G2O REQUIRED)
include_directories(${G2O_INCLUDE_DIRS})


add_executable(gaussianNewton gaussianNewton.cpp)
target_link_libraries(gaussianNewton ${OpenCV_LIBS})
