//
// Created by alonso on 31/05/19.
//

#include <iostream>
#include "dado.h"
#include <random>


int dado::lanzar() {
    int lanzamiento = 1+ rand()%6;
    std::cout << "El dado saco " << lanzamiento << std::endl;
    //return 15;
    return lanzamiento;
}