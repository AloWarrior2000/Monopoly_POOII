//
// Created by alonso on 31/05/19.
//

#ifndef POOII_CASILLA_INICIO_H
#define POOII_CASILLA_INICIO_H

#include "Casilla_Comprable.h"
#include "Casilla_Accion.h"

class Casilla_Inicio : public Casilla_Accion{
private:
    Casilla* Reinicio;
public:
    Casilla_Inicio():Casilla_Accion(){Reinicio= nullptr;}

    void accion(Jugador huesped) override{}
    void pagar();

};


#endif //POOII_CASILLA_INICIO_H
