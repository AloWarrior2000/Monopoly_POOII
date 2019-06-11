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
    //srand(time(NULL));
    definir_jugadores();
    tablero mesa;

    //mesa.imprimirtablero();
    for (int i = 0; i < num_jugadores; i++) {
        Orden[i].posicion = mesa.head_;
    }
    std::cout << std::endl << "##  ¡¡INICIA EL JUEGO!!  ##" << std::endl << std::endl;
    JuegoEnMarcha = true;
    int primero, segundo, avance, en_turno = 0;
    while (JuegoEnMarcha) {
        if (en_turno == num_jugadores) {
            en_turno = 0;
        }
        std::cout<<std::endl;
        cout<<"Es el turno del jugador "<<Orden[en_turno].nombre<<" tiene "<<Orden[en_turno].Dinero<<endl;
        if (Orden[en_turno].free) {
            std::cout << "Presione enter para lanzar los dados" << std::endl;
            std::string vacio;
            std::cin >> vacio;
            primero = dado1.lanzar();
            segundo = dado2.lanzar();
            avance = primero + segundo;
            Orden[en_turno].avanzar(avance);
            Orden[en_turno].posicion->ejecutar(&Orden[en_turno]);
            Orden[en_turno].opciones();
            en_turno++;
        }else{
            Orden[en_turno].en_carcel(&dado1, &dado2);
            en_turno++;
        }

    };

//        //      Orden[en_turno].posicion->accion(Orden[en_turno]);
//
//
//        JuegoEnMarcha = false;
}