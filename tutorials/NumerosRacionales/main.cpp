/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Numeros Racionales
 *
 *        Created:  2019-07-31
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>
#include "Racional.h"

int main() {
    Racional fraccionA(20, 8);
    Racional fraccionB(10, 4);
    Racional fraccionAux;

    std::cout << "\nTutorial -Números Racionales-\n" << std::endl;

    std::cout << "SIMPLIFICACIÓN de Fracción A: " << fraccionA.obtenerString() << std::endl;
    Racional::simplificarFraccion(fraccionA);
    std::cout << "RESULTADO: " << fraccionA.obtenerString() << std::endl;

    std::cout << "SIMPLIFICACIÓN de Fracción B: " << fraccionB.obtenerString() << std::endl;
    Racional::simplificarFraccion(fraccionB);
    std::cout << "RESULTADO: " << fraccionB.obtenerString() << std::endl;

    std::cout << "\nSUMAR FRACCIONES" << std::endl;
    fraccionAux = fraccionA.sumFraccion(fraccionB);
    std::cout << "RESULTADO: " << fraccionA.obtenerString() << " + " << fraccionB.obtenerString() <<
              " = " << fraccionAux.obtenerString() << std::endl;

    return 0;
}