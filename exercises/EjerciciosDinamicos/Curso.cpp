//
// Created by Maikol Guzman  on 2019-08-28.
//

#include "Curso.h"

Curso::Curso() = default;


Curso::~Curso() = default;

Curso::Curso(const std::string &nombre) {
    setNombre(nombre);
}

void Curso::agregarCodigoEstudiantes(const int& _codEstudiante) {
    codEstudiantes.push_back(_codEstudiante);
}

std::string Curso::obtenerReporte() {
    std::string reporte;

    for (int cont = 0; cont < codEstudiantes.size(); cont++) {
        reporte += std::to_string(codEstudiantes[cont]) + ", ";
    }

    reporte += "\n";

    return reporte;
}

const std::string &Curso::getNombre() const {
    return nombre;
}

void Curso::setNombre(const std::string &nombre) {
    Curso::nombre = nombre;
}

const std::vector<int> &Curso::getCodEstudiantes() const {
    return codEstudiantes;
}

void Curso::setCodEstudiantes(const std::vector<int> &codEstudiantes) {
    Curso::codEstudiantes = codEstudiantes;
}
