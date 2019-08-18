//
// Created by Maikol Guzman  on 2019-08-18.
//

#ifndef PUNTEROSBASICO_PUNTEROS_H
#define PUNTEROSBASICO_PUNTEROS_H


class Punteros {
    static int valorAlCubo(int);
    static int valorAlCuboReferencia(int *);

public:
    Punteros();

    static void imprimirDatosPuntero(int valor);
    static void imprimirDatosPunteroPorValor(int valor);
    static void imprimirDatosPunteroPorReferencia(int valor);
};


#endif //PUNTEROSBASICO_PUNTEROS_H
