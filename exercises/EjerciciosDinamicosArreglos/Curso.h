//
// Created by Maikol Guzman  on 2019-09-02.
//

#ifndef EJERCICIOSDINAMICOSARREGLOS_CURSO_H
#define EJERCICIOSDINAMICOSARREGLOS_CURSO_H

#include <string>

class Curso {
    std::string nombre;
    int *codEstudiantes;

public:
    Curso();

    Curso(const std::string &nombre);

    virtual ~Curso();

    void agregarCodigoEstudiantes(const int _pos, int  _codigoEstudiante);

    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    std::string toString();

};


#endif //EJERCICIOSDINAMICOSARREGLOS_CURSO_H
