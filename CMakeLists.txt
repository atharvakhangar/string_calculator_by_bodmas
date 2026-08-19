cmake_minimum_required(VERSION 3.20)

project(StrCalc)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}")

add_executable(StrCalc
    main.cpp
    basicmath.cpp
    complex.cpp
    checks.cpp
    unary-handler.cpp
    mix.cpp
)