cmake_minimum_required(VERSION 3.7)
project(test7)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "_3_(9).cpp" "_3_(9)PR.cpp")
include_directories(D:GitHub\repository\third_experiment\test7)
add_executable(test7 ${SOURCE_FILES})