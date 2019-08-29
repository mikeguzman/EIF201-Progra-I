//
// Created by Maikol Guzman  on 2019-08-29.
//

#include "Profesor.h"

Profesor::Profesor() {}

Profesor::Profesor(const std::string &nombre) : nombre(nombre) {}

Profesor::~Profesor() {

}

std::ostream &operator<<(std::ostream &os, const Profesor &profesor) {
    os << "nombre: " << profesor.nombre;
    return os;
}

const std::string &Profesor::getNombre() const {
    return nombre;
}

void Profesor::setNombre(const std::string &nombre) {
    Profesor::nombre = nombre;
}
