#include "Punteros.h"

/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Main del Ejercicio de punteros básicos
 *
 *        Created:  2019-08-18
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

int main() {
    Punteros punteros;
    int valor1 = 5;
    int valor2 = 10;
    int valor3 = 10;

    Punteros::imprimirDatosPuntero(valor1);
    Punteros::imprimirDatosPunteroPorValor(valor2);
    Punteros::imprimirDatosPunteroPorReferencia(valor3);

    return 0;
}




