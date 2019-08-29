//
// Created by Maikol Guzman  on 2019-08-28.
//

#ifndef EJERCICIO_MEMORIA_DINAMICA_CURSO_H
#define EJERCICIO_MEMORIA_DINAMICA_CURSO_H

#include <string>
#include <vector>
#include "Estudiante.h"

class Curso {
    std::string nombre;
    std::vector<int> codEstudiantes;

public:
    Curso();

    Curso(const std::string &nombre);

    virtual ~Curso();

    void agregarCodigoEstudiantes(const int& _codEstudiante);

    std::string obtenerReporte();

    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    const std::vector<int> &getCodEstudiantes() const;

    void setCodEstudiantes(const std::vector<int> &codEstudiantes);
};


#endif //EJERCICIO_MEMORIA_DINAMICA_CURSO_H
