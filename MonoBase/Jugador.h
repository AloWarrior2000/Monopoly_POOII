//
// Created by alonso on 31/05/19.
//

#ifndef POOII_JUGADOR_H
#define POOII_JUGADOR_H

#include<string>
#include <vector>
#include "Casilla_Comprable.h"

class Jugador {
public:
    Casilla* posicion;
    int id, Dinero, turnos_seguidos;
    std::string nombre;
    bool free;
    std::vector<Casilla_Comprable> compradas;

    Jugador(int id_, std::string nombre_){
        posicion = nullptr;
        id = id_;
        Dinero = 1500;
        turnos_seguidos = 0;
        nombre = nombre_;
        free = true;
        compradas = {};
    }

    void avanzar(int casillas);


};


#endif //POOII_JUGADOR_H
