cmake_minimum_required(VERSION 3.8)
project(function1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES function1.cpp function1_PR.cpp)

add_executable(function1 ${SOURCE_FILES})