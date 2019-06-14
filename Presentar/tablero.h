//
// Created by fabrizio on 5/31/19.
//

#ifndef PROYECTO_TABLERO_H
#define PROYECTO_TABLERO_H

#include "casilla.h"
#include <vector>
#include <deque>
#include "accion.h"

class tablero {
public:
    casilla* head_;
    casilla* jail;
    int pozo;
    deque<int> fortuna;
    deque<int> arcacomunal;
    tablero();
    void imprimirtablero();
    casilla* crear(int i);
};


#endif //PROYECTO_TABLERO_H
