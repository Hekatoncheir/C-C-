cmake_minimum_required(VERSION 3.7)
project(test5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "_2_(6).cpp" "_2_(6)PR.cpp")
include_directories(D:GitHub\repository\test5)
add_executable(test5 ${SOURCE_FILES})