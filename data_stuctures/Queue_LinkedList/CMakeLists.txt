cmake_minimum_required(VERSION 3.21)
project(Queue_LinkedList)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Queue_LinkedList
        main.cpp
        Node.h
        Queue.cpp
        Queue.h)
