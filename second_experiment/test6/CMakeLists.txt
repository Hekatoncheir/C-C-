cmake_minimum_required(VERSION 3.7)
project(test6)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "_2_(7).cpp" "_2_(7)PR.cpp")
include_directories(D:GitHub\repository\test6)
add_executable(test6 ${SOURCE_FILES})