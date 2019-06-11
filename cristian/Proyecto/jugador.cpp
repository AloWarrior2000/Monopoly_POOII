//
// Created by alonso on 31/05/19.
//

#include <iostream>
#include "jugador.h"

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

void Jugador::opciones_en_carcel()

{
    int eleccion;
    cout<< "Estás en la cárcel, no puedes continuar"<<endl;
    cout<< "Solo puedes elegir una de las siguientes acciones para intentar salir:"<<endl;
    cout<< "1. Lanzar los dados, buscando números repetidos"<<endl;
    cout<< "2. Pagar $50 al banco"<<endl;
    cout<< "3. Utilizar mi tarjeta para salir de la cárcel"<<endl;
    cout<< "4. Saltar turno"<<endl;
    cin>> eleccion;
    switch(eleccion)
    {
        case 1:

        case 2:
            Dinero-=50;
            cout<< "Pagaste $50 y ahora tienes " << Dinero<< endl;
        case 3:

        case 4:;

    }
}