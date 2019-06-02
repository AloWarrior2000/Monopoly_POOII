//
// Created by alonso on 31/05/19.
//

#include <iostream>
#include "Tablero.h"
#include "Casilla_Inicio.h"
#include "Casilla_Propiedad.h"
#include "Casilla_Impuesto.h"
#include "Casilla_Tarjeta.h"
#include "Ferrocarril.h"
#include "Carcel.h"
#include "Servicios.h"

Tablero::Tablero() {
    Casilla_Inicio go;
    head = &go;
    Casilla_Propiedad AvMediterraneo("marron", 60, 2);
    go.Next = &AvMediterraneo;
    Casilla_Tarjeta Arca1("ArcaComunal");
    AvMediterraneo.Next = &Arca1;
    Casilla_Propiedad AvBaltica("marron", 60, 4);
    Arca1.Next = &AvBaltica;
    Casilla_Impuesto impuesto1;
    AvBaltica.Next = &impuesto1;
    Ferrocarril Reading;
    impuesto1.Next = &Reading;
    Casilla_Propiedad AvOriental("celeste", 100, 6);
    Reading.Next = &AvOriental;
    Casilla_Tarjeta Fort1("Fortuna");
    AvOriental.Next = &Fort1;
    Casilla_Propiedad AvVermont("celeste", 100, 6);
    Fort1.Next = &AvVermont;
    Casilla_Propiedad AvConnecticut("celeste", 120, 8);
    AvVermont.Next = &AvConnecticut;
    Casilla_Accion Carcel;
    AvConnecticut.Next = &Carcel;

    Casilla_Propiedad PlazaSanCarlos("fuccia", 140, 10);
    Carcel.Next = &PlazaSanCarlos;
    Servicios Luz;
    PlazaSanCarlos.Next = &Luz;
    Casilla_Propiedad AvEstados("fuccia", 140, 10);
    Luz.Next = &AvEstados;
    Casilla_Propiedad AvVirginia("fuccia", 160, 12);
    AvEstados.Next = &AvVirginia;
    Ferrocarril Pensilvania;
    AvVirginia.Next = &Pensilvania;
    Casilla_Propiedad PlazaSanJames("naranja", 180, 14);
    Pensilvania.Next = &PlazaSanJames;
    Casilla_Tarjeta Arca2("ArcaComunal");
    PlazaSanJames.Next = &Arca2;
    Casilla_Propiedad AvTennessee("naranja", 180, 14);
    Arca2.Next = &AvTennessee;
    Casilla_Propiedad AvNewYork("naranja", 200, 16);
    AvTennessee.Next = &AvNewYork;
    Casilla_Accion ParadaLibre;
    AvNewYork.Next = &ParadaLibre;

    Casilla_Propiedad AvKentucky("roja", 220, 18);
    ParadaLibre.Next = &AvKentucky;
    Casilla_Tarjeta Fort2("Fortuna");
    AvKentucky.Next = &Fort2;
    Casilla_Propiedad AvIndiana("roja", 220, 18);
    Fort2.Next = &AvIndiana;
    Casilla_Propiedad AvIllinois("roja", 240, 20);
    AvIndiana.Next = &AvIllinois;
    Ferrocarril ByO;
    AvIllinois.Next = &ByO;
    Casilla_Propiedad AvAtlantica("amarilla", 260, 22);
    ByO.Next = &AvAtlantica;
    Casilla_Propiedad AvVentnor("amarilla", 260, 22);
    AvAtlantica.Next = &AvVentnor;
    Servicios Agua;
    AvVentnor.Next = &Agua;
    Casilla_Propiedad JardinesMarvin("amarilla", 280, 24);
    Agua.Next = &JardinesMarvin;
    Casilla_Accion GTJ;
    JardinesMarvin.Next = &GTJ;

    Casilla_Propiedad AvPacifico("verde", 300, 26);
    GTJ.Next = &JardinesMarvin;
    Casilla_Propiedad AvCarolinaDelNorte("verde", 300, 26);
    JardinesMarvin.Next = &AvCarolinaDelNorte;
    Casilla_Tarjeta Arca3("ArcaComunal");
    AvCarolinaDelNorte.Next = &Arca3;
    Casilla_Propiedad AvPensilvania("verde", 320, 28);
    Arca3.Next = &AvPensilvania;
    Ferrocarril ViaRapida;
    AvPensilvania.Next = &ViaRapida;
    Casilla_Tarjeta Fort3("Fortuna");
    ViaRapida.Next = &Fort3;
    Casilla_Propiedad PlazaPark("azul", 350, 35);
    Fort3.Next = &PlazaPark;
    Casilla_Impuesto impuestolujo;
    PlazaPark.Next = &impuestolujo;
    Casilla_Propiedad PaseoTablado("azul", 400, 50);
    impuestolujo.Next = &PaseoTablado;
    PaseoTablado.Next= &go;


}