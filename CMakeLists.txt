cmake_minimum_required(VERSION 3.16)
project(RPN_TDD)

set(CMAKE_CXX_STANDARD 17)

FIND_PACKAGE(gmock)
FIND_PACKAGE(gtest)
FIND_PACKAGE(Threads REQUIRED)

add_subdirectory(calculator)

add_executable(RPN_TDD main.cpp)

target_link_libraries(RPN_TDD Calc gmock gtest Threads::Threads)