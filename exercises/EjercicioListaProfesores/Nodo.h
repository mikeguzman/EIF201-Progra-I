//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef EJERCICIOLISTAPROFESORES_NODO_H
#define EJERCICIOLISTAPROFESORES_NODO_H


#include <ostream>
#include "Profesor.h"

class Nodo {
    Profesor profesor;
    Nodo *siguiente;

public:
    Nodo();

    Nodo(const Profesor &profesor, Nodo *siguiente);

    virtual ~Nodo();

    const Profesor &getProfesor() const;

    void setProfesor(const Profesor &profesor);

    Nodo *getSiguiente() const;

    void setSiguiente(Nodo *_siguiente);

    std::string toString();

};


#endif //EJERCICIOLISTAPROFESORES_NODO_H
