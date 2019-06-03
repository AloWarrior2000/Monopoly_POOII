//
// Created by alonso on 31/05/19.
//

#include <iostream>
#include "jugador.h"

void Jugador::avanzar(int casillas) {
    for (int i = 0; i < casillas; i++){
        posicion = posicion->next;
    }

    std::cout<<"\nEl jugador "<<nombre<<" se encuentra en "<<posicion->nombre;
}