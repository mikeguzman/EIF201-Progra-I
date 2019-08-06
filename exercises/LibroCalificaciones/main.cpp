/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Main Libro Calificaciones
 *
 *        Created:  2019-08-05
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>
#include "LibroCalificaciones.h"

int main() {
    LibroCalificaciones cursoA("Contabilidad", 90);
    LibroCalificaciones cursoB("Gerencia", 85);
    LibroCalificaciones cursoC("Progra II", 73);
    LibroCalificaciones cursoD("Estructuras", 60);
    LibroCalificaciones cursoE("Adm. Proyectos", 59);
    LibroCalificaciones cursoF("Paradigmas", 40);

    std::cout << cursoA.obtenerMensaje() << std::endl;
    std::cout << cursoB.obtenerMensaje() << std::endl;
    std::cout << cursoC.obtenerMensaje() << std::endl;
    std::cout << cursoD.obtenerMensaje() << std::endl;
    std::cout << cursoE.obtenerMensaje() << std::endl;
    std::cout << cursoF.obtenerMensaje() << std::endl;

    return 0;
}