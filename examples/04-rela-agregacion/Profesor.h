//
// Created by Maikol Guzman  on 2019-08-29.
//

#ifndef INC_04_RELA_AGREGACION_PROFESOR_H
#define INC_04_RELA_AGREGACION_PROFESOR_H


#include <string>
#include <ostream>

class Profesor {
    std::string nombre;

public:
    Profesor();

    Profesor(const std::string &nombre);

    virtual ~Profesor();

    friend std::ostream &operator<<(std::ostream &os, const Profesor &profesor);

    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

};


#endif //INC_04_RELA_AGREGACION_PROFESOR_H
