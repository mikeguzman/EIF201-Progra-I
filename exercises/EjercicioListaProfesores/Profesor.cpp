//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "Profesor.h"

Profesor::Profesor() {}

Profesor::Profesor(int id, const std::string &nombre, int edad, const std::string &curso) : id(id), nombre(nombre),
                                                                                            edad(edad), curso(curso) {}

Profesor::~Profesor() {

}

int Profesor::getId() const {
    return id;
}

void Profesor::setId(int id) {
    Profesor::id = id;
}

const std::string &Profesor::getNombre() const {
    return nombre;
}

void Profesor::setNombre(const std::string &nombre) {
    Profesor::nombre = nombre;
}

int Profesor::getEdad() const {
    return edad;
}

void Profesor::setEdad(int edad) {
    Profesor::edad = edad;
}

const std::string &Profesor::getCurso() const {
    return curso;
}

void Profesor::setCurso(const std::string &curso) {
    Profesor::curso = curso;
}

std::string Profesor::toString() {
    std::string resultado;

    resultado = "- id: " + std::to_string(id) + " nombre: " + nombre + " edad: " + std::to_string(edad) +
            " curso: " + curso + "\n";
    return resultado;
}
