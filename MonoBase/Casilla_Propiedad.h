//
// Created by alonso on 31/05/19.
//

#ifndef POOII_CASILLA_PROPIEDAD_H
#define POOII_CASILLA_PROPIEDAD_H

#include <string>
#include "Casilla_Comprable.h"

class Casilla_Propiedad: public Casilla_Comprable{
public:
    std::string color, posedor;
    int precio, alquiler, num_casas;
    bool ocupada;

    Casilla_Propiedad(std::string color_, int precio_, int alquiler_):Casilla_Comprable(precio_, alquiler_){color = color_; num_casas = 0;}

    void accion(Jugador huesped) override;
};


#endif //POOII_CASILLA_PROPIEDAD_H
