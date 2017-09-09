cmake_minimum_required(VERSION 3.7)
project(atm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "ATM.cpp" "ATM_PR.cpp")
add_executable(atm ${SOURCE_FILES})