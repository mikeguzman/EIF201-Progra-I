#include <iostream>
#include "Pabellon.h"

int main() {
    Pabellon* pabellon1 = new Pabellon('A', 'M', 10);
    Pabellon* pabellon2 = new Pabellon('B', 'H', 10);

    Cama* cama1 = new Cama("A8", true);
    Cama* cama2 = new Cama("B8", true);
    Cama* cama3 = new Cama("C4", false);
    Cama* cama4 = new Cama("D2", true);
    Cama* cama5 = new Cama("E3", false);

    pabellon1->agregarCama(cama1);
    pabellon1->agregarCama(cama2);

    pabellon2->agregarCama(cama3);
    pabellon2->agregarCama(cama4);
    pabellon2->agregarCama(cama5);

    // Imprime los pabellones
    std::cout << pabellon1->toString() << std::endl;
    std::cout << pabellon2->toString() << std::endl;

    // Elimina cama2 de pabellon1
    pabellon1->eliminarCama(cama2);
    std::cout << pabellon1->toString() << std::endl;

    // Elimina todas las camas de pabellon2
    pabellon2->eliminarTodasLasCamas();
    std::cout << pabellon2->toString() << std::endl;

    delete pabellon1;
    delete pabellon2;

    return 0;
}