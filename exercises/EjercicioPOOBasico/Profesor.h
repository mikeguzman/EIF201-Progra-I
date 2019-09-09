//
// Created by Maikol Guzman  on 2019-08-27.
//

#ifndef EJERCICIO_POO_BASICO_PROFESOR_H
#define EJERCICIO_POO_BASICO_PROFESOR_H

#include <ostream>
#include "Persona.h"

class Profesor : public Persona {
    float salario;

public:
    Profesor();

    Profesor(const std::string &nombre, int ano, float salario);

    float getSalario() const;

    void setSalario(float salario);

    friend std::ostream &operator<<(std::ostream &os, const Profesor &profesor);
};

#endif //EJERCICIO_POO_BASICO_PROFESOR_H
