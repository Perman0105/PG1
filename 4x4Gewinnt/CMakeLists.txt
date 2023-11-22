cmake_minimum_required(VERSION 3.5)

project(4x4Gewinnt LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(4x4Gewinnt main.cpp
    collect4.h
    collect4.cpp
    player.h
    player.cpp)

install(TARGETS 4x4Gewinnt
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
