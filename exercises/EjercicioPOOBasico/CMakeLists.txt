cmake_minimum_required(VERSION 3.14)
project(ejercicio_poo_basico)

set(SOURCE_FILES main.cpp Persona.cpp Persona.h Estudiante.cpp Estudiante.h
        Profesor.cpp Profesor.h ClaseEscuela.cpp ClaseEscuela.h)

add_executable(ejercicio_poo_basico ${SOURCE_FILES})