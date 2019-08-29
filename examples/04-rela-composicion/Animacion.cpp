//
// Created by Maikol Guzman  on 2019-08-29.
//

#include "Animacion.h"

Animacion::Animacion() {}


Animacion::~Animacion() {

}

Animacion::Animacion(const std::string &_nombre, const Punto2D &_posicion) : nombre(_nombre), posicion(_posicion) {}

void Animacion::moverseHacia(int _posX, int _posY) {
    posicion.setPosX(_posX);
    posicion.setPosY(_posY);
}

std::ostream &operator<<(std::ostream &os, const Animacion &animacion) {
    os << "nombre: " << animacion.nombre << " posicion: " << animacion.posicion;
    return os;
}