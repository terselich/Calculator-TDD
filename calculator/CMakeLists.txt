set(CMAKE_CXX_STANDARD 17)

add_library(Calc
        src/addition.cpp
        src/calculator.cpp
        src/division.cpp
        src/math_factory.cpp
        src/multiplication.cpp
        src/math_factory.cpp
        src/null_object.cpp
        src/subtraction.cpp
        )

target_include_directories(Calc PUBLIC include)