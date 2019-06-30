//
// Created by alonso on 31/05/19.
//

#ifndef POOII_JUEGO_H
#define POOII_JUEGO_H

#include <string>
#include <iostream>
#include <vector>

//#include "jugador.h"
#include "dado.h"
#include "tablero.h"


class Juego {
private:
    bool JuegoEnMarcha;
    int turno;
    int num_jugadores;
    dado dado1, dado2;
    vector<Jugador*> Orden;

public:
    Juego()= default;

    void iniciar();
    void definir_jugadores();
    void bancarrota();
};


#endif //POOII_JUEGO_H
//if (Orden[en_turno]->negocia){
//int respuesta;
//cout<<"Con quien desea negociar?";
//for(auto item:Orden){
//if(item->nombre != Orden[en_turno]->nombre){
//cout<<item->id<<" "<<item->nombre<<endl;
//cin>>respuesta;
//}
//negociar(Orden[en_turno],Orden[respuesta]);
//}
//
//}