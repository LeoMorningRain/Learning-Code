cmake_minimum_required(VERSION 3.22)
 project(g2oCurveFitting)
find_package(Sophus REQUIRED)
find_package(OpenCV REQUIRED)

include_directories(${Sophus_INCLUDE_DIRS})
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories("/usr/include/eigen3")



include_directories(${G2O_INCLUDE_DIRS})


add_executable(g2oCurveFitting g2oCurveFitting.cpp)
target_link_libraries(g2oCurveFitting g2o_core g2o_stuff ${OpenCV_LIBS})

# target_link_libraries(g2oCurveFitting ${OpenCV_LIBS} ${G2O_CORE_LIBRARY} ${G2O_STUFF_LIBRARY})

# add_executable(gaussianNewton gaussianNewton.cpp)
# target_link_libraries(gaussianNewton ${OpenCV_LIBS})
