//
// Created by fabrizio on 5/31/19.
//

#ifndef PROYECTO_COMPRABLES_H
#define PROYECTO_COMPRABLES_H


#include <string>
#include "casilla.h"

class comprables: public casilla {
public:
    //std::string nombre;
    int precio;
    int alquiler;
    int dueno;
    bool libre;
    comprables(int n, casilla* next,std::string _nombre, int _precio, int _alquiler);
};

class propiedades: public comprables{
public:
    int casas;
    int precio_casa;
    propiedades(int n, casilla *next, std::string _nombre, int _precio, int _alquiler,int _precio_casas);
};

class ferrocarril: public comprables{
public:
    ferrocarril(int n, casilla *next, std::string _nombre, int _precio, int _alquiler);

};

class compania:public  comprables{
public:
    compania(int n, casilla *next, std::string _nombre, int _precio, int _alquiler);
};

#endif //PROYECTO_COMPRABLES_H
