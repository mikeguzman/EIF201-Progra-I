//
// Created by Maikol Guzman  on 2019-08-27.
//

#ifndef EJERCICIO_POO_BASICO_PERSONA_H
#define EJERCICIO_POO_BASICO_PERSONA_H
#include <string>
#include <ostream>

class Persona {
    std::string nombre;
    int ano;

public:
    Persona();

    Persona(const std::string &nombre, int ano);

    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    int getAno() const;

    void setAno(int ano);

    friend std::ostream &operator<<(std::ostream &os, const Persona &persona);
};


#endif //EJERCICIO_POO_BASICO_PERSONA_H
