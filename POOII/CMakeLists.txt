cmake_minimum_required(VERSION 3.14)
project(POOII)

set(CMAKE_CXX_STANDARD 14)

add_executable(POOII main.cpp Juego.cpp Juego.h dado.cpp dado.h Casilla.cpp Casilla.h Casilla_Inicio.cpp Casilla_Inicio.h Casilla_Propiedad.cpp Casilla_Propiedad.h)