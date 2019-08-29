//
// Created by Maikol Guzman  on 2019-08-29.
//

#ifndef INC_04_RELA_AGREGACION_DEPARTAMENTO_H
#define INC_04_RELA_AGREGACION_DEPARTAMENTO_H


#include "Profesor.h"

class Departamento {
    Profesor *profesor;

public:
    Departamento();

    Departamento(Profesor *_profesor);
};


#endif //INC_04_RELA_AGREGACION_DEPARTAMENTO_H
