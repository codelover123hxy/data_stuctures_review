cmake_minimum_required(VERSION 3.21)
project(queue)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(queue
        main.cpp
        Queue.cpp
        Queue.h)
