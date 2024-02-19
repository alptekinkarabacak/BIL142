cmake_minimum_required(VERSION 3.27)
project(DroneManagementSystem)

set(CMAKE_CXX_STANDARD 17)

include_directories(inc)
set(SOURCE_FILES src/DeliveryDrone.cpp src/Survilliance.cpp)


add_executable(DroneManagementSystem main.cpp ${SOURCE_FILES})



