cmake_minimum_required(VERSION 3.7)
project(test1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "_5_(1).cpp" "_5_(1)PR.cpp")
include_directories(D:GitHub\repositoryfifth_experiment\test1)
add_executable(test1 ${SOURCE_FILES})