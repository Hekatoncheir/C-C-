cmake_minimum_required(VERSION 3.7)
project(test3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "_4_(3).cpp" "_4_(3)PR.cpp")
include_directories(D:GitHub\repositoryfourth_experiment\test3)
add_executable(test3 ${SOURCE_FILES})