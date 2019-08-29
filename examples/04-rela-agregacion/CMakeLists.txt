cmake_minimum_required(VERSION 3.14)
project(04_rela_agregacion)

set(SOURCE_FILES main.cpp Profesor.cpp Profesor.h Departamento.cpp Departamento.h)

add_executable(RelacionAgregacion ${SOURCE_FILES})