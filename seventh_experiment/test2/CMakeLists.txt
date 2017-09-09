cmake_minimum_required(VERSION 3.8)
project(test2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "_7_(2).cpp" "_7_(2)PR.cpp")
include_directories(E:GitHub\repositoryseventh_experiment\test2)
add_executable(test2 ${SOURCE_FILES})