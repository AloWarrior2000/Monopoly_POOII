//
// Created by alonso on 31/05/19.
//

#ifndef POOII_CASILLA_H
#define POOII_CASILLA_H


#include "Jugador.h"

class Casilla {
public:
    Casilla* Next;

    Casilla(){Next = nullptr;}
    virtual void accion(Jugador huesped)=0;
};



#endif //POOII_CASILLA_H
