cmake_minimum_required(VERSION 3.17)
project(ITP)

set(CMAKE_CXX_STANDARD 14)

add_executable(ITP main.cpp PassengerGateway.cpp PassengerGateway.h DriverGateway.cpp DriverGateway.h Order.cpp Order.h)