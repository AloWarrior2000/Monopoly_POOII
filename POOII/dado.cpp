//
// Created by alonso on 31/05/19.
//

#include "dado.h"

int dado::lanzar() {
    int lanzamiento = 1+ rand()%7;

    return lanzamiento;
}