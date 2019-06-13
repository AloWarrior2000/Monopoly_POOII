//
// Created by fabrizio on 5/31/19.
//

#include <iostream>
#include "comprables.h"
#include "jugador.h"
#include "tablero.h"
using namespace std;
comprables::comprables(std::string _nombre, int _precio, int _alquiler):casilla(_nombre) {
    //nombre = _nombre;
    precio = _precio;
    alquiler = _alquiler;
    dueno = 0;
    disponible = true;
}
void comprables::ejecutar(Jugador* huesped) {
    string respuesta;
    if(disponible){
        do {
            cout << "Desea comprar la propiedad " << nombre << endl;
            cin >> respuesta;
        }while(respuesta != "si" && respuesta !="no");
        if(respuesta=="si"){
            if(huesped->Dinero >= precio){
                huesped->Dinero -= precio;
                disponible = false;
                huesped->compradas.push_back(huesped->posicion);
                dueno = huesped;
                cout << huesped->nombre << " compro " << huesped->posicion->nombre << endl;
            }
        }
        }
    else
    {
        cout<<"El jugador "<<huesped->nombre<<" le pagó "<<precio<<" al jugador "<<dueno->nombre<<endl;
        huesped->Dinero -= precio;
        dueno->Dinero += precio;
    }
    }


propiedades::propiedades(std::string _nombre, int _precio, int _alquiler,int _precio_casas):comprables(_nombre,_precio,_alquiler){
    casas=0;
    precio_casa=_precio_casas;
}

ferrocarril::ferrocarril(std::string _nombre, int _precio, int _alquiler):comprables(_nombre,_precio,_alquiler) {}

compania::compania(std::string _nombre, int _precio, int _alquiler):comprables(_nombre,_precio,_alquiler) {}