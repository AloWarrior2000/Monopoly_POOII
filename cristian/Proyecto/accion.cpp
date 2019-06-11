//
// Created by cristian on 6/10/19.
//

#include "accion.h"
#include "jugador.h"
#include "tablero.h"
#include <iostream>


void Impuesto::ejecutar(Jugador * huesped, tablero Monopoly) {
    cout << "Tiene que pagar un impuesto"<<endl;
    if (huesped->Dinero * porciento > imp) {
        cout << "Se pago " << imp<<endl;
        huesped->Dinero -= imp;
    } else {
        huesped->Dinero -= huesped->Dinero*porciento;
        cout << "Se pago " << huesped->Dinero * porciento;
    }
}

void GoToJail::ejecutar(Jugador * huesped, tablero Monopoly) {
    huesped->free= true;
    huesped->posicion=Monopoly.jail;
    cout<<"El jugador "<<huesped->nombre<<" esta en "<<huesped->posicion->nombre<<endl;
}

void ParadaLibre::ejecutar(Jugador *huesped, tablero Monopoly) {
    huesped->Dinero+=Pozo;
    cout << "El jugador " << huesped->nombre << " ha ganado " << Pozo << "." << endl;
    Pozo=0;
}


