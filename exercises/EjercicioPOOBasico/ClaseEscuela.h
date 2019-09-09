//
// Created by Maikol Guzman  on 2019-08-27.
//

#ifndef EJERCICIO_POO_BASICO_CLASEESCUELA_H
#define EJERCICIO_POO_BASICO_CLASEESCUELA_H


#include <vector>
#include "Profesor.h"
#include "Estudiante.h"

class ClaseEscuela {
    Profesor profesor;
    std::vector<Estudiante> estudiantes;

public:

    ClaseEscuela();

    ClaseEscuela(const Profesor &profesor);

    void agregarEstudiante(Estudiante _estudiante);

    const std::vector<Estudiante> &getEstudiantes() const;

    const Profesor &getProfesor() const;

    const std::vector<Persona> getAllPersons() const;

};

#endif //EJERCICIO_POO_BASICO_CLASEESCUELA_H
