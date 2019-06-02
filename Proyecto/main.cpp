#include <iostream>
#include "tablero.h"
#include "juego.h"

int main() {
    srand(time(0));
    juego game;
    game.verjugadores();
    game.siguienteturno();
    //tablero juego;
    //juego.imprimirtablero();
    return 0;
}