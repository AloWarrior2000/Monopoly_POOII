//
// Created by fabrizio on 5/31/19.
//

#include <iostream>
#include "tablero.h"
#include "comprables.h"
#include "accion.h"
//template<typename T>
casilla* crear(int i){
    casilla* casilla;
    switch (i) {
        case 0:
            casilla = new Go("Go");
            break;
        case 1:
            casilla = new propiedades("Av. Mediterraneo", 60, 2, 50);
            break;
        case 2:
            casilla = new accion("Arca Comunal");
            break;
        case 3:
            casilla = new propiedades("Av. Báltica", 60, 4, 50);
            break;
        case 4:
            casilla = new Impuesto("Impuesto",200,0.1);
            break;
        case 5:
            casilla = new ferrocarril("Ferrocarril Reading", 200, 50);
            break;
        case 6:
            casilla = new propiedades("Av. Oriental", 100, 6, 50);
            break;
        case 7:
            casilla = new accion("Fortuna");
            break;
        case 8:
            casilla = new propiedades("Av. Vermont", 100, 6, 50);
            break;
        case 9:
            casilla = new propiedades("Av. Connecticut", 120, 8, 50);
            break;
        case 10:
            casilla = new Jail("Jail");
            break;
        case 11:
            casilla = new propiedades("Plaza San Carlos", 140, 10, 100);
            break;
        case 12:
            casilla = new compania("Compañia de Luz", 150, 1);
            break;
        case 13:
            casilla = new propiedades("Av. Estados", 140, 10, 100);
            break;
        case 14:
            casilla = new propiedades("Av. Virginia", 160, 10, 100);
            break;
        case 15:
            casilla = new ferrocarril("Ferrocarril Pensilvania", 200, 50);
            break;
        case 16:
            casilla = new propiedades("Plaza San James", 180, 14, 100);
            break;
        case 17:
            casilla = new accion("Arca Comunal");
            break;
        case 18:
            casilla = new propiedades("Av. Tennessee", 180, 14, 100);
            break;
        case 19:
            casilla = new propiedades("Av. New York", 200, 16, 100);
            break;
        case 20:
            casilla = new ParadaLibre("Parada Libre");
            break;
        case 21:
            casilla = new propiedades("Av. Kentucky", 220, 18, 150);
            break;
        case 22:
            casilla = new accion("Fortuna");
            break;
        case 23:
            casilla = new propiedades("Av. Indiana", 220, 18, 150);
            break;
        case 24:
            casilla = new propiedades("Av. Illinois", 240, 20, 150);
            break;
        case 25:
            casilla = new ferrocarril("Ferrocarril ByO", 200, 50);
            break;
        case 26:
            casilla = new propiedades("Av. Atlantica", 260, 22, 150);
            break;
        case 27:
            casilla = new compania("Compañia de Agua", 150, 1);
            break;
        case 28:
            casilla = new propiedades("Av. Ventnor", 260, 22, 150);
            break;
        case 29:
            casilla = new propiedades("Jardines Marvin", 280, 24, 150);
            break;
        case 30:
            casilla = new GoToJail("Go To Jail");
            break;
        case 31:
            casilla = new propiedades("Av. Pacifico", 300, 26, 200);
            break;
        case 32:
            casilla = new propiedades("Av. Carolina Del Norte", 320, 28, 200);
            break;
        case 33:
            casilla = new accion("Arca Comunal");
            break;
        case 34:
            casilla = new propiedades("Av. Pensilvania", 350, 35, 200);
            break;
        case 35:
            casilla = new ferrocarril("Ferrocaril Vía Rápida", 200, 50);
            break;
        case 36:
            casilla = new accion("Fortuna");
            break;
        case 37:
            casilla = new propiedades("Plaza Park", 350, 35, 200);
            break;
        case 38:
            casilla = new Impuesto("Impuesto de Lujo",75,1);
            break;
        case 39:
            casilla = new propiedades("Paseo Tablado", 400, 50, 200);
            break;
    }


    return casilla;


}

tablero::tablero() {
    head_= nullptr;
    casilla* tail_= nullptr;
    for(int i=0;i<40;i++) {
        casilla *temp = crear(i);
        if (tail_ != nullptr)
            tail_->next = temp;
        else
            head_ = temp;
        tail_ = temp;
    }
    tail_->next=head_;
}

void tablero::imprimirtablero() {
    casilla* n=head_;
    do{
        std::cout<<n->nombre<<" ";
        n=n->next;
    }while(n!=head_);
}

