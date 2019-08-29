cmake_minimum_required(VERSION 3.14)
project(ejercicio_vectores_dinamicos)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES Curso.cpp
        Curso.h
        Estudiante.cpp
        Estudiante.h
        main.cpp)

add_executable(VectoresDinamicos ${SOURCE_FILES})