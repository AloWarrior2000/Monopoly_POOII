//
// Created by fabrizio on 5/31/19.
//

#include "comprables.h"

comprables::comprables(int n, casilla* _next,std::string _nombre, int _precio, int _alquiler):casilla(n,_next,_nombre) {
    //nombre = _nombre;
    precio = _precio;
    alquiler = _alquiler;
    dueno = 0;
    libre = true;
}
propiedades::propiedades(int n, casilla* _next,std::string _nombre, int _precio, int _alquiler,int _precio_casas):comprables(n, _next,_nombre,_precio,_alquiler){
    casas=0;
    precio_casa=_precio_casas;
}

ferrocarril::ferrocarril(int n, casilla *next, std::string _nombre, int _precio, int _alquiler):comprables(n, next,_nombre,_precio,_alquiler) {}

compania::compania(int n, casilla *next, std::string _nombre, int _precio, int _alquiler):comprables(n, next,_nombre,_precio,_alquiler) {}