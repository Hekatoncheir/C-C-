cmake_minimum_required(VERSION 3.7)
project(test2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "_3_(2).cpp" "_3_(2)PR.cpp")
include_directories(D:GitHub\repositorysecond_experiment\test2)
add_executable(test2 ${SOURCE_FILES})