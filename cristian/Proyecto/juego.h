//
// Created by alonso on 31/05/19.
//

#ifndef POOII_JUEGO_H
#define POOII_JUEGO_H

#include <string>
#include <iostream>
#include <vector>

#include "jugador.h"
#include "dado.h"
#include "tablero.h"


class Juego {
private:
    bool JuegoEnMarcha;
    int turno;
    int num_jugadores;
    dado dado1, dado2;
    std::vector<Jugador> Orden;

public:
    Juego()= default;

    void iniciar();
    void definir_jugadores();
    void bancarrota();
};


#endif //POOII_JUEGO_H
