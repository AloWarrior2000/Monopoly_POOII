//
// Created by alonso on 31/05/19.
//

#include "juego.h"
#include <random>
#include <time.h>

using namespace std;

void Juego::definir_jugadores() {
    do {
        std::cout << "Definir numero de jugadores (2 - 8): ";
        std::cin >> num_jugadores;
    } while (num_jugadores < 2 | num_jugadores > 8);
    std::cout << std::endl << "Ahora defina los jugadores en el orden en que jugarán." << std::endl;
    for (int i = 0; i < num_jugadores; ++i) {
        std::string name;
        std::cout << "Ingresar nombre del jugador " << i+1 << " : ";
        std::cin >> name;
        Jugador player(i, name);
        Orden.push_back(player);
        std::cout << std::endl;
    }
}

void Juego::next() {}

void Juego::bancarrota(){}

void Juego::iniciar() {
    srand(time(NULL));
    definir_jugadores();
    tablero mesa;

    mesa.imprimirtablero();
    for (int i = 0; i < num_jugadores; i++) {
        Orden[i].posicion = mesa.head_;
    }
    std::cout << std::endl << "##  ¡¡INICIA EL JUEGO!!  ##" << std::endl << std::endl;
    JuegoEnMarcha = true;
    int primero = 0, segundo, avance, en_turno = 0;
    while (JuegoEnMarcha) {
        if (en_turno == num_jugadores) {
            en_turno = 0;
        }
        std::cout<<std::endl;
        if(Orden[en_turno].free) {
            int seguidas=0;
            std::cout << "Presione enter para lanzar los dados" << std::endl;
            std::string vacio;
            std::cin >> vacio;
            do {
                primero = dado1.lanzar();
                segundo = dado2.lanzar();
                if(primero==segundo){
                    seguidas++;
                }
                if(seguidas==3){
                    Orden[en_turno].free= false;
                    Orden[en_turno].posicion=mesa.jail;
                    break;
                }
                avance = primero + segundo;
                Orden[en_turno].avanzar(avance);
                if ((dynamic_cast<GoToJail *>(Orden[en_turno].posicion)) ||
                    (dynamic_cast<Impuesto *>(Orden[en_turno].posicion)) ||
                    (dynamic_cast<ParadaLibre *>(Orden[en_turno].posicion))) {
                    Orden[en_turno].posicion->ejecutar(&Orden[en_turno], &mesa);
                } else {
                    Orden[en_turno].posicion->ejecutar(&Orden[en_turno]);
                }
                Orden[en_turno].opciones();
            }while(primero==segundo);
            en_turno++;
        }
        else{
            Orden[en_turno].en_carcel(&dado1, &dado2);
            en_turno++;
        }

    };

//        //      Orden[en_turno].posicion->accion(Orden[en_turno]);
//
//
//        JuegoEnMarcha = false;
}