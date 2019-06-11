//
// Created by fabrizio on 5/31/19.
//

#include <iostream>
#include "casilla.h"
#include "tablero.h"

class Jugador;

casilla::casilla(std::string _nombre) {
    next= nullptr;
    nombre=_nombre;
}
void casilla::ejecutar(Jugador* huesped, tablero Monopoly) {
    //std::cout<<12;
}

void casilla::ejecutar(Jugador* huesped)
{

}