//
// Created by alonso on 31/05/19.
//

#include <iostream>
#include "dado.h"

int dado::lanzar() {
    int lanzamiento = 1+ rand()%7;
    std::cout << "El dado saco " << lanzamiento << std::endl;

    return lanzamiento;
}