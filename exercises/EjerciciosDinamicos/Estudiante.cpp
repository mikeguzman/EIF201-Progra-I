//
// Created by Maikol Guzman  on 2019-08-28.
//

#include "Estudiante.h"

Estudiante::Estudiante() = default;

Estudiante::Estudiante(const std::string &nombre, int codigo, int edad) : nombre(nombre), codigo(codigo), edad(edad) {}

Estudiante::~Estudiante() = default;

const std::string &Estudiante::getNombre() const {
    return nombre;
}

void Estudiante::setNombre(const std::string &nombre) {
    Estudiante::nombre = nombre;
}

int Estudiante::getCodigo() const {
    return codigo;
}

void Estudiante::setCodigo(int codigo) {
    Estudiante::codigo = codigo;
}

int Estudiante::getEdad() const {
    return edad;
}

void Estudiante::setEdad(int edad) {
    Estudiante::edad = edad;
}
