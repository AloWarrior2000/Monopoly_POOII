//
// Created by cristian on 6/10/19.
//

#include "accion.h"
#include "jugador.h"
#include <iostream>


void Impuesto::ejecutar(Jugador * huesped) {
    cout << "Tiene que pagar un impuesto"<<endl;
    if (huesped->Dinero * porciento > imp) {
        cout << "Se pago " << imp<<endl;
        huesped->Dinero -= imp;
    } else {
        huesped->Dinero -= huesped->Dinero*porciento;
        cout << "Se pago " << huesped->Dinero * porciento;
    }
}

void GoToJail::ejecutar(Jugador * huesped) {
    huesped->free= false;
    //huesped->posicion=jail;
    do{
        huesped->posicion=huesped->posicion->next;
    }while (huesped->posicion->nombre!="Jail");
    cout<<"El jugador "<<huesped->nombre<<" esta en "<<huesped->posicion->nombre<<endl;
}

void ParadaLibre::ejecutar(Jugador *huesped) {
    huesped->Dinero+=Pozo;
    cout << "El jugador " << huesped->nombre << " ha ganado " << Pozo << "." << endl;
    Pozo=0;
}

