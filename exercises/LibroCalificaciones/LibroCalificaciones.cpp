/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
 *
 *    Description:  Clase de Libro Calificaciones
 *
 *        Created:  2019-08-05
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#include "LibroCalificaciones.h"
#include <string>

LibroCalificaciones::LibroCalificaciones() {}

LibroCalificaciones::LibroCalificaciones(const std::string &nombreCurso, int nota) : nombreCurso(nombreCurso),
                                                                                     nota(nota) {}

std::string LibroCalificaciones::obtenerRangoLetra() {
    std::string resultado;

    if (getNota() >= 90 ) {
        resultado = "A";
    } else if (getNota() >= 80 ) {
        resultado = "B";
    } else if (getNota() >= 70 ) {
        resultado = "C";
    } else if (getNota() >= 60 ) {
        resultado = "D";
    } else {
        resultado = "F";
    }

    return resultado;
}

std::string LibroCalificaciones::obtenerMensaje() {
    std::string mensaje = "";

    mensaje = "El curso " + getNombreCurso() + " con la nota " + std::to_string(getNota()) + " pertenece al rango " +
              obtenerRangoLetra();

    return mensaje;
}


const std::string &LibroCalificaciones::getNombreCurso() const {
    return nombreCurso;
}

void LibroCalificaciones::setNombreCurso(const std::string &nombreCurso) {
    LibroCalificaciones::nombreCurso = nombreCurso;
}

int LibroCalificaciones::getNota() const {
    return nota;
}

void LibroCalificaciones::setNota(int nota) {
    LibroCalificaciones::nota = nota;
}