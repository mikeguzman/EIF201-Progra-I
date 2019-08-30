//
// Created by Maikol Guzman  on 2019-08-29.
//

#include "Paciente.h"

Paciente::Paciente() {}

Paciente::Paciente(const std::string &nombre) : nombre(nombre) {}

Paciente::~Paciente() {

}

void Paciente::agregarDoctor(Doctor *_doctor) {
    doctores.push_back(_doctor);
}

std::ostream &operator<<(std::ostream &os, const Paciente &paciente) {
    unsigned int cantidadDoctores = paciente.doctores.size();
    if (cantidadDoctores == 0) {
        os << paciente.getNombre() << "no tiene doctores ahora mismo.";
        return os;
    }

    os << paciente.nombre << " esta consultando los siguientes doctores: ";
    for (unsigned int contador = 0; contador < cantidadDoctores; ++contador) {
        os << paciente.doctores[contador]->getNombre() << ', ';
    }

    return os;
}

const std::string &Paciente::getNombre() const {
    return nombre;
}

void Paciente::setNombre(const std::string &nombre) {
    Paciente::nombre = nombre;
}

const std::vector<Doctor *> &Paciente::getDoctores() const {
    return doctores;
}

void Paciente::setDoctores(const std::vector<Doctor *> &doctores) {
    Paciente::doctores = doctores;
}
