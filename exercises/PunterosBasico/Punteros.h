/*
 * =====================================================================================
 *
 *       Filename:  Punteros.h
 *
 *    Description:  Clase principal para Punteros
 *
 *        Created:  2019-08-18
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#ifndef PUNTEROSBASICO_PUNTEROS_H
#define PUNTEROSBASICO_PUNTEROS_H


class Punteros {
    static int numeroAlCuboValor(int);
    static int numeroAlCuboPuntero(int *);
    static int numeroAlCuboReferencia(int &);

public:
    Punteros();

    static void imprimirDatosPuntero();
    static void imprimirCalculoAlCuboReferenciaValor();
    static void imprimirCalculoAlCuboReferenciaPuntero();
    static void imprimirCalculoAlCuboReferenciaReferencia();
};


#endif //PUNTEROSBASICO_PUNTEROS_H
