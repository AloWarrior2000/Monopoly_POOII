//
// Created by alonso on 31/05/19.
//

#include <iostream>
#include "jugador.h"
#include "dado.h"

using namespace std;

void Jugador::avanzar(int casillas) {
    for (int i = 0; i < casillas; i++){
        posicion = posicion->next;
    }

    std::cout<<"\nEl jugador "<<nombre<<" avanzó hasta la casilla "<<posicion->nombre<<std::endl;
}

void Jugador::mostrar_propiedades()
{
    if(!compradas.empty()) {
        cout<<"Las propiedades que posee el jugador "<<nombre<<" son: "<<endl;
        for (int i = 0; i < compradas.size(); i++)
        {
            cout<<compradas.at(i)->nombre<<endl;
        }
    }
    else
    {
        cout<<"El jugador "<<nombre<<" no posee propiedades"<<endl;
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