//
// Created by alonso on 31/05/19.
//

#ifndef POOII_CASILLA_PROPIEDAD_H
#define POOII_CASILLA_PROPIEDAD_H

#include <string>
#include "Casilla.h"

class Casilla_Propiedad: public Casilla{
private:
    std::string color;
    int precio;
    int alquiler;
    int num_casas;
    bool ocupada;
    std::string dueño;


};


#endif //POOII_CASILLA_PROPIEDAD_H
