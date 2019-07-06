//
// Created by cristian on 6/6/19.
//

#ifndef PROYECTO_ACCION_H
#define PROYECTO_ACCION_H

#include <string>
#include "casilla.h"
#include <vector>
class tablero;

using namespace std;

class Impuesto: public casilla
{
    int imp;
    float porciento;
public:
    Impuesto(string nombre, int posx, int posy, int imp,float porciento):casilla(nombre, posx, posy),imp{imp},porciento{porciento}{}
    virtual void ejecutar(Jugador* huesped, tablero* Monopoly, bool& txt_1, int& num)override;
};

class ArcaComunal:public casilla {
private:
    string nombre;
public:
    ArcaComunal(string nombre, int posx, int posy):casilla(nombre, posx, posy){}
    void ejecutar(Jugador* huesped, tablero* Monopoly)override{};

};

class Fortuna:public casilla{
    string nombre;
public:
    Fortuna(string nombre, int posx, int posy):casilla(nombre, posx, posy){}
    void ejecutar(Jugador* huesped, tablero* Monopoly)override{};
};

class Jail:public casilla{
public:
    Jail(string nombre, int posx, int posy):casilla(nombre, posx ,posy){}
};

class ParadaLibre: public casilla{
public:
    ParadaLibre(string nombre, int posx, int posy):casilla(nombre, posx, posy){}
    void ejecutar(Jugador* huesped, tablero* Monopoly, bool& txt_1, int& num)override;
};

class Go:public casilla{
public:
    Go(string nombre, int posx, int posy):casilla(nombre, posx, posy){}
};

class GoToJail:public casilla{
public:
    GoToJail(string nombre, int posx, int posy):casilla(nombre, posx, posy){}
    void ejecutar(Jugador* huesped, tablero* Monopoly, bool& txt_1, int& num)override;
};


#endif //PROYECTO_ACCION_H
