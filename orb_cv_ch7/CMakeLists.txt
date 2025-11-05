cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_FLAGS "-std=c++11 -O2 ${SSE_FLAGS} -msse4")
 project(orb_cv)
 project(orb_self)
 project(pose_estimation_2d2d)
find_package(Sophus REQUIRED)
find_package(OpenCV REQUIRED)

include_directories(${Sophus_INCLUDE_DIRS})
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories("/usr/include/eigen3")



include_directories(${G2O_INCLUDE_DIRS})


add_executable(orb_cv orb_cv.cpp)
target_link_libraries(orb_cv ${OpenCV_LIBS})

add_executable(orb_self orb_self.cpp)
target_link_libraries(orb_self ${OpenCV_LIBS})

add_executable(pose_estimation_2d2d pose_estimation_2d2d.cpp)
target_link_libraries(pose_estimation_2d2d ${OpenCV_LIBS})


target_link_libraries(orb_cv g2o_core g2o_stuff ${OpenCV_LIBS})
