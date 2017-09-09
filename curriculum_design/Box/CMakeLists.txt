cmake_minimum_required(VERSION 3.8)
project(Box)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp mybox.cpp array.h)
add_executable(Box ${SOURCE_FILES})