cmake_minimum_required(VERSION 3.10)
project(PrototypePattern)

set(CMAKE_CXX_STANDARD 17)

add_executable(prototype
    main.cpp
    circle.h
    rectangle.h
    shape.h
)
