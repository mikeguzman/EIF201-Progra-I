//
// Created by Maikol Guzman  on 2019-09-05.
//

#include "Cama.h"

Cama::Cama() {}

Cama::Cama(const std::string &codigo, bool estado) : codigo(codigo), estado(estado) {}

Cama::~Cama() {

}

const std::string &Cama::getCodigo() const {
    return codigo;
}

void Cama::setCodigo(const std::string &codigo) {
    Cama::codigo = codigo;
}

bool Cama::isEstado() const {
    return estado;
}

void Cama::setEstado(bool estado) {
    Cama::estado = estado;
}

std::ostream &operator<<(std::ostream &os, const Cama &cama) {
    os << "codigo: " << cama.codigo << " estado: " << cama.estado;
    return os;
}

