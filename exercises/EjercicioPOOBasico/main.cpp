#include <iostream>
#include "Profesor.h"
#include "Estudiante.h"
#include "ClaseEscuela.h"

int main() {

    // Profesor
    Profesor profesor1("Mike", 38, 200.000);

    // Estudiantes
    Estudiante estudiante1("Juan", 20, 001);
    Estudiante estudiante2("Pedro", 23, 002);
    Estudiante estudiante3("Ana", 21, 003);

    ClaseEscuela claseEscuela(profesor1);
    claseEscuela.agregarEstudiante(estudiante1);
    claseEscuela.agregarEstudiante(estudiante2);
    claseEscuela.agregarEstudiante(estudiante3);

    std::cout << "Profesor: " << claseEscuela.getProfesor().getNombre();
    std::cout << " Años: " << claseEscuela.getProfesor().getAno();
    std::cout << " Salario: " << claseEscuela.getProfesor().getSalario() << std::endl << std::endl;

    std::vector<Estudiante> estudiantes = claseEscuela.getEstudiantes();
    for ( int cont = 0; cont<estudiantes.size(); cont++ )
    {
        std::cout << "Estudiante: " << estudiantes[cont].getNombre();
        std::cout << " Años: " << estudiantes[cont].getAno();
        std::cout << " Código: " << estudiantes[cont].getCodigo() << std::endl;
    }

    std::cout << std::endl;

    float promedioAno = 0;
    // Obtiene todas las personas de la clase.
    std::vector<Persona> personas = claseEscuela.getAllPersons();
    for (int cont=0; cont < personas.size(); cont++ )
    {
        promedioAno += personas[cont].getAno();
    }
    promedioAno = promedioAno / personas.size();

    std::cout << "Hay un total de " << personas.size() << " personas en la clase (incluyendo al profesor)" << std::endl;
    std::cout << "El primedio de edad es: " << promedioAno;

    char c;
    std::cin >> c;

    return 0;
}