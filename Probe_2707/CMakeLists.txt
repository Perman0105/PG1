cmake_minimum_required(VERSION 3.5)

project(Probe_2707 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Probe_2707 main.cpp)

install(TARGETS Probe_2707
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
