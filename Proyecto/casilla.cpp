//
// Created by fabrizio on 5/31/19.
//

#include "casilla.h"
casilla::casilla(std::string _nombre) {
    next= nullptr;
    nombre=_nombre;
    disponible= true;
}