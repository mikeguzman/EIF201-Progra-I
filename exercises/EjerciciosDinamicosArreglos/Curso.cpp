//
// Created by Maikol Guzman  on 2019-09-02.
//

#include "Curso.h"

Curso::Curso() {
    codEstudiantes  = new int[5];
}

Curso::Curso(const std::string &nombre) : nombre(nombre) {}

Curso::~Curso() {

}

void Curso::agregarCodigoEstudiantes(const int _pos, int _codEstudiante) {
    codEstudiantes[_pos] = _codEstudiante;
}

std::string Curso::toString() {
    std::string resultado = "\n";

    for (int cont =0; cont < 5; ++cont) {
        resultado += std::to_string(codEstudiantes[cont]) + "\n";
    }

    return resultado;
}

const std::string &Curso::getNombre() const {
    return nombre;
}

void Curso::setNombre(const std::string &nombre) {
    Curso::nombre = nombre;
}
