//
// Created by Maikol Guzman  on 2019-08-29.
//

#ifndef INC_04_RELA_ASOCIACION_SIMPLE_PACIENTE_H
#define INC_04_RELA_ASOCIACION_SIMPLE_PACIENTE_H

#include <string>
#include <vector>
#include <ostream>
#include "Doctor.h"

class Doctor; // Como el doctor y el paciente tienen una dependencia circular, declaramos Doctor

class Paciente {
    std::string nombre;
    std::vector<Doctor *> doctores;

public:
    Paciente();

    Paciente(const std::string &nombre);

    virtual ~Paciente();

    void agregarDoctor(Doctor *_doctor);

    friend std::ostream &operator<<(std::ostream &os, const Paciente &paciente);

    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    const std::vector<Doctor *> &getDoctores() const;

    void setDoctores(const std::vector<Doctor *> &doctores);
};


#endif //INC_04_RELA_ASOCIACION_SIMPLE_PACIENTE_H
