//
// Created by Maikol Guzman  on 2019-09-16.
//

#include <sstream>
#include "ListaProfesores.h"

ListaProfesores::ListaProfesores() {
    primero = nullptr;
    actual = nullptr;
}

ListaProfesores::~ListaProfesores() {
    while (primero != nullptr) {
        actual = primero;
        primero = primero->getSiguiente();
        delete(actual);
    }
}

void ListaProfesores::insertarInicio(const Profesor& profesor) {
    actual = new Nodo (profesor, nullptr);
    if (primero == nullptr) {
        primero = actual;
    } else {
        actual->setSiguiente(primero);
        primero = actual;
    }
}

bool ListaProfesores::eliminarInicio() {
    if (primero == nullptr) {
        return false;
    } else {
        actual = primero;
        primero = primero->getSiguiente();
        delete actual;
        return true;
    }
}

int ListaProfesores::totalNodos() {
    int totalNodos = 0;
    actual = primero;

    while (actual != nullptr) {
        totalNodos ++;
        actual = actual->getSiguiente();
    }

    return totalNodos;
}

bool ListaProfesores::listaVacia() {
    return primero == nullptr;
}

std::string ListaProfesores::toString() {
    std::string resultado;
    actual = primero;

    while (actual != nullptr) {
        resultado += actual->toString();
        actual = actual->getSiguiente();
    }

    return resultado;
}

Nodo *ListaProfesores::getPrimero() const {
    return primero;
}

void ListaProfesores::setPrimero(Nodo *primero) {
    ListaProfesores::primero = primero;
}

Nodo *ListaProfesores::getActual() const {
    return actual;
}

void ListaProfesores::setActual(Nodo *actual) {
    ListaProfesores::actual = actual;
}
