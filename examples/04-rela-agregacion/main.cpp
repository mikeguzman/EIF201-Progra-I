#include <iostream>
#include "Profesor.h"
#include "Departamento.h"

int main() {

    // Se crea un profesor fuera del alcance de Departamento
    Profesor *profesor = new Profesor("Mike");
    {
        // Crear un departamento y usar el constructor para pasar el parametro de profesor adentro
        Departamento departamento(profesor);
    } // Departamento fin del alcance

    // Profesor aún existe acá porque Departamento no elimina al Profesor
    std::cout << profesor->getNombre() << " aún existe!";

    delete profesor;

    return 0;
}