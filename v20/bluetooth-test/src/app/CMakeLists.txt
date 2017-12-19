cmake_minimum_required(VERSION 3.9)
project(bluetooth_test)

set(CMAKE_CXX_STANDARD 11)

add_executable(rfcommBluetoothTest rfcomm_test.cpp)
target_link_libraries(rfcommBluetoothTest rfcomm)

add_executable(l2capBluetoothTest l2cap_test.cpp)
target_link_libraries(l2capBluetoothTest l2cap)