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
    int turno;
    dado dado1, dado2;
    vector<Jugador*> Orden;
	RenderWindow* ventana;
	int fps;
	Texture Tablero;
	Texture pieza1;
	Texture pieza2;
	Texture pieza4;
	Texture pieza5;
	Sprite _tablero;
	Sprite _pieza1;
	Sprite _pieza2;
	Sprite _pieza4;
	Sprite _pieza5;
	//Event Seleccion_jugadores;
	//Event Lanzar_dado;
	Event evento;

public:
	Juego(int ancho, int largo, string titulo);
	void gameLoop();
	void inicio();
	void procesar_eventos();
	//void procesar_seleccion();
	//void procesar_lanzamiento(dado d);
	void definir_jugadores();
};
#endif // JUEGO_H
