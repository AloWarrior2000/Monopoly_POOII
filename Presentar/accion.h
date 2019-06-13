//
// Created by cristian on 6/6/19.
//

#ifndef PROYECTO_ACCION_H
#define PROYECTO_ACCION_H

#include <string>
#include "casilla.h"
class tablero;

using namespace std;

class Impuesto: public casilla
{
    int imp;
    float porciento;
public:
    Impuesto(string nombre,int imp,float porciento):casilla(nombre),imp{imp},porciento{porciento}{}
    void ejecutar(Jugador* huesped, tablero* Monopoly)override;
};

class ArcaComunal:public casilla {
    string nombre;
public:
    ArcaComunal(string nombre):casilla( nombre){}

};

class Fortuna:public casilla{
    string nombre;
public:
    Fortuna(string nombre):casilla(nombre){}
};

class Jail:public casilla{
public:
    Jail(string nombre):casilla(nombre){}
};

class ParadaLibre: public casilla{
public:
    ParadaLibre(string nombre):casilla(nombre){}
    void ejecutar(Jugador* huesped, tablero* Monopoly)override;
};

class Go:public casilla{
public:
    Go(string nombre):casilla(nombre){}
};

class GoToJail:public casilla{
public:
    GoToJail(string nombre):casilla(nombre){}
    void ejecutar(Jugador* huesped, tablero* Monopoly)override;
};


#endif //PROYECTO_ACCION_H
