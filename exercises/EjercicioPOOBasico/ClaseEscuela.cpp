//
// Created by Maikol Guzman  on 2019-08-27.
//

#include "ClaseEscuela.h"

#include <utility>

ClaseEscuela::ClaseEscuela() {}

ClaseEscuela::ClaseEscuela(const Profesor &profesor) : profesor(profesor) {}

void ClaseEscuela::agregarEstudiante(Estudiante _estudiante) {
    estudiantes.push_back(_estudiante);
}

const std::vector<Estudiante> &ClaseEscuela::getEstudiantes() const {
    return estudiantes;
}

const Profesor &ClaseEscuela::getProfesor() const {
    return profesor;
}

const std::vector<Persona> ClaseEscuela::getAllPersons() const {
    std::vector<Persona> resultado;

    resultado.push_back(profesor);

    for( int contEstudiante = 0; contEstudiante<estudiantes.size(); contEstudiante++ ) {
        resultado.push_back( estudiantes[contEstudiante] );
    }

    return resultado;
}
