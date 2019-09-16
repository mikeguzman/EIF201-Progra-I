//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef EJERCICIOLISTAPROFESORES_PROFESOR_H
#define EJERCICIOLISTAPROFESORES_PROFESOR_H
#include <string>
#include <ostream>

class Profesor {
    int id;
    std::string nombre;
    int edad;
    std::string curso;

public:
    Profesor();

    Profesor(int id, const std::string &nombre, int edad, const std::string &curso);

    virtual ~Profesor();

    int getId() const;

    void setId(int id);

    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    int getEdad() const;

    void setEdad(int edad);

    const std::string &getCurso() const;

    void setCurso(const std::string &curso);

    std::string toString();
};


#endif //EJERCICIOLISTAPROFESORES_PROFESOR_H
