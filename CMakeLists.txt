cmake_minimum_required(VERSION 4.2)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled print.cpp
        numerics.cpp
        texts.cpp
        texts.cpp
        booleans.cpp
        booleans.h
        arithmeticOps.cpp
        arithmeticOps.h)
