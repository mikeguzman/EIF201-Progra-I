/*
 * =====================================================================================
 *
 *       Filename:  Racional.cpp
 *
 *    Description:  Clase que implementa los métodos
 *
 *        Created:  2019-07-31
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#include <iostream>     // std::cout
#include <cmath>        // std::abs
#include "Racional.h"

// Constructor Default
Racional::Racional() {
    setNumerador(0);
    setDenominador(1);
}

// Constructor Principal
Racional::Racional(int numerador, int denominador) : numerador(numerador), denominador(denominador) {}

// Función de prototypo
int Racional::calcularMCD(int num, int den) {
    int resultado = 0;

    if (den == 0) {
        resultado = num;
    } else {
        resultado = calcularMCD(den, num % den); // Función de recursividad (revisar el doc)
    }

    return resultado;
}

// Función referencias y parámetros de referencia
void Racional::simplificarFraccion(Racional &fraccion) {
    if (fraccion.numerador != 0) {
        // abs = retorna el valor absoluto de un parámetro, es parte de la libreria <math>
        int numeroMCD = calcularMCD(abs(fraccion.getNumerador()), fraccion.getDenominador());
        int numerador = fraccion.getNumerador() / numeroMCD;
        int denominador = fraccion.getDenominador() / numeroMCD;
        fraccion.setNumerador(numerador);
        fraccion.setDenominador(denominador);
    }
}

Racional Racional::sumFraccion(Racional fraccion) {
    Racional resultado;
    resultado.setNumerador(
            getNumerador() * fraccion.getDenominador() +
            getDenominador() * fraccion.getNumerador());
    resultado.setDenominador(getDenominador() * fraccion.getDenominador());
    simplificarFraccion(resultado);
    return resultado;
}

std::string Racional::obtenerString() {
    std::string resultado;
    resultado = std::to_string(getNumerador()) + "/" + std::to_string(getDenominador());
    return resultado;
}

int Racional::getNumerador() const {
    return numerador;
}

void Racional::setNumerador(int numerador) {
    Racional::numerador = numerador;
}

int Racional::getDenominador() const {
    return denominador;
}

void Racional::setDenominador(int denominador) {
    Racional::denominador = denominador;
}