//
// Created by alonso on 31/05/19.
//

#ifndef POOII_CASILLA_ACCION_H
#define POOII_CASILLA_ACCION_H


#include "Casilla.h"

class Casilla_Accion: public Casilla  {
public:
    Casilla_Accion():Casilla(){}

    void accion(Jugador huesped) override = 0;

};


#endif //POOII_CASILLA_ACCION_H
