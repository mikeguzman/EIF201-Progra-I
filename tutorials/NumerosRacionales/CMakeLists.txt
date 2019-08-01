cmake_minimum_required(VERSION 3.14)
project(NumerosRacionales)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Racional.cpp Racional.h)

add_executable(NumerosRacionales ${SOURCE_FILES})