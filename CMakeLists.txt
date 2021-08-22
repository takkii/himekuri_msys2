cmake_minimum_required(VERSION 3.17)
project(himekuri_msys2)

set(CMAKE_CXX_STANDARD 20)

include_directories(.)

add_executable(himekuri_msys2
        all.h
        main.cpp)
