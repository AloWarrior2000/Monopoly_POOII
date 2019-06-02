//
// Created by alonso on 31/05/19.
//

#include "Jugador.h"

void Jugador::avanzar(int casillas) {
    for (int i = 0; i < casillas; i++){
        posicion = posicion->Next;
    }
}