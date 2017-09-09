cmake_minimum_required(VERSION 3.7)
project(test6)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "_4_(6).cpp" "_4_(6)PR.cpp")
include_directories(D:GitHub\repositoryfourth_experiment\test6)
add_executable(test6 ${SOURCE_FILES})