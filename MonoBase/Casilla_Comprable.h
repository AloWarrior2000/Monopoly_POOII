//
// Created by alonso on 31/05/19.
//

#ifndef POOII_CASILLA_COMPRABLE_H
#define POOII_CASILLA_COMPRABLE_H

#include <string>
#include "Casilla.h"

class Casilla_Comprable: public Casilla {
public:
    int precio, alquiler;
    std::string posedor;
    bool ocupada;
    Casilla_Comprable(int precio_, int alquiler_): Casilla(){posedor = ""; ocupada = false; precio = precio_; alquiler = alquiler_;}

    void accion(Jugador huesped) override=0;
};


#endif //POOII_CASILLA_COMPRABLE_H
