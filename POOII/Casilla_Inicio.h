//
// Created by alonso on 31/05/19.
//

#ifndef POOII_CASILLA_INICIO_H
#define POOII_CASILLA_INICIO_H

#include "Casilla.h"

class Casilla_Inicio : public Casilla{
private:
    Casilla* Reinicio;
public:
    Casilla_Inicio()= default;

    void pagar();

};


#endif //POOII_CASILLA_INICIO_H
