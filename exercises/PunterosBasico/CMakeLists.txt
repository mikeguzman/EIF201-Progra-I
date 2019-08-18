cmake_minimum_required(VERSION 3.14)
project(Punteros)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Profesor.cpp Profesor.h)

add_executable(PunterosBasico ${SOURCE_FILES})