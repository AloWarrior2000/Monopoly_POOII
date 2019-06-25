//
// Created by alonso on 31/05/19.
//

#include "juego.h"
#include <random>
#include <time.h>
#include "jugador.h"

using namespace std;

void Juego::definir_jugadores() {
    do {
        cout << "Definir numero de jugadores (2 - 8): ";
        cin >> num_jugadores;
    } while (num_jugadores < 2 | num_jugadores > 8);
    cout <<endl<< "Ahora defina los jugadores en el orden en que jugarán." <<endl;
    for (int i = 0; i < num_jugadores; ++i) {
        string name;
        cout << "Ingresar nombre del jugador " << i+1 << " : ";
        cin >> name;
        Jugador* player=new Jugador(i, name);
        Orden.push_back(player);
        cout << endl;
    }
}

void Juego::bancarrota(){}

void Juego::iniciar() {
    srand(time(NULL));
    definir_jugadores();
    tablero mesa;

//    mesa.imprimirtablero();
    for (int i = 0; i < num_jugadores; i++) {
        Orden[i]->posicion = mesa.head_;
    }
    cout << endl << "##  ¡¡INICIA EL JUEGO!!  ##" << endl << endl;
    JuegoEnMarcha = true;
    int primero, segundo, avance, en_turno = 0;
    while (JuegoEnMarcha) {
        if (en_turno == num_jugadores) {
            en_turno = 0;
        }
        cout << endl;
        cout << "Es el turno del jugador " << Orden[en_turno]->nombre << " tiene " << Orden[en_turno]->Dinero << endl;
        if (Orden[en_turno]->free) {
            int seguidas = 0;
            do {
                cout << "Presione enter para lanzar los dados" << std::endl;
                string vacio;
                cin >> vacio;
                primero = dado1.lanzar();
//                segundo = dado2.lanzar();
                    segundo=0;
                if (primero == segundo)
                    seguidas++;
                if (seguidas == 3) {
                    Orden[en_turno]->free = false;
                    Orden[en_turno]->posicion = mesa.jail;
                    cout
                            << "Tuviste 3 lanzamientos en los que tus dados obtuvieron números iguales, ahora te encuentras en la casilla "
                            << mesa.jail->nombre << endl;
                    break;
                }
                avance = primero + segundo;
                Orden[en_turno]->avanzar(avance);
                if ((dynamic_cast<GoToJail *>(Orden[en_turno]->posicion))
                    || (dynamic_cast<Impuesto *>(Orden[en_turno]->posicion))
                    || (dynamic_cast<ParadaLibre *>(Orden[en_turno]->posicion))
                    || (dynamic_cast<ArcaComunal *>(Orden[en_turno]->posicion))
                    || (dynamic_cast<Fortuna *>(Orden[en_turno]->posicion))) {
                    Orden[en_turno]->posicion->ejecutar(Orden[en_turno], &mesa);
                } else {
                    Orden[en_turno]->posicion->ejecutar(Orden[en_turno]);
                }
                while(Orden[en_turno]->deuda) {
                    cout<<"Debe pagar la deuda para seguir jugando"<<endl;
                    Orden[en_turno]->opciones(Orden);
                }
            } while (primero == segundo);

            Orden[en_turno]->mostrar_ofertas();
            Orden[en_turno]->opciones(Orden);
            en_turno++;

        } else {
            Orden[en_turno]->en_carcel(&dado1, &dado2);
            en_turno++;
        }

//        Orden[en_turno]->cambiar_alquileres();

    }
}

