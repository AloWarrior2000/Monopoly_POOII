//
// Created by fabrizio on 6/1/19.
//

#ifndef PROYECTO_ACCION_H
#define PROYECTO_ACCION_H


#include <string>
#include "casilla.h"

class Impuesto: public casilla {
    int imp;
    float porciento;
public:
    Impuesto(std::string,int,float);
    void ejecutar(Jugador*)override;
};

class GoToJail:public casilla{
public:
    casilla* jail;
    GoToJail(std::string);
    void ejecutar(Jugador*)override;
};

class Jail:public casilla{
public:
    Jail(std::string _nombre):casilla(_nombre){}
};

class ParadaLibre: public casilla{
public:
    int Pozo;
    ParadaLibre(std::string _nombre):casilla(_nombre){}
    void ejecutar(Jugador*)override;
};

class Go:public casilla{
public:
    Go(std::string _nombre):casilla(_nombre){}
    void ejecutar(Jugador*)override;
};
#endif //PROYECTO_ACCION_H
