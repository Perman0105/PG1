cmake_minimum_required(VERSION 3.5)

project(Lottorie-Spiel LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lottorie-Spiel main.cpp
    lotto.h
    lotto.cpp
    spieler.h
    spieler.cpp)

install(TARGETS Lottorie-Spiel
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
