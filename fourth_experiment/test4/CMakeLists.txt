cmake_minimum_required(VERSION 3.7)
project(test4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "_4_(4).cpp" "_4_(4)PR.cpp")
include_directories(D:GitHub\repositoryfourth_experiment\test4)
add_executable(test4 ${SOURCE_FILES})