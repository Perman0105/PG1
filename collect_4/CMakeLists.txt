cmake_minimum_required(VERSION 3.5)

project(collect_4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(collect_4 main.cpp)

install(TARGETS collect_4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
