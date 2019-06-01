//
// Created by fabrizio on 5/31/19.
//

#ifndef PROYECTO_TABLERO_H
#define PROYECTO_TABLERO_H

#include "casilla.h"

class tablero {
public:
    casilla* tail_;
    casilla* head_;
    int size;
    tablero();
    void creartablero();
    void imprimirtablero();
};


#endif //PROYECTO_TABLERO_H
