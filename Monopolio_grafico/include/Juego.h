#ifndef JUEGO_H
#define JUEGO_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <vector>
#include "dado.h"
#include "tablero.h"
#include "jugador.h"

using namespace std;
using namespace sf;

class Juego
{
private:
    int contador_juego = 0;
    int num_jugadores;
    int en_turno;
    int primero;
    int segundo;
    int avance;
    tablero mesa;
    dado dado1, dado2;
    vector<Jugador*> Orden;
	RenderWindow* ventana;
	int fps;
	Texture Tablero;
	Texture rectangulo;
	Texture pieza1;
	Texture pieza2;
	Texture pieza4;
	Texture pieza5;
	Sprite _tablero;
	Sprite _rectangulo;
	Sprite _pieza1;
	Sprite _pieza2;
	Sprite _pieza4;
	Sprite _pieza5;
    Font fuente;
    Font fuente_titulo;
    Text tit;
	Event evento;

	bool juego_iniciado = false;
	bool jugadores_elegidos = false;
	bool fichas_seteadas = false;
	bool avanzado = false;
    bool dado_lanzado = false;
    bool dibujo_dado = false;
    bool turno_aceptado = false;
    bool turno_finalizado = false;
    bool turno_casi_finalizado = false;
    bool inicio_juego=true;

    //Booleano para definir los jugadores
    bool show_text1 = false;

    //Booleano para mostrar el turno
    bool show_text2 = false;

    //Booleano para lanzar el dado
    bool show_text3 = false;

    //Booleano para avanzar
    bool show_text4 = false;

    //Booleanos para mandar a la carcel por dados
    bool show_text_jail = false;
    bool cont_seguidas = false;

    bool no_compra = false;

    //Booleanos para la ejecucion de una casilla propiedad
    bool selected = false;
    int selec = 0;
    bool txt_out1 = false;
    bool txt_out2 = false;
    bool trans_terminada = false;
    bool accion_ejecutada = false;
    bool not_show = false;
    bool hipotecada = false;
    bool pagar_alquiler = false;
    bool alq_pagado = false;

    //Booleanos para la ejecucion de una casilla impuesto
    bool txt_1 = false;
    int pago = 0;

    //Booleano para la casilla Go to Jail
    bool texto_1 = false;

    //Booleano para la casilla ParadaLibre
    bool t1 = false;
    int poz = 0;

    bool mostrar_opciones = false;
    bool ir_opciones = false;
    bool opcion_elegida = false;
    int choice = 0;

    bool mostrar_propiedades = false;

public:
	Juego(int ancho, int largo, string titulo);
	void gameLoop();
	void inicio();
	void procesar_eventos();
	void dibujar_piezas();
	void dibujar_dados();
	void dibujar_texto(string text, int pos);
	void definir_jugadores();
	void lanzar_dado(dado d1,dado d2);
	void mover_pieza(Jugador* player);
};
#endif // JUEGO_H
