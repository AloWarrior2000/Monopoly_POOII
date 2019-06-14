//
// Created by alonso on 31/05/19.
//

#include <iostream>
#include "jugador.h"
#include "dado.h"
#include "comprables.h"

using namespace std;

void Jugador::avanzar(int casillas) {
    for (int i = 0; i < casillas; i++){
        posicion = posicion->next;
        if(posicion->nombre=="Go"){
            Dinero+=200;
        }
    }

    std::cout<<"\nEl jugador "<<nombre<<" avanzó hasta la casilla "<<posicion->nombre<<std::endl;
}

void Jugador::mostrar_propiedades()
{
    if(!compradas.empty()) {
        cout<<"Las propiedades que posee el jugador "<<nombre<<" son: "<<endl;
    for(int i=0;  i < compradas.size(); i++){
        auto aux= dynamic_cast<propiedades*>(compradas[i]);
        if(aux!= nullptr){
            if(aux->casas!=5)
                cout<< i+1 << ". " << aux->nombre<<" con "<<aux->casas<<" casas"<<endl;
            else
                cout<<i+1 << ". " << aux->nombre<<" con 1 hotel"<<endl;
        }
        else{

        cout<< i+1 << ". " << compradas[i]->nombre<<endl;
        }
    }
    }
    else
    {
        cout<<"El jugador "<<nombre<<" no posee propiedades"<<endl;
    }
}

void Jugador::comprar_casas() {
    cout << "A que propiedad quiere comprarle una casa" << endl;
    mostrar_propiedades();
    bool posible = true;
    int respuesta;
    cin >> respuesta;
    respuesta -= 1;
    int mismo_color = 0;
    auto destino = dynamic_cast<propiedades *>(compradas[respuesta]);
    for (auto it:compradas) {
        auto aux = dynamic_cast<propiedades *>(it);
        if (destino->color == aux->color) {
            mismo_color++;
            if (destino->casas > aux->casas | destino->casas==5) {
                posible = false;
            }
        }
    }
    if (posible) {
        if (destino->color == "Azul" | destino->color == "Marron") {
            if (mismo_color < 2) {
                cout << "Le faltan propiedades del mismo color" << endl;
            } else {
                if (Dinero > destino->precio_casa) {
                    Dinero -= destino->precio_casa;
                    destino->casas++;
                    destino->setAlquiler();
                    cout << "Compraste una casa" << endl;
                } else {
                    cout << "No tienes dinero" << endl;
                }
            }
        } else {
            if (mismo_color < 3) {
                cout << "Le faltan propiedades del mismo color" << endl;
            } else {
                if (Dinero > destino->precio_casa) {
                    Dinero -= destino->precio_casa;
                    destino->casas++;
                    destino->setAlquiler();
                    cout << "Compraste una casa"<<endl;
                } else {
                    cout << "No tienes dinero"<<endl;
                }
            }
        }
    }
    else{
        cout<<"No puede comprar una casa aqui"<<endl;
    }
}

void Jugador::opciones()
{
    int opcion;
    do {
        cout << "Ahora, ¿qué acción quieres realizar? Escribe el número de la opción que elija" << endl;
        cout << "1. Terminar mi turno" << endl;
        cout << "2. Negociar con otro jugador" << endl;
        cout << "3. Ver mis propiedades" << endl;
        cout << "4. Hipotecar mis propiedades" << endl;
        cout << "5. Comprar casas"<<endl;
        cin >> opcion;
        switch (opcion) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                mostrar_propiedades();
            case 4:
                break;
            case 5:
                comprar_casas();
                break;
        }
    }
    while(opcion!=1);

}

void Jugador::en_carcel(dado* A, dado* B) {
    int choice;
    do {
        cout << "Estas en la carcel, que quieres hacer : " << endl;
        cout << "1. Terminar mi turno" << endl;
        cout << "2. Lanzar los dados buscando pares" << endl;
        cout << "3. Usar tarjeta de Arca Comunal o Fortuna" << endl;
        cout << "4. Pagar $50 al banco" << endl;
        cin >> choice;
    }while(choice < 1 | choice > 4);
    switch (choice) {
        case 1:
            break;
        case 2:
        {int primero = A->lanzar();
            int segundo = B->lanzar();
            cout << "Salió " << primero << " y " << segundo << ", y estos números son ";
            if( primero == segundo ){
                cout << "iguales, eres libre!" << endl;
                free = true;
            }else{
                cout << "distintos, sigues atrapado." << endl;
            }
            break;}
        case 3:
            break;
        case 4:
            Dinero-=50;
            cout << "Pagaste $50 al banco, ahora tienes " << Dinero;
            free = true;
            break;



    }
    if (turnos_seguidos != 2){
        turnos_seguidos+=1;
    }else{
        free = true;
    }
}