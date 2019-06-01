//
// Created by fabrizio on 5/31/19.
//

#include "casilla.h"
casilla::casilla(int x, casilla *n,std::string _nombre) {
    numero=x;
    next=n;
    nombre=_nombre;
}