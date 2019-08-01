/*
 * =====================================================================================
 *
 *       Filename:  Racional.h
 *
 *    Description:  Encabezado para definir la plantilla de los números racionales.
 *
 *        Created:  2019-07-31
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#ifndef NUMEROSRACIONALES_RACIONAL_H
#define NUMEROSRACIONALES_RACIONAL_H


class Racional {
    // Variables
    int numerador, denominator;
    // Métodos
    static int calcularMCD(int num, int den);

public:
    // Constructores
    Racional();
    Racional(int numerador, int denominator);

    // Métodos
    static void simplificarFraccion(Racional& fraccion);
    Racional sumFraccion(Racional fraccion);
    std::string obtenerString();
    int getNumerador() const;
    void setNumerador(int numerador);
    int getDenominator() const;
    void setDenominator(int denominator);
};


#endif //NUMEROSRACIONALES_RACIONAL_H
