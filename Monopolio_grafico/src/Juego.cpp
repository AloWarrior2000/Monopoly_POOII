#include "Juego.h"
#include <algorithm>

Juego::Juego(int ancho, int alto, string titulo)
{
    num_jugadores = 0;
    contador_juego = 0;
    en_turno = 0;
    ventana = new RenderWindow(VideoMode(ancho, alto), titulo);
    ventana->setFramerateLimit(fps);

    Tablero.loadFromFile("tablero.jpg");
    rectangulo.loadFromFile("rectangulo.png");
    pieza1.loadFromFile("Corona.png");
    pieza2.loadFromFile("Gato.png");
    pieza4.loadFromFile("Rallador.png");
    pieza5.loadFromFile("Soldado.png");
    fuente.loadFromFile("HappySchool.ttf");
    fuente_titulo.loadFromFile("Blackfinger.ttf");
    tit.setFont(fuente_titulo);
    tit.setString("Monopolio");
    tit.setScale(2.2,2.2);
    tit.setPosition(900,20);

    _tablero.setTexture(Tablero);
    _tablero.setScale(0.9f, 0.9f);
    _tablero.setOrigin(_tablero.getTexture()->getSize().x / 2.0, _tablero.getTexture()->getSize().y / 2.0);
    _tablero.setPosition(ancho / 2 - 300, alto / 2 -20);

    _rectangulo.setTexture(rectangulo);
    _rectangulo.setScale(1.82,1.1);
    _rectangulo.setPosition(790,18);

    _pieza1.setTexture(pieza1);
    _pieza1.setScale(0.12, 0.12);
    _pieza1.setOrigin(_pieza1.getTexture()->getSize().x / 2.0, _pieza1.getTexture()->getSize().y / 2.0);
    _pieza1.setPosition(735, 690);

    _pieza2.setTexture(pieza2);
    _pieza2.setScale(0.33, 0.33);
    _pieza2.setOrigin(_pieza2.getTexture()->getSize().x / 2.0, _pieza2.getTexture()->getSize().y / 2.0);
    _pieza2.setPosition(695, 690);

    _pieza4.setTexture(pieza4);
    _pieza4.setScale(0.11, 0.11);
    _pieza4.setOrigin(_pieza4.getTexture()->getSize().x / 2.0, _pieza4.getTexture()->getSize().y / 2.0);
    _pieza4.setPosition(735, 730);

    _pieza5.setTexture(pieza5);
    _pieza5.setScale(0.16, 0.16);
    _pieza5.setOrigin(_pieza5.getTexture()->getSize().x / 2.0, _pieza5.getTexture()->getSize().y / 2.0);
    _pieza5.setPosition(695, 730);

    gameLoop();
}

void Juego::gameLoop()
{
    srand(time(NULL));
    tablero mesa;

    while (ventana->isOpen())
    {
        int seguidas;
        if(!cont_seguidas){
        seguidas = 0;
        }
        ventana->clear();
        ventana->draw(_rectangulo);
        ventana->draw(tit);
        if (en_turno == num_jugadores)
        {
            en_turno = 0;
        }
        if(dibujo_dado == true)
        {
            dibujar_dados();
        }
        if(show_text1)
        {
            dibujar_texto("Presione el numero de personas que ", 0);
            dibujar_texto("jugaran (Minimo 2, maximo 4)", 1);
        }

        if(inicio_juego){
        dibujar_texto("Bienvenido a Monopoly ", 0);
        dibujar_texto("Presione I para iniciar ", 1);

        }
        if(show_text2)
        {
            string m1 = "Es el turno del " + Orden[en_turno]->nombre;
            string m2 = "que tiene " + to_string(Orden[en_turno]->Dinero)+ ". Presione enter";
            dibujar_texto(m1,0);
            dibujar_texto(m2,1);

        }
        if(show_text3)
        {
            dibujar_texto("Presione enter para lanzar el dado", 0);
        }
        if(show_text4)
        {
            dibujar_texto("Presione A para avanzar",0);

        }
        if (show_text_jail)
        {
            string mar = ", ahora te encuentras en la casilla " + mesa.jail->nombre;
            dibujar_texto("Tuviste 3 lanzamientos en los que tus ",0);
            dibujar_texto("dados obtuvieron numeros iguales", 1);
            dibujar_texto(mar, 2);
            dibujar_texto("Presione C para continuar con el juego",3);
        }
        if (txt_out1)
        {
            dibujar_texto("Presione S si desea comprar la casilla ",0);
            dibujar_texto(Orden[en_turno]->posicion->nombre +" que cuesta " + to_string(dynamic_cast<comprables *>(Orden[en_turno]->posicion)->precio),1);
            dibujar_texto("y cuyo alquiler es de " + to_string(dynamic_cast<comprables *> (Orden[en_turno]->posicion)->alquiler),2);
            dibujar_texto("Caso contrario, presione N",3);
        }
        if (txt_out2)
        {
            dibujar_texto(Orden[en_turno]->nombre + " compro " + Orden[en_turno]->posicion->nombre,0);
            dibujar_texto("presione H para seguir",1);
        }
        if(pagar_alquiler)
        {
            dibujar_texto("Le pago a "+ dynamic_cast<comprables*>(Orden[en_turno]->posicion)->dueno->nombre, 0);
            dibujar_texto(" un total de "+to_string(dynamic_cast<comprables*>(Orden[en_turno]->posicion)->alquiler),1);
            dibujar_texto("Presione b para continuar",2);
        }
        if(hipotecada)
        {
            dibujar_texto("Se encuentra hipotecada, presione H para continuar", 0);
        }
        if(no_compra)
        {
            dibujar_texto("Presione b para continuar",0);

        }
        if(txt_1)
        {
            dibujar_texto("Caiste en una casilla de impuesto",0);
            dibujar_texto("Tienes que pagar " + to_string(pago),1);
            dibujar_texto("presione O para seguir",2);
        }
        if(texto_1)
        {
            dibujar_texto("El jugador " + Orden[en_turno]->nombre + " cayo en la  ",0);
            dibujar_texto("la casilla GoToJail, por eso fue enviado ",1);
            dibujar_texto("a la casilla " + Orden[en_turno]->posicion->nombre,2);
            dibujar_texto(", presione Y para continuar",3);
        }
        if(t1)
        {
            dibujar_texto("El jugador "+Orden[en_turno]->nombre + " cayo en la casilla",0);
            dibujar_texto("Parada Libre, por ello ha ganado " + to_string(poz),1);
            dibujar_texto("Presione 7 para continuar,",2);
        }
        if(mostrar_opciones)
        {
            dibujar_texto("Ahora, ¿que accion quieres realizar?",0);
            dibujar_texto("Pon el caracter de la opcion que elija",1);
            dibujar_texto("P. Terminar mi turno",2);
            dibujar_texto("L. Negociar con otro jugador",3);
            dibujar_texto("M. Ver mis propiedades",4);
            dibujar_texto("V. Hipotecar mis propiedades",5);
            dibujar_texto("Z. Deshipotecar mis propiedades",6);
            dibujar_texto("X. Comprar casas",7);
            dibujar_texto("R. Vender casas",8);
            dibujar_texto("T. Bancarrota",9);
        }
        if(mostrar_propiedades)
        {
            if(!Orden[en_turno]->compradas.empty()){
            dibujar_texto("Las propiedades del " + Orden[en_turno]->nombre,0);
            for(int i = 0; i < Orden[en_turno]->compradas.size();i++)
            {
                dibujar_texto(Orden[en_turno]->compradas[i]->nombre,i+1);
            }
        }
        else
        {
            dibujar_texto("No posee propiedades ",0);
        }
            dibujar_texto("Presione Espacio para continuar",Orden[en_turno]->compradas.size()+1);

        }
  /*      if(choice == 1)
        {


        }*/
        procesar_eventos();
        inicio();
        definir_jugadores();
        if(fichas_seteadas){
        switch (contador_juego) {
        case 0: {
            if (Orden[en_turno]->free){
            if(dado_lanzado == true)
            {
                lanzar_dado(dado1, dado2);
                contador_juego = 1;
                dibujo_dado = true;
                dado_lanzado = false;
            }

        }
        else
            {
                Orden[en_turno]->free = true;
                en_turno++;
            }
        }
        break;
        case 1:
            {
            if(avanzado == true){
            dibujo_dado = false;
            if(primero == segundo)
            {
                contador_juego = 0;
                avanzado = false;
                show_text2 = true;
                turno_aceptado = false;
                seguidas++;
                cont_seguidas = true;
            }
            else{
            contador_juego = 2;
            cont_seguidas = false;
            }
            if(seguidas == 3)
            {
            show_text2 = false;
            Orden[en_turno]->free = false;
            Orden[en_turno]->posicion = mesa.jail;
            mover_pieza(Orden[en_turno]);
            show_text_jail = true;
            cont_seguidas = false;
            en_turno++;
            break;
            }
            else{
            Orden[en_turno]->avanzar(avance);
            mover_pieza(Orden[en_turno]);
            }
            }
            break;
            }
        case 2:
            if(dynamic_cast<comprables*>(Orden[en_turno]->posicion)!=nullptr){
                if(!accion_ejecutada)
                    {
                        Orden[en_turno]->posicion->ejecutar(Orden[en_turno],txt_out1, selected, selec, txt_out2, trans_terminada,hipotecada,pagar_alquiler,no_compra,alq_pagado);
                        if(alq_pagado)accion_ejecutada = true;
                        break;
                    }
            else{
            if(alq_pagado)
            {
            accion_ejecutada = false;
            trans_terminada = true;
            alq_pagado = false;
            selec = 0;
            selected = false;
            }
            if(!trans_terminada){
            Orden[en_turno]->posicion->ejecutar(Orden[en_turno],txt_out1, selected, selec, txt_out2, trans_terminada,hipotecada,pagar_alquiler,no_compra, alq_pagado);
            accion_ejecutada = false;
            trans_terminada = false;
            alq_pagado = false;
            selec = 0;
            selected = false;
            }
            not_show = true;
            contador_juego = 3;
            trans_terminada = false;
            }
            }
            else{
            contador_juego = 3;
            }
            break;
        case 3:
            if(dynamic_cast<Impuesto*>(Orden[en_turno]->posicion)!=nullptr)
            {
                Orden[en_turno]->posicion->ejecutar(Orden[en_turno], &mesa, txt_1, pago);
                not_show = true;
                contador_juego = 4;
                ir_opciones = true;
            }
            else
            {
                not_show = true;
                contador_juego = 4;
            }
            break;
        case 4:
            if(dynamic_cast<GoToJail*>(Orden[en_turno]->posicion)!=nullptr)
            {
                Orden[en_turno]->posicion->ejecutar(Orden[en_turno], &mesa, texto_1, pago);
                mover_pieza(Orden[en_turno]);
                not_show = true;
                contador_juego = 5;
                ir_opciones = true;

            }
            else
            {
                not_show = true;
                contador_juego = 5;
            }
            break;
        case 5:
            if(dynamic_cast<ParadaLibre*>(Orden[en_turno]->posicion)!=nullptr)
            {
                Orden[en_turno]->posicion->ejecutar(Orden[en_turno], &mesa, t1, poz);
                not_show = true;
                contador_juego = 6;
                ir_opciones = true;
            }
            else
            {
                not_show = true;
                contador_juego = 6;
            }
            break;
        case 6:
            if(dynamic_cast<Fortuna*>(Orden[en_turno]->posicion)!=nullptr)
            {
                ir_opciones = true;
            }
            contador_juego = 7;
            break;
        case 7:
            if(dynamic_cast<ArcaComunal*>(Orden[en_turno]->posicion)!=nullptr)
            {
                ir_opciones = true;
            }
            contador_juego = 8;
            break;
        case 8:
            if(dynamic_cast<Jail*>(Orden[en_turno]->posicion)!=nullptr)
            {
                ir_opciones = true;
            }
            contador_juego = 9;
            break;
        case 9:
            Orden[en_turno]->opciones(Orden, choice);
            if(ir_opciones){
            if(!opcion_elegida){
            mostrar_opciones = true;
            break;
            }
            else
            {
                Orden[en_turno]->opciones(Orden, choice);
                mostrar_opciones = false;
                contador_juego = 10;
                opcion_elegida = false;
                turno_finalizado = true;
                not_show = true;
                ir_opciones = false;
                break;
            }
            }

        case 10:
            {
                if(turno_finalizado)
                {
                    avanzado = false;
                    contador_juego = 0;
                    if(not_show)
                    {
                        contador_juego = 10;
                        break;
                    }
                    en_turno++;
                    show_text2 = true;
                    turno_aceptado = false;
                    turno_finalizado = false;
                }
            }
            break;
        }
        }
        ventana->display();

    }
}

void Juego::inicio()
{
    ventana->draw(_tablero);
}

void Juego::procesar_eventos()
{
    while (ventana->pollEvent(evento))
    {
        switch (evento.type)
        {
        case Event::Closed:
            ventana->close();
            break;
        case Event::KeyPressed:
            switch (evento.key.code) {
            case Keyboard::I:
                if(juego_iniciado == false){
                juego_iniciado = true;
                show_text1 = true;
                inicio_juego=false;
                }
                break;
            case Keyboard::Num2:
            case Keyboard::Num3:
            case Keyboard::Num4:
                if(!jugadores_elegidos){
                    num_jugadores = evento.key.code - Keyboard::Num0;
                    jugadores_elegidos = true;
                    contador_juego = 0;
                    show_text1 = false;
                    show_text2 = true;
                }
                break;
            case Keyboard::Key::Enter:
                show_text_jail = false;
                if(turno_aceptado){
                dado_lanzado = true;
                show_text3 = false;
                show_text4 = true;}
                else{
                turno_aceptado = true;
                show_text2 = false;
                show_text3 = true;
                }
                break;
            case Keyboard::A:
                avanzado = true;
                show_text4 = false;
                break;
            case Keyboard::C:
                if (!Orden[en_turno]->free){
                show_text_jail = false;
                show_text2 = true;
                break;
                }
            case Keyboard::S:
                accion_ejecutada = true;
                selected = true;
                selec = 1;
                break;
            case Keyboard::H:
                txt_out2 = false;
                not_show = false;
                accion_ejecutada = false;
                ir_opciones = true;
                break;
            case Keyboard::N:
                accion_ejecutada = true;
                selected = true;
                selec = 0;
                break;
            case Keyboard::B:
                accion_ejecutada = false;
                no_compra = false;
                pagar_alquiler = false;
                hipotecada = false;
                not_show = false;
                ir_opciones = true;
                break;
            case Keyboard::O:
                txt_1 = false;
                not_show = false;
                break;
            case Keyboard::Y:
                texto_1 = false;
                not_show = false;
                break;
            case Keyboard::Num7:
                t1 = false;
                not_show = false;
                break;
            case Keyboard::P:
                opcion_elegida = true;
                break;
            case Keyboard::M:
                mostrar_opciones = false;
                mostrar_propiedades = true;
                opcion_elegida = true;
                //not_show = false;
                break;
            case Keyboard::Key::Space:
                mostrar_propiedades = false;
                not_show = false;
                break;
            }
        }
    }
}


void Juego::definir_jugadores()
{
    if(!fichas_seteadas){
    switch (num_jugadores)
    {
    case 2: {
        Jugador* player1 = new Jugador(0, "Jugador 1");
        player1->set_ficha(_pieza1);
        Jugador* player2 = new Jugador(1, "Jugador 2");
        player2->set_ficha(_pieza2);
        Orden.push_back(player1);
        Orden.push_back(player2);
        fichas_seteadas = true;
        break;
    }
    case 3: {
        Jugador* player1 = new Jugador(0, "Jugador 1");
        player1->set_ficha(_pieza1);
        Jugador* player2 = new Jugador(1, "Jugador 2");
        player2->set_ficha(_pieza2);
        Jugador* player3 = new Jugador(2, "Jugador 3");
        player3->set_ficha(_pieza4);
        Orden.push_back(player1);
        Orden.push_back(player2);
        Orden.push_back(player3);
        fichas_seteadas = true;
        break;
    }
    case 4: {
        Jugador* player1 = new Jugador(0, "Jugador 1");
        player1->set_ficha(_pieza1);
        Jugador* player2 = new Jugador(1, "Jugador 2");
        player2->set_ficha(_pieza2);
        Jugador* player3 = new Jugador(2, "Jugador 3");
        player3->set_ficha(_pieza4);
        Jugador* player4 = new Jugador(3, "Jugador 4");
        player4->set_ficha(_pieza5);
        Orden.push_back(player1);
        Orden.push_back(player2);
        Orden.push_back(player3);
        Orden.push_back(player4);
        fichas_seteadas = true;
        break;
    }
    default:
        break;
    }
        for (int i = 0; i < num_jugadores; i++) {
        Orden[i]->posicion = mesa.head_;
        }
    }
    if (num_jugadores != 0) {
        dibujar_piezas();
    }
}

void Juego::lanzar_dado(dado d1, dado d2)
{
       primero = dado1.lanzar();
       segundo = dado2.lanzar();
    //avance = 30;
       avance = primero + segundo;
    dibujar_dados();
}

void Juego::dibujar_piezas()

{
    for(int i = 0; i < num_jugadores; i++)
    {
        ventana->draw(Orden[i]->ficha);
    }
}

void Juego::dibujar_dados()
{
    ventana->draw(dado1.spr_dado);
    dado2.spr_dado.setPosition(800, 500);
    ventana->draw(dado2.spr_dado);
}

void Juego::dibujar_texto(string text, int pos)
{
    Text mes;
    mes.setFont(fuente);
    mes.setString(text);
    mes.setFillColor(Color::White);
    mes.setPosition(800, 120 + (50 * pos));
    ventana->draw(mes);
}

void Juego::mover_pieza(Jugador* player)
{
    //player->ficha.setPosition(630,690);
   player->ficha.setPosition(player->posicion->posx,player->posicion->posy);
}
