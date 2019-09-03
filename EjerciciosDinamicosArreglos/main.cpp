#include <iostream>
#include "Curso.h"

int main() {

    Curso curso1 ("Progra 1");

    curso1.agregarCodigoEstudiantes(0, 1234);
    curso1.agregarCodigoEstudiantes(1, 2343);
    curso1.agregarCodigoEstudiantes(2, 3423);
    curso1.agregarCodigoEstudiantes(3, 7567);
    curso1.agregarCodigoEstudiantes(4, 4444);

    std::cout << "Nombre del curso: " << curso1.getNombre() << std::endl;
    std::cout << "Lista de códigos: " << curso1.toString() << std::endl;

    // Punteros a Matrices
    // Ejemplo: int array[10][5];

    int **array = new int*[10]; // allocate an array of 10 int pointers — these are our rows
    for (int count = 0; count < 10; ++count) {
        int *tmp_array = new int[5];
        for (int cont = 0; cont < 5; cont++)
        {
            tmp_array[cont] = cont;
        }
        array[count] = new int[5]; // these are our columns
        array[count] = tmp_array;
    }

    for (int fila = 0; fila < 10; ++fila) {
        std::string textoColumna = "";
        for (int col = 0; col < 5; ++col) {
            textoColumna +=  "Col [" + std::to_string(col) +  "], Valor: [" + std::to_string(array[fila][col]) +
                    "], ";
        }
        std::cout << "Fila ["<< fila << "] " << textoColumna << std::endl;
    }

    return 0;
}