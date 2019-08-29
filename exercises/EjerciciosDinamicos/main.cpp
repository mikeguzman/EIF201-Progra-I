#include <iostream>
#include "Curso.h"

int main() {

    Estudiante estudiante1 ("Mike", 1234, 18);
    Estudiante estudiante2 ("Caro", 2354, 20);
    Estudiante estudiante3 ("Sebas", 5789, 20);
    Estudiante estudiante4 ("Emma", 7894, 18);

    Curso curso1("Progra 1");
    curso1.agregarCodigoEstudiantes(estudiante1.getCodigo());
    curso1.agregarCodigoEstudiantes(estudiante2.getCodigo());
    curso1.agregarCodigoEstudiantes(estudiante3.getCodigo());
    curso1.agregarCodigoEstudiantes(estudiante4.getCodigo());

    std::cout << "Curso: " << curso1.getNombre() << std::endl;
    std::cout << curso1.obtenerReporte() << std::endl;
    return 0;
}