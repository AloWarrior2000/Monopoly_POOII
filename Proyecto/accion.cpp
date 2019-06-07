//
// Created by fabrizio on 6/1/19.
//
#include <iostream>
#include "accion.h"
#include "jugador.h"
using namespace std;

Impuesto::Impuesto(std::string _nombre,int _imp, float _porciento):casilla(_nombre){
    imp=_imp;
    porciento=_porciento;
}

void Impuesto::ejecutar(Jugador * huesped) {
    cout << "Tiene que pagar un impuesto";
    if (huesped->Dinero * porciento > imp) {
        cout << "Se pago " << imp;
        huesped->Dinero -= imp;
    } else {
        huesped->Dinero -= huesped->Dinero*porciento;
        cout << "Se pago " << huesped->Dinero * porciento;
    }
}

GoToJail::GoToJail(std::string _nombre):casilla(_nombre) {
    casilla* jail=next;
    do{
        jail=jail->next;
    }while((jail->nombre!="Jail"));

}

void GoToJail::ejecutar(Jugador * huesped) {
    huesped->free= false;
    huesped->posicion=jail;
    cout<<"El jugador "<<huesped->nombre<<" esta en"<<huesped->posicion<<endl;
}


void ParadaLibre::ejecutar(Jugador *huesped) {
    huesped->Dinero+=Pozo;
    cout << "El jugador " << huesped->nombre << " ha ganado " << Pozo << "." << endl;
    Pozo = 0;
}

void Go::ejecutar(Jugador *huesped) {}