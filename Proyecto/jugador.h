//
// Created by fabrizio on 6/1/19.
//

#ifndef PROYECTO_JUGADOR_H
#define PROYECTO_JUGADOR_H


#include <string>
#include "casilla.h"
#include <vector>

class jugador {
public:
    casilla* lugar;
    int n;
    std::string nombre;
    std::vector<casilla> prop;
    int dinero;
    bool free;
    int seguidas;
    jugador(int n,std::string nombre,casilla* _lugar);
    void mover();
};


#endif //PROYECTO_JUGADOR_H
