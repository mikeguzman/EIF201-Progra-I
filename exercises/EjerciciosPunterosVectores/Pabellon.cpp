//
// Created by Maikol Guzman  on 2019-09-05.
//

#include "Pabellon.h"

Pabellon::Pabellon() {}

Pabellon::Pabellon(char id, char genero, int tamano) : id(id), genero(genero), tamano(tamano) {
    cantidad = 0;
    cama = new Cama* [tamano];
}

Pabellon::~Pabellon() {
    delete[] cama;
}

Cama *Pabellon::obtenerCama(int _posicion) const {
    return cama[_posicion];
}

void Pabellon::agregarCama(Cama *_cama) {
    if (cantidad < tamano) {
        cama[cantidad++] = _cama;
    }
}

char Pabellon::getId() const {
    return id;
}

void Pabellon::setId(char id) {
    Pabellon::id = id;
}

char Pabellon::getGenero() const {
    return genero;
}

void Pabellon::setGenero(char genero) {
    Pabellon::genero = genero;
}

int Pabellon::getTamano() const {
    return tamano;
}

void Pabellon::setTamano(int tamano) {
    Pabellon::tamano = tamano;
}

int Pabellon::getCantidad() const {
    return cantidad;
}

void Pabellon::setCantidad(int cantidad) {
    Pabellon::cantidad = cantidad;
}

std::string Pabellon::toString() {
    std::string reporteCamas;

    reporteCamas += "Pabellón -- id: " + std::string(1, id) + ", genero: " + std::string(1, genero) +
            ", tamano: " + std::to_string(tamano) + ", cantidad: "+ std::to_string(cantidad) + ", camas: [";

    for (int contador = 0; contador < cantidad; contador++) {
        reporteCamas += cama[contador]->getCodigo() + ", ";
    }

    reporteCamas += "]\n";

    return reporteCamas;
}