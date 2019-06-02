//
// Created by alonso on 31/05/19.
//

#ifndef POOII_CASILLA_TARJETA_H
#define POOII_CASILLA_TARJETA_H


#include <string>
#include "Casilla_Accion.h"

class Casilla_Tarjeta : public Casilla_Accion{
public:
    std::string tipo;

    Casilla_Tarjeta(std::string tipo_):Casilla_Accion(){tipo = tipo_;}

};


#endif //POOII_CASILLA_TARJETA_H
