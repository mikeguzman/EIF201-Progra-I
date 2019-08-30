#include <iostream>
#include "Paciente.h"

int main() {
    // Crear los pacientes fuera del alcance del Doctor
    Paciente *paciente1 = new Paciente("Dave");
    Paciente *paciente2 = new Paciente("Frank");
    Paciente *paciente3 = new Paciente("Betsy");

    Doctor *doctor1 = new Doctor("James");
    Doctor *doctor2 = new Doctor("Scott");

    doctor1->agregarPaciente(paciente1);

    doctor2->agregarPaciente(paciente1);
    doctor2->agregarPaciente(paciente3);

    std::cout << *doctor1 << '\n';
    std::cout << *doctor2 << '\n';
    std::cout << *paciente1 << '\n';
    std::cout << *paciente2 << '\n';
    std::cout << *paciente3 << '\n';

    delete paciente1;
    delete paciente2;
    delete paciente3;

    delete doctor1;
    delete doctor2;

    return 0;
}