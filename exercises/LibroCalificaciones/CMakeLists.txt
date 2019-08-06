cmake_minimum_required(VERSION 3.14)
project(LibroCalificaciones)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp LibroCalificaciones.cpp LibroCalificaciones.h )

add_executable(LibroCalificaciones ${SOURCE_FILES})