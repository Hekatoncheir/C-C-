cmake_minimum_required(VERSION 3.7)
project(test7)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "_2_(8).cpp" "_2_(8)PR.cpp")
include_directories(D:GitHub\repository\test7)
add_executable(test7 ${SOURCE_FILES})