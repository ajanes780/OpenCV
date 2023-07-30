cmake_minimum_required(VERSION 3.25)
project(OpenCVCourse)

set(CMAKE_CXX_STANDARD 17)
find_package(OpenCV REQUIRED PATHS /usr/local/Cellar/opencv)
include_directories(/usr/local/Cellar/opencv/4.8.0_1/include/opencv4/opencv2/)
add_executable(OpenCVCourse main.cpp)

target_link_libraries(OpenCVCourse ${OpenCV_LIBS})
