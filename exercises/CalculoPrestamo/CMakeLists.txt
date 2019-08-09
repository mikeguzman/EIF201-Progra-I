cmake_minimum_required(VERSION 3.14)
project(CalculoPrestamo)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp CalculoPrestamo.cpp CalculoPrestamo.h)

add_executable(NumerosRacionales ${SOURCE_FILES})