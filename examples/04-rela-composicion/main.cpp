#include <iostream>
#include "Animacion.h"

int main() {
    std::string nombre;

    std::cout << "Digite el nombre de la animación: ";
    std::cin >> nombre;

    Animacion animacion(nombre, Punto2D(4,7));

    while (1) {
        int posX = 0;
        int posY = 0;

        std::cout << animacion << '\n';
        std::cout << "Digitar una nueva posicion X para la animación (-1 para salir): ";
        std::cin >> posX;
        if (posX == -1) {
            break;
        }

        std::cout << "Digitar una nueva posicion Y para la animación (-1 para salir): ";

        std::cin >> posY;
        if (posY == -1) {
            break;
        }

        animacion.moverseHacia(posX, posY);
    }

    return 0;
}