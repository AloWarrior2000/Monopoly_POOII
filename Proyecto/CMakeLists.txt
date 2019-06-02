cmake_minimum_required(VERSION 3.14)
project(Proyecto)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proyecto main.cpp tablero.cpp tablero.h casilla.cpp casilla.h comprables.cpp comprables.h accion.cpp accion.h jugador.cpp jugador.h dado.cpp dado.h juego.cpp juego.h)