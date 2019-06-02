cmake_minimum_required(VERSION 3.14)
project(POOII)

set(CMAKE_CXX_STANDARD 14)

add_executable(POOII main.cpp Juego.cpp Juego.h dado.cpp dado.h Casilla.cpp Casilla.h Casilla_Inicio.cpp Casilla_Inicio.h Casilla_Propiedad.cpp Casilla_Propiedad.h Jugador.cpp Jugador.h Casilla_Comprable.cpp Casilla_Comprable.h Tablero.cpp Tablero.h Casilla_Accion.cpp Casilla_Accion.h Casilla_Impuesto.cpp Casilla_Impuesto.h Casilla_Tarjeta.cpp Casilla_Tarjeta.h Ferrocarril.cpp Ferrocarril.h Carcel.cpp Carcel.h Servicios.cpp Servicios.h)