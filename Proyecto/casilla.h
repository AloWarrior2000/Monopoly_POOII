//
// Created by fabrizio on 5/31/19.
//

#ifndef PROYECTO_CASILLA_H
#define PROYECTO_CASILLA_H


#include <string>
#include "jugador.h"

class casilla {
public:
    std::string nombre;
    casilla* next;
    bool disponible;
    casilla(std::string);

    virtual void accion(Jugador huesped)=0;
};


#endif //PROYECTO_CASILLA_H
