//
// Created by fabrizio on 5/31/19.
//

#include <iostream>
#include <ctime>
#include "tablero.h"
#include "comprables.h"
#include "accion.h"
//template<typename T>
casilla* tablero::crear(int i) {
    casilla* casilla;
    switch (i) {
        case 0:
            casilla = new Go("Go",730,710);
            break;
        case 1:
            casilla = new propiedades("Av. Mediterraneo",630 , 710 ,"Marron", 60, 2, 50);
            break;
        case 2:
            casilla = new ArcaComunal("Arca Comunal", 570, 710);
            break;
        case 3:
            casilla = new propiedades("Av. Baltica", 510, 710,"Marron", 60, 4, 50);
            break;
        case 4:
            casilla = new Impuesto("Impuesto", 450, 710,200,0.1);
            break;
        case 5:
            casilla = new ferrocarril("Ferrocarril Reading", 390, 710, 200, 50);
            break;
        case 6:
            casilla = new propiedades("Av. Oriental", 330, 710, "Celeste",100, 6, 50);
            break;
        case 7:
            casilla = new Fortuna("Fortuna", 270, 710);
            break;
        case 8:
            casilla = new propiedades("Av. Vermont", 210, 710, "Celeste", 100, 6, 50);
            break;
        case 9:
            casilla = new propiedades("Av. Connecticut", 150, 710, "Celeste", 120, 8, 50);
            break;
        case 10:
            casilla = new Jail("Jail", 90, 710);
            break;
        case 11:
            casilla = new propiedades("Plaza San Carlos", 90, 630,"Morado",140, 10, 100);
            break;
        case 12:
            casilla = new compania("Compania de Luz", 90, 570, 150, 1);
            break;
        case 13:
            casilla = new propiedades("Av. Estados", 90, 510,"Morado", 140, 10, 100);
            break;
        case 14:
            casilla = new propiedades("Av. Virginia", 90, 450,"Morado", 160, 10, 100);
            break;
        case 15:
            casilla = new ferrocarril("Ferrocarril Pensilvania", 90, 390, 200, 50);
            break;
        case 16:
            casilla = new propiedades("Plaza St James", 90, 330,"Naranja", 180, 14, 100);
            break;
        case 17:
            casilla = new ArcaComunal("Arca Comunal",90, 270);
            break;
        case 18:
            casilla = new propiedades("Av. Tennessee", 90, 210,"Naranja", 180, 14, 100);
            break;
        case 19:
            casilla = new propiedades("Av. New York", 90, 150,"Naranja", 200, 16, 100);
            break;
        case 20:
            casilla = new ParadaLibre("Parada Libre", 90, 90);
            break;
        case 21:
            casilla = new propiedades("Av. Kentucky", 150, 90,"Rojo", 220, 18, 150);
            break;
        case 22:
            casilla = new Fortuna("Fortuna", 210, 90);
            break;
        case 23:
            casilla = new propiedades("Av. Indiana",270 , 90,"Rojo", 220, 18, 150);
            break;
        case 24:
            casilla = new propiedades("Av. Illinois", 330, 90,"Rojo", 240, 20, 150);
            break;
        case 25:
            casilla = new ferrocarril("Ferrocarril By", 390, 90, 200, 50);
            break;
        case 26:
            casilla = new propiedades("Av. Atlantica", 450, 90,"Amarillo", 260, 22, 150);
            break;
        case 27:
            casilla = new compania("Compania de Agua", 510, 90, 150, 1);
            break;
        case 28:
            casilla = new propiedades("Av. Ventnor", 570, 90,"Amarillo", 260, 22, 150);
            break;
        case 29:
            casilla = new propiedades("Jardines Marvin", 630, 90, "Amarillo", 280, 24, 150);
            break;
        case 30:
            casilla = new GoToJail("Go To Jail", 730, 90);
            break;
        case 31:
            casilla = new propiedades("Av. Pacifico", 730, 150,"Verde", 300, 26, 200);
            break;
        case 32:
            casilla = new propiedades("Av. Carolina Del Norte", 730, 210,"Verde", 320, 28, 200);
            break;
        case 33:
            casilla = new ArcaComunal("Arca Comunal", 730, 270);
            break;
        case 34:
            casilla = new propiedades("Av. Pensilvania", 730, 330,"Verde", 350, 35, 200);
            break;
        case 35:
            casilla = new ferrocarril("Ferrocaril Via Rapida", 730, 390,200, 50);
            break;
        case 36:
            casilla = new Fortuna("Fortuna", 730, 450);
            break;
        case 37:
            casilla = new propiedades("Plaza Park", 730, 510, "Azul", 350, 35, 200);
            break;
        case 38:
            casilla = new Impuesto("Impuesto de Lujo", 730, 570,75,1);
            break;
        case 39:
            casilla = new propiedades("Paseo Tablado", 730, 630,"Azul", 400, 50, 200);
            break;
    }


    return casilla;


}


tablero::tablero(){
    head_= nullptr;
    pozo=100;
    casilla* tail_= nullptr;
    for(int i=0;i<40;i++) {
        casilla *temp = crear(i);
        if (tail_ != nullptr)
            tail_->next = temp;
        else
            head_ = temp;
            tail_ = temp;
        if(tail_->nombre=="Jail")
        {
            jail=tail_;
        }
    }
    tail_->next=head_;

    srand(time(NULL));
bool posible1=true,posible2=true;
int i=0,j=0;
do{
    int x=rand()%20;
    for(auto item:Baraja_Fortuna){
        if(x==item){
            posible1=false;
        }
    }
    if(posible1){
        Baraja_Fortuna.push_back(x);
        i++;
    }
    posible1=true;
}while(i<20);
do{
    int x=rand()%20;
    for(auto item:Baraja_Arca){
        if(x==item){
            posible2=false;
        }
    }
    if(posible2){
        Baraja_Arca.push_back(x);
        j++;
    }
    posible2=true;
}while(j<20);
}

void tablero::imprimirtablero() {
    casilla* n=head_;
    do{
        std::cout<<n->nombre<<" ";
        n=n->next;
    }while(n!=head_);
}

