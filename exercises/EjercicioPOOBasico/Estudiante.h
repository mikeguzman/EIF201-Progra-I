//
// Created by Maikol Guzman  on 2019-08-27.
//

#ifndef EJERCICIO_POO_BASICO_ESTUDIANTE_H
#define EJERCICIO_POO_BASICO_ESTUDIANTE_H


#include <ostream>
#include "Persona.h"

class Estudiante : public Persona {
    int codigo;
public:
    Estudiante();

    Estudiante(const std::string &nombre, int ano, int codigo);

    int getCodigo() const;

    void setCodigo(int codigo);

    friend std::ostream &operator<<(std::ostream &os, const Estudiante &estudiante);
};


#endif //EJERCICIO_POO_BASICO_ESTUDIANTE_H
