cmake_minimum_required(VERSION 3.5)

project(Probeklausur2_Aufgabe1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Probeklausur2_Aufgabe1 main.cpp
    mietwagen.h
    mietwagen.cpp
    autovermietung.h
    autovermietung.cpp
    fahrt.h
    fahrt.cpp)

install(TARGETS Probeklausur2_Aufgabe1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
