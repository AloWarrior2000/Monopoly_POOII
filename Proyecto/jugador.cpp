//
// Created by fabrizio on 6/1/19.
//

#include <iostream>
#include "jugador.h"
#include "dado.h"
#include "tablero.h"
jugador::jugador(int _n, std::string _nombre,casilla* _lugar) {
    lugar=_lugar;
    n=_n;
    nombre=_nombre;
    dinero=1500;
    free=true;
    seguidas=0;
}

void jugador::mover() {
    dado a;
    dado b;
    int x,y;
    if(a.valor==b.valor){
        seguidas++;
    }
    std::cout<<a.valor+b.valor<<std::endl;
    for(int i=0;i<a.valor+b.valor;i++){
        casilla* aux;
        aux=lugar->next;
        lugar=aux;

    }

}