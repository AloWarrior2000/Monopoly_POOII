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
            casilla = new accion("Go");
            break;
        case 1:
            casilla = new propiedades("Marron1", 10, 5, 50);
            break;
        case 2:
            casilla = new accion("A");
            break;
        case 3:
            casilla = new propiedades("Marron2", 10, 5, 50);
            break;
        case 4:
            casilla = new accion("I");
            break;
        case 5:
            casilla = new ferrocarril("F1", 50, 50);
            break;
        case 6:
            casilla = new propiedades("Celeste1", 60, 6, 50);
            break;
        case 7:
            casilla = new accion("F");
            break;
        case 8:
            casilla = new propiedades("Celeste2", 80, 6, 50);
            break;
        case 9:
            casilla = new propiedades("Celeste3", 90, 6, 50);
            break;
        case 10:
            casilla = new accion("V");
            break;
        case 11:
            casilla = new propiedades("Morado1", 110, 12, 100);
            break;
        case 12:
            casilla = new compania("c1", 10, 5);
            break;
        case 13:
            casilla = new propiedades("Morado2", 40, 5, 100);
            break;
        case 14:
            casilla = new propiedades("Morado3", 42, 5, 100);
            break;
        case 15:
            casilla = new ferrocarril("F2", 50, 50);
            break;
        case 16:
            casilla = new propiedades("Naranja1", 60, 6, 50);
            break;
        case 17:
            casilla = new accion("A");
            break;
        case 18:
            casilla = new propiedades("Naranja2", 80, 6, 50);
            break;
        case 19:
            casilla = new propiedades("Naranja3", 90, 6, 50);
            break;
        case 20:
            casilla = new accion("Pl");
            break;
        case 21:
            casilla = new propiedades("Rojo1", 110, 12, 100);
            break;
        case 22:
            casilla = new accion("F");
            break;
        case 23:
            casilla = new propiedades("Rojo2", 40, 5, 100);
            break;
        case 24:
            casilla = new propiedades("Rojo3", 42, 5, 100);
            break;
        case 25:
            casilla = new ferrocarril("F3", 50, 50);
            break;
        case 26:
            casilla = new propiedades("Amaarillo1", 60, 6, 50);
            break;
        case 27:
            casilla = new compania("c2", 10, 5);
            break;
        case 28:
            casilla = new propiedades("Amarillo2", 80, 6, 50);
            break;
        case 29:
            casilla = new propiedades("Amarillo3", 90, 6, 50);
            break;
        case 30:
            casilla = new accion("GTJ");
            break;
        case 31:
            casilla = new propiedades("Verde1", 80, 6, 50);
            break;
        case 32:
            casilla = new propiedades("Verde2", 90, 6, 50);
            break;
        case 33:
            casilla = new accion("A");
            break;
        case 34:
            casilla = new propiedades("Verde3", 42, 5, 100);
            break;
        case 35:
            casilla = new ferrocarril("F4", 50, 50);
            break;
        case 36:
            casilla = new accion("C");
            break;
        case 37:
            casilla = new propiedades("azul1", 90, 6, 50);
            break;
        case 38:
            casilla = new accion("A");
            break;
        case 39:
            casilla = new propiedades("azul", 42, 5, 100);
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
    std::cout<<n->nombre;
}

