cmake_minimum_required(VERSION 3.9)
project(bluetooth_test)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(app)
add_subdirectory(l2cap)
add_subdirectory(rfcomm)