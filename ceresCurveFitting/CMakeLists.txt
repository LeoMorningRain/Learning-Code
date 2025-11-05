cmake_minimum_required(VERSION 3.22)
project(ch6)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "-std=c++17 -O3")

# list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

# OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# Ceres
find_package(Ceres REQUIRED)
include_directories(${CERES_INCLUDE_DIRS})

# g2o
# LIST( APPEND CMAKE_MODULE_PATH /home/mjy/slambook2/3rdparty/g2o/g2o/cmake_modules ) 
# SET( G2O_ROOT /usr/local/include/g2o ) 
# find_package(g2o REQUIRED)
# include_directories(${g2o_INCLUDE_DIRS})

# Eigen
include_directories("/usr/include/eigen3")

# add_executable(gaussNewton gaussNewton.cpp)
# target_link_libraries(gaussNewton ${OpenCV_LIBS})

add_executable(ceresCurveFitting ceresCurveFitting.cpp)
target_link_libraries(ceresCurveFitting ${OpenCV_LIBS} ${CERES_LIBRARIES})

# add_executable(g2oCurveFitting g2oCurveFitting.cpp)
# target_link_libraries(g2oCurveFitting ${OpenCV_LIBS} ${G2O_CORE_LIBRARY} ${G2O_STUFF_LIBRARY})
# target_link_libraries(g2oCurveFitting g2o_core g2o_stuff)
