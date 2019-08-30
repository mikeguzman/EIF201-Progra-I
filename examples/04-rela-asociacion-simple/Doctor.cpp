//
// Created by Maikol Guzman  on 2019-08-29.
//

#include "Doctor.h"

Doctor::Doctor() {}

Doctor::Doctor(const std::string &nombre) : nombre(nombre) {}

Doctor::~Doctor() {

}

void Doctor::agregarPaciente(Paciente *_paciente) {
    // Se va a agregar el paciente al doctor
    pacientes.push_back(_paciente);

    // El paciente va a agregar al doctor
    _paciente->agregarDoctor(this);
}

std::ostream &operator<<(std::ostream &os, const Doctor &doctor) {

    unsigned int cantidadPacientes = doctor.pacientes.size();
    if (cantidadPacientes == 0) {
        os << doctor.nombre << " no tiene pacientes ahora mismo";
        return os;
    }

    os << doctor.nombre << " esta atendiendo los siguientes pacientes: ";
    for (unsigned int cantidad = 0; cantidad < cantidadPacientes; ++cantidad) {
        os << doctor.pacientes[cantidad]->getNombre() << ', ';
    }

    return os;
}

const std::string &Doctor::getNombre() const {
    return nombre;
}

void Doctor::setNombre(const std::string &nombre) {
    Doctor::nombre = nombre;
}

const std::vector<Paciente *> &Doctor::getPacientes() const {
    return pacientes;
}

void Doctor::setPacientes(const std::vector<Paciente *> &pacientes) {
    Doctor::pacientes = pacientes;
}
