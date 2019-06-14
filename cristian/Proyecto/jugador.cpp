//
// Created by alonso on 31/05/19.
//

#include <iostream>
#include "jugador.h"
#include "comprables.h"

using namespace std;

void Jugador::avanzar(int casillas) {
    for (int i = 0; i < casillas; i++){
        posicion = posicion->next;
        if(posicion->nombre=="Go")
        {
            Dinero+=200;
        }
    }

    cout<<"\nEl jugador "<<nombre<<" avanzó hasta la casilla "<<posicion->nombre<<std::endl;
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

void Jugador::vender_casas() {
    bool posible=true;
    cout<<"En que propiedad desea vender las casas"<<endl;
    mostrar_propiedades();
    int respuesta;
    cin >> respuesta;
    respuesta -= 1;
    if(dynamic_cast<propiedades*>(compradas[respuesta]= nullptr)){
        cout<<"Ingrese una opcion valida"<<endl;
    }
    else{
        if(dynamic_cast<propiedades*>(compradas[respuesta])->casas=0){
            cout<<"No tiene casas esta propiedad"<<endl;
        }
        else{
            for(auto it:compradas){
                if(dynamic_cast<propiedades*>(compradas[respuesta])->casas< dynamic_cast<propiedades*>(it)->casas){
                    posible=false;
                }
            }
            if(posible){
                Dinero+= dynamic_cast<propiedades*>(compradas[respuesta])->precio_casa/2;
                dynamic_cast<propiedades*>(compradas[respuesta])->casas--;
                cout<<"Ahora la propiedad "<<dynamic_cast<propiedades*>(compradas[respuesta])->nombre<<" tiene "<<dynamic_cast<propiedades*>(compradas[respuesta])->casas<<" casas";
            }
        }
    }
}

void Jugador::hipotecar() {
    cout << "Que propiedad desea hipotecar?" << endl;
    mostrar_propiedades();
    bool posible = true;
    int respuesta;
    cin >> respuesta;
    respuesta -= 1;
    if (dynamic_cast<propiedades *>(compradas[respuesta])->casas != 0) {
        cout << "Debe vender las casas primero" << endl;
    } else {
        dynamic_cast<comprables *>(compradas[respuesta])->hipotecado = true;
        Dinero += dynamic_cast<comprables *>(compradas[respuesta])->precio / 2;
    }
}

void Jugador::deshipotecar() {
    cout<<"Que propiedad desea deshipotecar?"<<endl;
    mostrar_propiedades();
    int respuesta;
    cin >> respuesta;
    respuesta -= 1;
    auto aux = dynamic_cast<comprables*>(compradas[respuesta]);
    if(Dinero>aux->precio/2){
        aux->hipotecado=false;
        Dinero-=aux->precio/2;
        cout<<"Se ha deshipotecado la propiedad "<<aux->nombre<<endl;
    }
    else{
        cout<<"No tiene el dinero suficiente"<<endl;
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
        cout << "5. Deshipotecar mis propiedades"<< endl;
        cout << "6. Comprar casas" << endl;
        cout << "7. Vender casas" << endl;
        cout << "8. Bancarrota"<< endl;
        cin >> opcion;
        switch (opcion) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                mostrar_propiedades();
                break;
            case 4:
                hipotecar();
                break;
            case 5:
                deshipotecar();
                break;
            case 6:
                comprar_casas();
                break;
            case 7:
                vender_casas();
            case 8:
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
            if(!cartas_carcel.empty())
            {
                cartas_carcel.pop_back();
                free = true;
                cout<<"Tu carta fue usada con éxito, ahora eres libre"<<endl;
                break;
            }
            else
            {
                cout<<"No posees una carta para salir de la cárcel"<<endl;
                break;
            }
        case 4:
            Dinero-=50;
            cout << "Pagaste $50 al banco, ahora tienes " << Dinero;
            free = true;
            break;



    }
    if (turnos_seguidos < 3){
        turnos_seguidos+=1;
    }else{
        free = true;
    }
}