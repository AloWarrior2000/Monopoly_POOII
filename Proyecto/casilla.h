//
// Created by fabrizio on 5/31/19.
//

#ifndef PROYECTO_CASILLA_H
#define PROYECTO_CASILLA_H


#include <string>
class Jugador;

class casilla {
public:
    std::string nombre;
    casilla* next;
    casilla(std::string);
    virtual void ejecutar(Jugador huesped);
};


#endif //PROYECTO_CASILLA_H
