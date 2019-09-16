cmake_minimum_required(VERSION 3.14)
project(EjercicioListaProfesores)

set(SOURCE_FILES main.cpp Nodo.cpp Nodo.h Profesor.cpp Profesor.h ListaProfesores.cpp ListaProfesores.h)

add_executable(ListaProfesores ${SOURCE_FILES})