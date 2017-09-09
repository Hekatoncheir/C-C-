cmake_minimum_required(VERSION 3.7)
project(test3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "_2_(4).cpp" "_2_(4)PR.cpp")
include_directories(D:GitHub\repository\test3)
add_executable(test3 ${SOURCE_FILES})