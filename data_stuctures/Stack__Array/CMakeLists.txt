cmake_minimum_required(VERSION 3.21)
project(based_on_array)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(based_on_array
        main.cpp
        Stack.cpp
        Stack.h)
