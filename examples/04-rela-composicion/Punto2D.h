//
// Created by Maikol Guzman  on 2019-08-29.
//

#ifndef INC_04_RELA_COMPOSICION_PUNTO2D_H
#define INC_04_RELA_COMPOSICION_PUNTO2D_H


#include <ostream>

class Punto2D {
    int posX;
    int posY;

public:
    Punto2D();

    Punto2D(int posX, int posY);

    virtual ~Punto2D();

    int getPosX() const;

    void setPosX(int posX);

    int getPosY() const;

    void setPosY(int posY);

    friend std::ostream &operator<<(std::ostream &os, const Punto2D &d);
};


#endif //INC_04_RELA_COMPOSICION_PUNTO2D_H
