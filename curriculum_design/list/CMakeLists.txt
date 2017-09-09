cmake_minimum_required(VERSION 3.8)
project(list)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES list.cpp list_PR.cpp)
add_executable(list ${SOURCE_FILES})