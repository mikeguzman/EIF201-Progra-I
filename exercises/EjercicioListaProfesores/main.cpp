#include <iostream>
#include "Profesor.h"
#include "ListaProfesores.h"

int main() {

    Profesor profesor1(111, "Mike", 38, "Progra 1");
    Profesor profesor2(222, "Juan", 30, "Progra 2");
    Profesor profesor3(333, "Pedro", 31, "Progra 3");
    Profesor profesor4(444, "Ana", 28, "Estructuras");
    Profesor profesor5(555, "Sebas", 50, "Calculo");

    ListaProfesores* listaProfesores = new ListaProfesores();

    listaProfesores->insertarInicio(profesor1);
    listaProfesores->insertarInicio(profesor2);
    listaProfesores->insertarInicio(profesor3);
    listaProfesores->insertarInicio(profesor4);
    listaProfesores->insertarInicio(profesor5);

    std::cout << "Lista de profesores [" << listaProfesores->totalNodos() << "] \n" << listaProfesores->toString() << std::endl;

    // Se elimina el primer nodo
    listaProfesores->eliminarInicio();
    std::cout << "Lista de profesores [" << listaProfesores->totalNodos() << "] \n" << listaProfesores->toString() << std::endl;

    // Se elimina toda la lista
    delete(listaProfesores);
    std::cout << "Lista de profesores [" << listaProfesores->totalNodos() << "] \n" << listaProfesores->toString() << std::endl;

    return 0;
}