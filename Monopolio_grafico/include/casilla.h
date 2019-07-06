//
// Created by fabrizio on 5/31/19.
//

#ifndef PROYECTO_CASILLA_H
#define PROYECTO_CASILLA_H
#include <string>

using namespace std;

class Jugador;
class tablero;


class casilla {
public:
    string nombre;
    casilla* next;
    int posx;
    int posy;
   // casilla(string nombre):nombre{nombre},next{nullptr}{}
    casilla(string nombre, int posx, int posy):nombre{nombre},next{nullptr},posx{posx},posy{posy}{}
    virtual void ejecutar(Jugador* huesped, tablero* Monopoly){};
    virtual void ejecutar(Jugador* huesped, tablero* Monopoly, bool& txt_1, int& num){};
    virtual void ejecutar(Jugador* huesped, bool& txt_out1, bool selected, int selec, bool& txt_out2, bool& trans,bool& hipotecada,bool& pagar_alquiler, bool& no_compra,bool& alq_pagado){};
};


#endif //PROYECTO_CASILLA_H
