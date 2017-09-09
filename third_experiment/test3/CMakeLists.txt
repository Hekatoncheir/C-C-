cmake_minimum_required(VERSION 3.7)
project(test3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "_3_(4).cpp" "_3_(4)PR.cpp")
include_directories(D:GitHub\repository\third_experiment\test3)
add_executable(test3 ${SOURCE_FILES})