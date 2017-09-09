cmake_minimum_required(VERSION 3.7)
project(test1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "_2_(1)_SC.cpp" "_2_(1)_PR.cpp")
include_directories(D:GitHub\repository\test1)
add_executable(test1 ${SOURCE_FILES})