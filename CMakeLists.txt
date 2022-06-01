cmake_minimum_required(VERSION 3.0)
project(eigen_templates)

find_package(Eigen3 3.3 REQUIRED NO_MODULE)

add_library(util util.cpp)

add_executable(main main.cpp)

target_link_libraries(util Eigen3::Eigen)
target_link_libraries(main Eigen3::Eigen)
