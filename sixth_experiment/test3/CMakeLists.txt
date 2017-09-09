cmake_minimum_required(VERSION 3.7)
project(test3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "_6_(3).cpp" "_6_(3)PR.cpp")
include_directories(E:GitHub\repositorysixth_experiment\test3)
add_executable(test3 ${SOURCE_FILES})