//
// Created by fabrizio on 5/31/19.
//

#include <iostream>
#include "casilla.h"
#include "jugador.h"

casilla::casilla(std::string _nombre) {
    next= nullptr;
    nombre=_nombre;
}
void casilla::ejecutar(Jugador huesped) {
    //std::cout<<12;
}