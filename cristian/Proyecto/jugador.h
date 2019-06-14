//
// Created by alonso on 31/05/19.
//

#ifndef POOII_JUGADOR_H
#define POOII_JUGADOR_H

#include<string>
#include <vector>
#include "casilla.h"
#include "dado.h"

class Jugador {
public:
    casilla* posicion;
    int id, Dinero, turnos_seguidos;
    string nombre;
    bool free;
    vector<int> cartas_carcel={};
    vector<casilla*> compradas;

    Jugador(int id_, std::string nombre_){
        posicion = nullptr;
        id = id_;
        Dinero = 1500;
        turnos_seguidos = 0;
        nombre = nombre_;
        free = true;
        compradas = {};
    }
    void comprar_casas();
    void avanzar(int casillas);
    void mostrar_propiedades();
    void opciones();
    void en_carcel(dado* A, dado* B);


};


#endif //POOII_JUGADOR_H
