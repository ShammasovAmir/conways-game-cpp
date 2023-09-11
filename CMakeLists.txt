cmake_minimum_required(VERSION 3.26)
project(conways_game_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(conways_game_cpp
        life.cpp
        olcConsoleGameEngine.h)
