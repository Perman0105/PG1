cmake_minimum_required(VERSION 3.5)

project(Probeklausur_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Probeklausur_1 main.cpp
    callcenter.h
    callcenter.cpp
    arztpraxis.h
    arztpraxis.cpp
    termin.h
    termin.cpp)

install(TARGETS Probeklausur_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
