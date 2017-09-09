cmake_minimum_required(VERSION 3.7)
project(test5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "_4_(5).cpp" "_4_(5)PR.cpp")
include_directories(D:GitHub\repositoryfourth_experiment\test5)
add_executable(test5 ${SOURCE_FILES})