cmake_minimum_required(VERSION 3.9)
project(bluetooth)

set(CMAKE_CXX_STANDARD 11)

add_executable(rfcommBluetoothServer rfcomm_server.cpp)
target_link_libraries(rfcommBluetoothServer rfcomm)

add_executable(l2capBluetoothServer l2cap_server.cpp)
target_link_libraries(l2capBluetoothServer l2cap)


add_executable(rfcommBluetoothclient rfcomm_client.cpp)
target_link_libraries(rfcommBluetoothclient rfcomm)

add_executable(l2capBluetoothclient l2cap_client.cpp)
target_link_libraries(l2capBluetoothclient l2cap)