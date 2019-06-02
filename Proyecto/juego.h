//
// Created by fabrizio on 6/1/19.
//

#ifndef PROYECTO_JUEGO_H
#define PROYECTO_JUEGO_H


#include "tablero.h"
#include "jugador.h"
#include <vector>

class juego {
public:
    tablero base;
    std::vector<jugador> jugadores;
    juego();
    void crearjugadores();
    void verjugadores();
    void siguienteturno();

};


#endif //PROYECTO_JUEGO_H
