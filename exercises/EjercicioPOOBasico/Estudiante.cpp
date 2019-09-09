//
// Created by Maikol Guzman  on 2019-08-27.
//

#include "Estudiante.h"

Estudiante::Estudiante() {}

Estudiante::Estudiante(const std::string &nombre, int ano, int codigo) : Persona(nombre, ano), codigo(codigo) {}

int Estudiante::getCodigo() const {
    return codigo;
}

void Estudiante::setCodigo(int codigo) {
    Estudiante::codigo = codigo;
}

std::ostream &operator<<(std::ostream &os, const Estudiante &estudiante) {
    os << static_cast<const Persona &>(estudiante) << " codigo: " << estudiante.codigo;
    return os;
}

