cmake_minimum_required(VERSION 3.7)
project(test1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "_4_(1).cpp" "_4_(1)PR.cpp")
include_directories(D:GitHub\repositoryfourth_experiment\test1)
add_executable(test1 ${SOURCE_FILES})