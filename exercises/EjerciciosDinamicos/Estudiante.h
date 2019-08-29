//
// Created by Maikol Guzman  on 2019-08-28.
//

#ifndef EJERCICIO_MEMORIA_DINAMICA_ESTUDIANTE_H
#define EJERCICIO_MEMORIA_DINAMICA_ESTUDIANTE_H


#include <string>

class Estudiante {
    std::string nombre;
    int codigo;
    int edad;

public:
    Estudiante();

    Estudiante(const std::string &nombre, int codigo, int edad);

    virtual ~Estudiante();

    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    int getCodigo() const;

    void setCodigo(int codigo);

    int getEdad() const;

    void setEdad(int edad);
};


#endif //EJERCICIO_MEMORIA_DINAMICA_ESTUDIANTE_H
