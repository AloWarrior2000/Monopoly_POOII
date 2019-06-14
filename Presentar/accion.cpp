//
// Created by cristian on 6/10/19.
//

#include "accion.h"
#include "jugador.h"
#include "tablero.h"
#include <iostream>


void Impuesto::ejecutar(Jugador * huesped, tablero* Monopoly) {
    cout << "Tiene que pagar un impuesto"<<endl;
    if (huesped->Dinero * porciento > imp) {
        cout << "Se pago " << imp<<endl;
        huesped->Dinero -= imp;
        Monopoly->pozo+=imp;
    } else {
        huesped->Dinero -= huesped->Dinero*porciento;
        cout << "Se pago " << huesped->Dinero * porciento<<endl;
        Monopoly->pozo+=huesped->Dinero*porciento;
    }
}

void GoToJail::ejecutar(Jugador * huesped, tablero* Monopoly) {
    huesped->free= false;
    huesped->posicion=Monopoly->jail;
    cout<<"El jugador hora esta en"<<huesped->nombre<<" esta en "<<huesped->posicion->nombre<<endl;
}

void ParadaLibre::ejecutar(Jugador *huesped, tablero* Monopoly) {
    huesped->Dinero+=Monopoly->pozo;
    cout << "El jugador " << huesped->nombre << " ha ganado " << Monopoly->pozo << "." << endl;
    Monopoly->pozo=0;
}


