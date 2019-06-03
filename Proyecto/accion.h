//
// Created by fabrizio on 6/1/19.
//

#ifndef PROYECTO_ACCION_H
#define PROYECTO_ACCION_H


#include <string>
#include "casilla.h"

class accion: public casilla {
public:
    //std::string nombre;
    accion(std::string _nombre);
};


#endif //PROYECTO_ACCION_H
