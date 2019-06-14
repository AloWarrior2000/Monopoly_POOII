//
// Created by fabrizio on 5/31/19.
//

#ifndef PROYECTO_COMPRABLES_H
#define PROYECTO_COMPRABLES_H


#include <string>
#include "casilla.h"
#include "jugador.h"

class tablero;

class comprables: public casilla {
public:
    //std::string nombre;
    int precio;
    int alquiler;
    Jugador* dueno;
    bool disponible;
    virtual void setAlquiler(){};
    comprables(std::string _nombre, int _precio, int _alquiler);
    void ejecutar(Jugador* huesped)override;
};

class propiedades: public comprables{
public:
    std::string color;
    int casas;
    int precio_casa;
    void setAlquiler()override;
    propiedades(std::string _nombre,std::string color, int _precio, int _alquiler,int _precio_casas);
};

class ferrocarril: public comprables{
public:
    void setAlquiler()override;
    ferrocarril(std::string _nombre, int _precio, int _alquiler);

};

class compania:public  comprables{
public:
    void setAlquiler()override;
    compania(std::string _nombre, int _precio, int _alquiler);
};

#endif //PROYECTO_COMPRABLES_H
