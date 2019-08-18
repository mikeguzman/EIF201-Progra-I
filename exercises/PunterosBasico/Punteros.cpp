//
// Created by Maikol Guzman  on 2019-08-18.
//

#include <iostream>
#include "Punteros.h"

Punteros::Punteros() = default;

int Punteros::valorAlCubo(int valor) {
    valor = valor * valor * valor;
    return valor;
}

int Punteros::valorAlCuboReferencia(int *valorPtr) {
    *valorPtr = *valorPtr * *valorPtr * *valorPtr;
    return *valorPtr;
}

void Punteros::imprimirDatosPuntero(int valor) {
    int *valorPtr = nullptr;

    valorPtr = &valor;

    std::cout << "Imprime datos básicos de los punteros ____________________\n"
              << std::endl;

    std::cout << "La dirección de &valor es " << &valor << "\nEl valor de edadPtr es "
              << valorPtr;

    std::cout << "\nEl valor de edad es: " << valor << "\nEl valor de *edadPtr es "
              << *valorPtr;

    std::cout << "\nSe muestra que * y & son inversos de cada uno."
              << "\n&*edadPtr = " << &*valorPtr << "\n*&edadPtr = " << *&valorPtr
              << std::endl;
}

void Punteros::imprimirDatosPunteroPorValor(int valor) {
    std::cout << "\nImprime datos de los punteros que se pasan por valor ____________________\n"
              << std::endl;
    std::cout << "El valor original de la variable 'valor2' es " << valor;

    valor = valorAlCubo(valor);

    std::cout << "\nEl resulado al cubo es: " << valor << std::endl;
}

void Punteros::imprimirDatosPunteroPorReferencia(int valor) {
    std::cout << "\nImprime datos de los punteros que se pasan por Referencia ____________________\n"
              << std::endl;
    std::cout << "El valor original de la variable 'valor3' es " << valor;

    valor = valorAlCuboReferencia(&valor);

    std::cout << "\nEl resulado al cubo es: " << valor << std::endl;
}
