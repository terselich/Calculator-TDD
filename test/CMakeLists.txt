set(CMAKE_CXX_STANDARD 17)

FIND_PACKAGE(gmock)
FIND_PACKAGE(gtest)

add_library(Tests src/calculator_test.cpp)

target_include_directories(Tests PUBLIC include gtest gtest)