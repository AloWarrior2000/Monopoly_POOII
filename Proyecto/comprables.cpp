//
// Created by fabrizio on 5/31/19.
//

#include "comprables.h"

comprables::comprables(std::string _nombre, int _precio, int _alquiler):casilla(_nombre) {
    //nombre = _nombre;
    precio = _precio;
    alquiler = _alquiler;
    dueno = 0;
    libre = true;
}
propiedades::propiedades(std::string _nombre, int _precio, int _alquiler,int _precio_casas):comprables(_nombre,_precio,_alquiler){
    casas=0;
    precio_casa=_precio_casas;
}

ferrocarril::ferrocarril(std::string _nombre, int _precio, int _alquiler):comprables(_nombre,_precio,_alquiler) {}

compania::compania(std::string _nombre, int _precio, int _alquiler):comprables(_nombre,_precio,_alquiler) {}