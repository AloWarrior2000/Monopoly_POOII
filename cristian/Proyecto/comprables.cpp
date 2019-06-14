//
// Created by fabrizio on 5/31/19.
//

#include <iostream>
#include "comprables.h"
#include "jugador.h"
#include "tablero.h"
using namespace std;

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
        dynamic_cast<propiedades*>(huesped->posicion)->set_alquiler();
        }
    else
    {
        cout<<"El jugador "<<huesped->nombre<<" le pagó "<<alquiler<<" al jugador "<<dueno->nombre<<endl;
        huesped->Dinero -= precio;
        dueno->Dinero += precio;
    }
    }

void propiedades::set_alquiler()
{
    //Seteando alquiler para
int mismo_color = 0;
    for (auto it:dueno->compradas)
    {
        if (color == dynamic_cast<propiedades*>(it)->color) {
            mismo_color++;

        }
    }
    if(color == "Azul" || color=="Marron")
    {
        if(mismo_color==2)
        {
            alquiler = alquiler*2;
        }
    }
    else
    {
        if(mismo_color==3)
        {
            alquiler = alquiler*2;
        }
    }
    }

ferrocarril::ferrocarril(std::string _nombre, int _precio, int _alquiler):comprables(_nombre,_precio,_alquiler) {}

compania::compania(std::string _nombre, int _precio, int _alquiler):comprables(_nombre,_precio,_alquiler) {}