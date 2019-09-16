//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef EJERCICIOLISTAPROFESORES_LISTAPROFESORES_H
#define EJERCICIOLISTAPROFESORES_LISTAPROFESORES_H


#include <ostream>
#include "Nodo.h"

class ListaProfesores {
    Nodo *primero;
    Nodo *actual;

public:
    ListaProfesores();

    virtual ~ListaProfesores();

    void insertarInicio(const Profesor& profesor);
    bool eliminarInicio();
    int totalNodos();
    bool listaVacia();

    Nodo *getPrimero() const;

    void setPrimero(Nodo *primero);

    Nodo *getActual() const;

    void setActual(Nodo *actual);

    std::string toString();
};


#endif //EJERCICIOLISTAPROFESORES_LISTAPROFESORES_H
