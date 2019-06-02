//
// Created by fabrizio on 6/1/19.
//

#include <cstdlib>
#include <random>
#include "dado.h"
#include <ctime>
#include <iostream>


dado::dado() {
    valor=rand()%6+1;
}

dado::~dado() {
//std::cout<<"borrado"<<std::endl;
}
