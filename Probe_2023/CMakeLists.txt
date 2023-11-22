cmake_minimum_required(VERSION 3.5)

project(Probe_2023 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Probe_2023 main.cpp
                          )

install(TARGETS Probe_2023
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
