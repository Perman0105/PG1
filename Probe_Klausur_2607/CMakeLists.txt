cmake_minimum_required(VERSION 3.5)

project(Probe_Klausur_2607 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Probe_Klausur_2607 main.cpp
    callcenter.h
    callcenter.cpp
    arztpraxis.h
    arztpraxis.cpp
    termin.h
    termin.cpp
)

install(TARGETS Probe_Klausur_2607
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
