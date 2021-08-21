cmake_minimum_required(VERSION 3.17)
project(himekuri_c_plusplus)

set(CMAKE_CXX_STANDARD 20)

include_directories(.)

add_executable(himekuri_c_plusplus
        all.h
        main.cpp)
