//
// Created by fabrizio on 5/31/19.
//

#include <iostream>
#include "comprables.h"
#include "jugador.h"
using namespace std;
comprables::comprables(std::string _nombre, int _precio, int _alquiler):casilla(_nombre) {
    //nombre = _nombre;
    precio = _precio;
    alquiler = _alquiler;
    dueno = nullptr;
    disponible = true;
}
void comprables::ejecutar(Jugador* huesped) {
    if(disponible){
        cout<<"Desea comprar la propiedad "<< nombre<<endl;
        string respuesta;
        cin>>respuesta;
        if(respuesta=="si"){
            if(huesped->Dinero >= precio){
                huesped->Dinero -= precio;
                disponible = false;
                huesped->compradas.push_back(huesped->posicion);
                dueno=huesped;
                cout << huesped->nombre << " compro " << huesped->posicion->nombre << endl;
            }
        }
    }
    else{
        cout<<"Debe pagar a "<<dueno->nombre<<" un total de: "<<alquiler;
        huesped->Dinero-=alquiler;
        dueno->Dinero+=alquiler;
    }
}

propiedades::propiedades(std::string _nombre, int _precio, int _alquiler,int _precio_casas):comprables(_nombre,_precio,_alquiler){
    casas=0;
    precio_casa=_precio_casas;
}

ferrocarril::ferrocarril(std::string _nombre, int _precio, int _alquiler):comprables(_nombre,_precio,_alquiler) {}

compania::compania(std::string _nombre, int _precio, int _alquiler):comprables(_nombre,_precio,_alquiler) {}