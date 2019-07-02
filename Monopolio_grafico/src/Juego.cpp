#include "Juego.h"

Juego::Juego(int ancho, int alto, string titulo)
{
num_jugadores = 0;
contador_juego = 0;
ventana = new RenderWindow(VideoMode(ancho,alto),titulo);
ventana->setFramerateLimit(fps);

Tablero.loadFromFile("tablero.jpg");

pieza1.loadFromFile("Corona.png");

pieza2.loadFromFile("Gato.png");

pieza4.loadFromFile("Rallador.png");

pieza5.loadFromFile("Soldado.png");

_tablero.setTexture(Tablero);
_tablero.setScale(0.9,0.9);
_tablero.setOrigin(_tablero.getTexture()->getSize().x/2.0,_tablero.getTexture()->getSize().y/2.0);
_tablero.setPosition(ancho/2 -300,alto/2);

_pieza1.setTexture(pieza1);
_pieza1.setScale(0.12,0.12);
_pieza1.setPosition(710,665);

_pieza2.setTexture(pieza2);
_pieza2.setScale(0.33,0.33);
_pieza2.setPosition(640,665);

_pieza4.setTexture(pieza4);
_pieza4.setScale(0.11,0.11);
_pieza4.setPosition(700,700);

_pieza5.setTexture(pieza5);
_pieza5.setScale(0.16,0.16);
_pieza5.setPosition(655,700);

gameLoop();
}

void Juego::gameLoop()
{
    srand(time(NULL));
    definir_jugadores();
    tablero mesa;
    for (int i = 0; i < num_jugadores; i++) {
        Orden[i]->posicion = mesa.head_;
    }
    int primero, segundo, avance, en_turno = 0;
while(ventana->isOpen())
{
ventana->clear();
inicio();
procesar_eventos();




}
}

void Juego::inicio()
{
ventana->draw(_tablero);
}

void Juego::procesar_eventos()
{
while(ventana->pollEvent(evento))
{
    switch(evento.type)
    {
    case Event::KeyPressed:
        if(contador_juego == 0){
        if(Keyboard::isKeyPressed(Keyboard::Num2))
        {
            num_jugadores = 2;
            contador_juego = 1;
            break;
        }
        if(Keyboard::isKeyPressed(Keyboard::Num3))
        {
            num_jugadores = 3;
            contador_juego = 1;
            break;
        }
        if(Keyboard::isKeyPressed(Keyboard::Num4))
        {
            num_jugadores = 4;
            contador_juego = 1;
            break;
        }
        definir_jugadores();
        }
        if(contador_juego == 1)
            {
            if(Keyboard::isKeyPressed(Keyboard::Num5))
            {
            dado1.lanzar();
            ventana->draw(dado1.spr_dado);
            break;
            }
        }
    }
}
    ventana->display();

}

void Juego::definir_jugadores()
{
    Font fuente;
    fuente.loadFromFile("HappySchool.ttf");
    Text texto1;
    texto1.setFont(fuente);
    texto1.setString("Presione el numero de personas que ");
    texto1.setColor(Color::White);
    texto1.setPosition(800,100);
    Text texto2;
    texto2.setFont(fuente);
    texto2.setString("jugaran (Minimo 2, maximo 4) ");
    texto2.setColor(Color::White);
    texto2.setPosition(800,150);
    ventana->draw(texto2);
    ventana->draw(texto1);
    ventana->draw(_tablero);
    switch(num_jugadores)
    {
    case 2:{
        ventana->draw(_pieza1);
        ventana->draw(_pieza2);
        Jugador* player1 = new Jugador(0,"Jugador 1");
        player1->set_ficha(_pieza1);
        Jugador* player2 = new Jugador(1,"Jugador 2");
        player2->set_ficha(_pieza2);
        Orden.push_back(player1);
        Orden.push_back(player2);
        break;}
    case 3:
        {ventana->draw(_pieza1);
        ventana->draw(_pieza2);
        ventana->draw(_pieza4);
        Jugador* player1 = new Jugador(0,"Jugador 1");
        player1->set_ficha(_pieza1);
        Jugador* player2 = new Jugador(1,"Jugador 2");
        player2->set_ficha(_pieza2);
        Jugador* player3 = new Jugador(2,"Jugador 3");
        player3->set_ficha(_pieza4);
        Orden.push_back(player1);
        Orden.push_back(player2);
        Orden.push_back(player3);
        break;}
    case 4:{
        ventana->draw(_pieza1);
        ventana->draw(_pieza2);
        ventana->draw(_pieza4);
        ventana->draw(_pieza5);
        Jugador* player1 = new Jugador(0,"Jugador 1");
        player1->set_ficha(_pieza1);
        Jugador* player2 = new Jugador(1,"Jugador 2");
        player2->set_ficha(_pieza2);
        Jugador* player3 = new Jugador(2,"Jugador 3");
        player3->set_ficha(_pieza4);
        Jugador* player4 = new Jugador(3,"Jugador 4");
        player4->set_ficha(_pieza5);
        Orden.push_back(player1);
        Orden.push_back(player2);
        Orden.push_back(player3);
        Orden.push_back(player4);
        break;
    }
    }
}


