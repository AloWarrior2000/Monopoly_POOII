//
// Created by fabrizio on 6/1/19.
//

#include <iostream>
#include "juego.h"
using namespace std;
juego::juego() {
    base=tablero();
    crearjugadores();
}

void juego::crearjugadores() {
    int n;
    string nombre;
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>nombre;
        jugadores.push_back(jugador(i, nombre, base.head_));
    }
}

void juego::verjugadores() {
    for(auto item:jugadores){
        cout<<item.nombre<<endl;
        cout<<item.lugar->nombre<<endl;
    }
}

void juego::siguienteturno() {
    for(auto item:jugadores){
        item.mover();
        cout<<item.lugar->nombre<<endl;
    }
}