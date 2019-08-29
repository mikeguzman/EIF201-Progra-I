//
// Created by Maikol Guzman  on 2019-08-29.
//

#ifndef INC_04_RELA_COMPOSICION_ANIMACION_H
#define INC_04_RELA_COMPOSICION_ANIMACION_H

#include <string>
#include <ostream>
#include "Punto2D.h"

class Animacion {
    std::string nombre;
    Punto2D posicion;

public:
    Animacion();

    Animacion(const std::string &_nombre, const Punto2D &_posicion);

    virtual ~Animacion();

    void moverseHacia(int _posX, int _posY);

    friend std::ostream &operator<<(std::ostream &os, const Animacion &animacion);
};


#endif //INC_04_RELA_COMPOSICION_ANIMACION_H
