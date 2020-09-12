cmake_minimum_required(VERSION 3.14)
project(Calculadora)
set (CMAKE_CXX_STANDARD 14)

set(SOURCE_FILE 
    src/Calculadora.cpp
    src/Input.cpp
    src/Output.cpp
    main.cpp)

include_directories(include)

add_executable(Calculadora ${SOURCE_FILE})