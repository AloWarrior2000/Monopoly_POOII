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
    dueno= nullptr;
    disponible = true;
    hipotecado=false;
}
void comprables::ejecutar(Jugador* huesped) {
    if (disponible) {
        cout << "Desea comprar la propiedad " << nombre << " que cuesta " << precio << endl;
        string respuesta;
        cin >> respuesta;
        if (respuesta == "si") {
            if (huesped->Dinero >= precio) {
                huesped->Dinero -= precio;
                disponible = false;
                huesped->compradas.push_back(huesped->posicion);
                dueno = huesped;
		dynamic_cast<propiedades *>(huesped->posicion)->setAlquiler();
                cout << huesped->nombre << " compro " << huesped->posicion->nombre << endl;
            }
            
        }
    } else {
        if (hipotecado) {
            cout << "Se encuentra hipotecada" << endl;
        } else {
            do {
                if (huesped->Dinero > alquiler) {
                    if (dynamic_cast<compania *>(huesped->posicion) == nullptr) {
                        cout << "Debe pagarle a " << dueno->nombre << " un total de " << alquiler << endl;
                        huesped->Dinero -= alquiler;
                        dueno->Dinero += alquiler;
                    } else {
                        dado uno, dos;
                        cout << "Debe pagar " << alquiler * (uno.lanzar() + dos.lanzar()) << endl;
                        huesped->Dinero -= alquiler * (uno.lanzar() + dos.lanzar());
                        dueno->Dinero += alquiler * (uno.lanzar() + dos.lanzar());
                    }
                } else {
                    huesped->mostrar_propiedades();
                }
            }while(huesped->Dinero<alquiler);
            }
        }
    }


propiedades::propiedades(std::string _nombre,std::string _color, int _precio, int _alquiler,int _precio_casas):comprables(_nombre,_precio,_alquiler){
    color=_color;
    casas=0;
    precio_casa=_precio_casas;
}
void propiedades::setAlquiler() {
    int mismo_color = 0;
    if (casas == 0) {
        for (auto it:dueno->compradas) {
//        auto aux = dynamic_cast<propiedades *>(it);
            if (color == dynamic_cast<propiedades *>(it)->color) {
                mismo_color++;
            }
        }
        if (color == "Azul" | color == "Marron") {
            if (mismo_color == 2) {
                alquiler = alquiler * 2;
            }
        } else {
            if (mismo_color == 3) {
                alquiler = alquiler * 2;
            }
        }
    }
    else{
        switch (casas){
            case 1: alquiler=alquiler*5/2;
            case 2: alquiler=alquiler*3;
            case 3: alquiler=alquiler*5/2;
            case 4: alquiler=alquiler*5/4;
            case 5: alquiler=alquiler*6/5;
        }

    }
}



ferrocarril::ferrocarril(std::string _nombre, int _precio, int _alquiler):comprables(_nombre,_precio,_alquiler) {}

void ferrocarril::setAlquiler(){
    int numero_ferrocarriles=0;
    for(auto it:dueno->compradas){
        if(dynamic_cast<ferrocarril*>(it)!= nullptr){
            numero_ferrocarriles++;
        }
    }
    alquiler=alquiler*pow(2,numero_ferrocarriles-1);

}

compania::compania(std::string _nombre, int _precio, int _alquiler):comprables(_nombre,_precio,_alquiler) {}

void compania::setAlquiler() {
    int numero_compania=0;
    for(auto it:dueno->compradas){
        if(dynamic_cast<compania*>(it)!= nullptr){
            numero_compania++;
        }
    }
    if(numero_compania==2){
        alquiler=10;
    }
}
