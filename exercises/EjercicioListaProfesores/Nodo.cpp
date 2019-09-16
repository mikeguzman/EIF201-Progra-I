//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "Nodo.h"

Nodo::Nodo() {}

Nodo::Nodo(const Profesor &profesor, Nodo *siguiente) : profesor(profesor), siguiente(siguiente) {}

Nodo::~Nodo() {

}

const Profesor &Nodo::getProfesor() const {
    return profesor;
}

void Nodo::setProfesor(const Profesor &profesor) {
    Nodo::profesor = profesor;
}

Nodo *Nodo::getSiguiente() const {
    return siguiente;
}

void Nodo::setSiguiente(Nodo *_siguiente) {
    Nodo::siguiente = _siguiente;
}

std::string Nodo::toString() {
    return profesor.toString();
}
