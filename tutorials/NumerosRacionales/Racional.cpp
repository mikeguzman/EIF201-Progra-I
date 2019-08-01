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
    setDenominator(1);
}

// Constructor Principal
Racional::Racional(int numerador, int denominator) : numerador(numerador), denominator(denominator) {}

int Racional::calcularMCD(int num, int den) {
    int resultado = 0;

    if (den == 0) {
        resultado = num;
    } else {
        resultado = calcularMCD(den, num % den);
    }

    return resultado;
}

void Racional::simplificarFraccion(Racional &fraccion) {
    if (fraccion.numerador != 0) {
        // abs = retorna el valor absoluto de un parámetro, es parte de la libreria <math>
        int numeroMCD = calcularMCD(abs(fraccion.numerador), fraccion.denominator);
        int numerador = fraccion.getNumerador() / numeroMCD;
        int denominador = fraccion.getDenominator() / numeroMCD;
        fraccion.setNumerador(numerador);
        fraccion.setDenominator(denominador);
    }

}

Racional Racional::sumFraccion(Racional fraccion) {
    Racional resultado;
    resultado.setNumerador(
            getNumerador() * fraccion.getDenominator() +
            getDenominator() * fraccion.getNumerador());
    resultado.setDenominator(getDenominator() * fraccion.getDenominator());
    simplificarFraccion(resultado);
    return resultado;
}

std::string Racional::obtenerString() {
    std::string resultado;
    resultado = std::to_string(getNumerador()) + "/" + std::to_string(getDenominator());
    return resultado;
}

int Racional::getNumerador() const {
    return numerador;
}

void Racional::setNumerador(int numerador) {
    Racional::numerador = numerador;
}

int Racional::getDenominator() const {
    return denominator;
}

void Racional::setDenominator(int denominator) {
    Racional::denominator = denominator;
}

