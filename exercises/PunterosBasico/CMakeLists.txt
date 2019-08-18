cmake_minimum_required(VERSION 3.14)
project(PunterosBasico)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Punteros.cpp Punteros.h)

add_executable(PunterosBasico ${SOURCE_FILES})