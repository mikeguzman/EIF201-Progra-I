//
// Created by Maikol Guzman  on 2019-08-27.
//

#include "Profesor.h"

Profesor::Profesor() = default;

Profesor::Profesor(const std::string &nombre, int ano, float salario) : Persona(nombre, ano), salario(salario) {}

float Profesor::getSalario() const {
    return salario;
}

void Profesor::setSalario(float salario) {
    Profesor::salario = salario;
}

std::ostream &operator<<(std::ostream &os, const Profesor &profesor) {
    os << static_cast<const Persona &>(profesor) << " salario: " << profesor.salario;
    return os;
}
