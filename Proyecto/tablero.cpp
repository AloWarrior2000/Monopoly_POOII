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
            casilla = new accion(i, nullptr, "Go");
            break;
        case 1:
            casilla = new propiedades(i, nullptr, "Marron1", 10, 5, 50);
            break;
        case 2:
            casilla = new accion(i, nullptr, "A");
            break;
        case 3:
            casilla = new propiedades(i, nullptr, "Marron2", 10, 5, 50);
            break;
        case 4:
            casilla = new accion(i, nullptr, "I");
            break;
        case 5:
            casilla = new ferrocarril(i, nullptr, "F1", 50, 50);
            break;
        case 6:
            casilla = new propiedades(i, nullptr, "Celeste1", 60, 6, 50);
            break;
        case 7:
            casilla = new accion(i, nullptr, "F");
            break;
        case 8:
            casilla = new propiedades(i, nullptr, "Celeste2", 80, 6, 50);
            break;
        case 9:
            casilla = new propiedades(i, nullptr, "Celeste3", 90, 6, 50);
            break;
        case 10:
            casilla = new accion(i, nullptr, "V");
            break;
        case 11:
            casilla = new propiedades(i, nullptr, "Morado1", 110, 12, 100);
            break;
        case 12:
            casilla = new compania(i, nullptr, "c1", 10, 5);
            break;
        case 13:
            casilla = new propiedades(i, nullptr, "Morado2", 40, 5, 100);
            break;
        case 14:
            casilla = new propiedades(i, nullptr, "Morado3", 42, 5, 100);
            break;
        case 15:
            casilla = new ferrocarril(i, nullptr, "F2", 50, 50);
            break;
        case 16:
            casilla = new propiedades(i, nullptr, "Naranja1", 60, 6, 50);
            break;
        case 17:
            casilla = new accion(i, nullptr, "A");
            break;
        case 18:
            casilla = new propiedades(i, nullptr, "Naranja2", 80, 6, 50);
            break;
        case 19:
            casilla = new propiedades(i, nullptr, "Naranja3", 90, 6, 50);
            break;
        case 20:
            casilla = new accion(i, nullptr, "Pl");
            break;
        case 21:
            casilla = new propiedades(i, nullptr, "Rojo1", 110, 12, 100);
            break;
        case 22:
            casilla = new accion(i, nullptr, "F");
            break;
        case 23:
            casilla = new propiedades(i, nullptr, "Rojo2", 40, 5, 100);
            break;
        case 24:
            casilla = new propiedades(i, nullptr, "Rojo3", 42, 5, 100);
            break;
        case 25:
            casilla = new ferrocarril(i, nullptr, "F3", 50, 50);
            break;
        case 26:
            casilla = new propiedades(i, nullptr, "Amaarillo1", 60, 6, 50);
            break;
        case 27:
            casilla = new compania(i, nullptr, "c2", 10, 5);
            break;
        case 28:
            casilla = new propiedades(i, nullptr, "Amarillo2", 80, 6, 50);
            break;
        case 29:
            casilla = new propiedades(i, nullptr, "Amarillo3", 90, 6, 50);
            break;
        case 30:
            casilla = new accion(i, nullptr, "GTJ");
            break;
        case 31:
            casilla = new propiedades(i, nullptr, "Verde1", 80, 6, 50);
            break;
        case 32:
            casilla = new propiedades(i, nullptr, "Verde2", 90, 6, 50);
            break;
        case 33:
            casilla = new accion(i, nullptr, "A");
            break;
        case 34:
            casilla = new propiedades(i, nullptr, "Verde3", 42, 5, 100);
            break;
        case 35:
            casilla = new ferrocarril(i, nullptr, "F4", 50, 50);
            break;
        case 36:
            casilla = new accion(i, nullptr, "C");
            break;
        case 37:
            casilla = new propiedades(i, nullptr, "azul1", 90, 6, 50);
            break;
        case 38:
            casilla = new accion(i, nullptr, "A");
            break;
        case 39:
            casilla = new propiedades(i, nullptr, "azul", 42, 5, 100);
            break;
    }


    return casilla;


}

tablero::tablero() {
    head_= nullptr;
    tail_= nullptr;
    size=0;
}
void tablero::creartablero() {
    for(int i=0;i<40;i++) {
        casilla *temp = crear(i);
        //temp= new comprables(temp->numero);
        if (tail_ != nullptr)
            tail_->next = temp;
        else
            head_ = temp;
        tail_ = temp;
        size++;
    }
    tail_->next=head_;
}
void tablero::imprimirtablero() {
    casilla* next;
    std::cout<<size;
    for (casilla* p = head_; p != nullptr; p = next) {
      next = p->next;
      std::cout<<p->nombre<<" ";

    }

}

