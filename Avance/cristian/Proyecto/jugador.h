//
// Created by alonso on 31/05/19.
//

#ifndef POOII_JUGADOR_H
#define POOII_JUGADOR_H

#include<string>
#include <vector>
#include "casilla.h"
#include "dado.h"
#include "comprables.h"
#include "juego.h"

class Jugador{
public:

    casilla* posicion;
    int id, Dinero, turnos_seguidos;
    vector<int>oferta_dinero;
    vector<int>piden_dinero;
    string nombre;
    bool free,deuda;
    vector<int> cartas_carcel={};
    vector<comprables*> compradas;
    vector<vector<comprables*>> oferta_propiedades;
    vector<vector<comprables*>> piden_propiedades;
    vector<Jugador*>duenos_ofertas;



    Jugador(int id_, std::string nombre_){
        posicion = nullptr;
        id = id_;
        Dinero = 1500;
        turnos_seguidos = 0;
        nombre = nombre_;
        free = true;
        deuda=false;
        compradas = {};
        oferta_dinero={};
        oferta_propiedades={};
        piden_propiedades={};
        piden_dinero={};
        duenos_ofertas={};

    }
    void mostrar_ofertas();
    void avanzar(int casillas);
    void mostrar_propiedades();
    void hipotecar();
    void deshipotecar();
    void comprar_casas();
    void vender_casas();
    void opciones(vector<Jugador*> Orden);
    void negociar(vector<Jugador*> Orden);
    void en_carcel(dado* A, dado* B);


};


#endif //POOII_JUGADOR_H
