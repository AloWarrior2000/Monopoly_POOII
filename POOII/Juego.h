//
// Created by alonso on 31/05/19.
//

#ifndef POOII_JUEGO_H
#define POOII_JUEGO_H


class Juego {
private:
    int turno;
    int num_jugadores;

public:
    Juego()= default;

    void iniciar();
    void next();
    void definir_jugadores();
    void finalizar();
};


#endif //POOII_JUEGO_H
