cmake_minimum_required(VERSION 3.9)
project(bluetooth_test)

set(CMAKE_CXX_STANDARD 11)

add_library(rfcomm rfcomm.cpp rfcomm.hpp)

