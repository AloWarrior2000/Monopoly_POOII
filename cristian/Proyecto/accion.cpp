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
        Monopoly->pozo += imp;
    } else {
        huesped->Dinero -= huesped->Dinero*porciento;
        Monopoly->pozo += huesped->Dinero*porciento;
        cout << "Se pago " << huesped->Dinero * porciento<<endl;
    }
}

void ArcaComunal::ejecutar(Jugador *huesped, tablero *Monopoly)
{
    int i= Monopoly->Arca.front();
    switch (i) {
        case 0:
            cout<<"**************************************************************"<<endl;
            cout<<"*                     ARCA COMUNAL                           *"<<endl;
            cout<<"**************************************************************"<<endl;
            cout<<"* Avance hasta la Av. Virginia, si pasa por GO cobre sus 200 *"<<endl;
            cout<<"*                                                            *"<<endl;
            cout<<"*                                                            *"<<endl;
            cout<<"*                                                            *"<<endl;
            cout<<"**************************************************************"<<endl;
            while(huesped->posicion->nombre!="Av. Virginia"){
            huesped->posicion=huesped->posicion->next;}
            cout<<huesped->nombre<<" se encuentra ahora en la casilla "<<huesped->posicion->nombre<<endl;
            huesped->posicion->ejecutar(huesped);
            break;
        case 1:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"Avance directamente hasta la casilla GO"<<endl;
            break;
        case 2:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"Apertura de la ópera. Cobre $50 de cada jugador para pagar sus butacas de apertura"<<endl;
            break;
        case 3:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"Su hospital exige un pago de $100"<<endl;
            break;
        case 4:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"Usted ha sido elegido presidente del consejo, pague $50 a cada jugador"<<endl;
            break;
        case 5:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"Usted hereda $100"<<endl;
            break;
        case 6:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"Salga de la cárcel gratis"<<endl;
            break;
        case 7:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"Le toca recibir $25 por servicios prestados"<<endl;
            break;
        case 8:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"¡Al calabozo! Vaya directamente a la cárcel sin pasar por GO ni cobrar $200"<<endl;
            break;
        case 9:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"Inicio de construcción de su nuevo parque de diversiones, pague $70 por gastos en materiales"<<endl;
            break;
        case 10:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"Su primo está en la cárcel, vaya directamente a la casilla de visita a cárcel para verlo (Si pasa por GO no cobre $200."<<endl;
            break;
        case 11:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"Se está dando un altercado en la Av. Pacífico, diríjase a esta casilla para solucionarlos (Si pasa por GO cobre $200"<<endl;
            break;
        case 12:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<" "<<endl;
            break;
        case 13:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"Morado2"<<endl;
            break;
        case 14:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"Morado3"<<endl;
            break;
        case 15:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"F2"<<endl;
            break;
        case 16:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"Naranja1"<<endl;
            break;
        case 17:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"A"<<endl;
            break;
        case 18:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"Naranja2"<<endl;
            break;
        case 19:
            cout<<" ****** ARCA COMUNAL ******"<<endl;
            cout<<"Naranja3"<<endl;
            break; }
}

void GoToJail::ejecutar(Jugador * huesped, tablero* Monopoly) {
    huesped->free= true;
    huesped->posicion=Monopoly->jail;
    cout<<"El jugador "<<huesped->nombre<<" esta en "<<huesped->posicion->nombre<<endl;
}

void ParadaLibre::ejecutar(Jugador *huesped, tablero* Monopoly) {
    huesped->Dinero+=Monopoly->pozo;
    cout << "El jugador " << huesped->nombre << " ha ganado " << Monopoly->pozo << "." << endl;
    Monopoly->pozo=0;
}

