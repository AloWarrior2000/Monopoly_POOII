# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/73/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/73/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/POOII.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/POOII.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/POOII.dir/flags.make

CMakeFiles/POOII.dir/main.cpp.o: CMakeFiles/POOII.dir/flags.make
CMakeFiles/POOII.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/POOII.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POOII.dir/main.cpp.o -c /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/main.cpp

CMakeFiles/POOII.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POOII.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/main.cpp > CMakeFiles/POOII.dir/main.cpp.i

CMakeFiles/POOII.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POOII.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/main.cpp -o CMakeFiles/POOII.dir/main.cpp.s

CMakeFiles/POOII.dir/Juego.cpp.o: CMakeFiles/POOII.dir/flags.make
CMakeFiles/POOII.dir/Juego.cpp.o: ../Juego.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/POOII.dir/Juego.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POOII.dir/Juego.cpp.o -c /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Juego.cpp

CMakeFiles/POOII.dir/Juego.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POOII.dir/Juego.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Juego.cpp > CMakeFiles/POOII.dir/Juego.cpp.i

CMakeFiles/POOII.dir/Juego.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POOII.dir/Juego.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Juego.cpp -o CMakeFiles/POOII.dir/Juego.cpp.s

CMakeFiles/POOII.dir/dado.cpp.o: CMakeFiles/POOII.dir/flags.make
CMakeFiles/POOII.dir/dado.cpp.o: ../dado.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/POOII.dir/dado.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POOII.dir/dado.cpp.o -c /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/dado.cpp

CMakeFiles/POOII.dir/dado.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POOII.dir/dado.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/dado.cpp > CMakeFiles/POOII.dir/dado.cpp.i

CMakeFiles/POOII.dir/dado.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POOII.dir/dado.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/dado.cpp -o CMakeFiles/POOII.dir/dado.cpp.s

CMakeFiles/POOII.dir/Casilla.cpp.o: CMakeFiles/POOII.dir/flags.make
CMakeFiles/POOII.dir/Casilla.cpp.o: ../Casilla.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/POOII.dir/Casilla.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POOII.dir/Casilla.cpp.o -c /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla.cpp

CMakeFiles/POOII.dir/Casilla.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POOII.dir/Casilla.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla.cpp > CMakeFiles/POOII.dir/Casilla.cpp.i

CMakeFiles/POOII.dir/Casilla.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POOII.dir/Casilla.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla.cpp -o CMakeFiles/POOII.dir/Casilla.cpp.s

CMakeFiles/POOII.dir/Casilla_Inicio.cpp.o: CMakeFiles/POOII.dir/flags.make
CMakeFiles/POOII.dir/Casilla_Inicio.cpp.o: ../Casilla_Inicio.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/POOII.dir/Casilla_Inicio.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POOII.dir/Casilla_Inicio.cpp.o -c /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Inicio.cpp

CMakeFiles/POOII.dir/Casilla_Inicio.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POOII.dir/Casilla_Inicio.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Inicio.cpp > CMakeFiles/POOII.dir/Casilla_Inicio.cpp.i

CMakeFiles/POOII.dir/Casilla_Inicio.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POOII.dir/Casilla_Inicio.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Inicio.cpp -o CMakeFiles/POOII.dir/Casilla_Inicio.cpp.s

CMakeFiles/POOII.dir/Casilla_Propiedad.cpp.o: CMakeFiles/POOII.dir/flags.make
CMakeFiles/POOII.dir/Casilla_Propiedad.cpp.o: ../Casilla_Propiedad.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/POOII.dir/Casilla_Propiedad.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POOII.dir/Casilla_Propiedad.cpp.o -c /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Propiedad.cpp

CMakeFiles/POOII.dir/Casilla_Propiedad.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POOII.dir/Casilla_Propiedad.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Propiedad.cpp > CMakeFiles/POOII.dir/Casilla_Propiedad.cpp.i

CMakeFiles/POOII.dir/Casilla_Propiedad.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POOII.dir/Casilla_Propiedad.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Propiedad.cpp -o CMakeFiles/POOII.dir/Casilla_Propiedad.cpp.s

CMakeFiles/POOII.dir/Jugador.cpp.o: CMakeFiles/POOII.dir/flags.make
CMakeFiles/POOII.dir/Jugador.cpp.o: ../Jugador.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/POOII.dir/Jugador.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POOII.dir/Jugador.cpp.o -c /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Jugador.cpp

CMakeFiles/POOII.dir/Jugador.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POOII.dir/Jugador.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Jugador.cpp > CMakeFiles/POOII.dir/Jugador.cpp.i

CMakeFiles/POOII.dir/Jugador.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POOII.dir/Jugador.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Jugador.cpp -o CMakeFiles/POOII.dir/Jugador.cpp.s

CMakeFiles/POOII.dir/Casilla_Comprable.cpp.o: CMakeFiles/POOII.dir/flags.make
CMakeFiles/POOII.dir/Casilla_Comprable.cpp.o: ../Casilla_Comprable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/POOII.dir/Casilla_Comprable.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POOII.dir/Casilla_Comprable.cpp.o -c /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Comprable.cpp

CMakeFiles/POOII.dir/Casilla_Comprable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POOII.dir/Casilla_Comprable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Comprable.cpp > CMakeFiles/POOII.dir/Casilla_Comprable.cpp.i

CMakeFiles/POOII.dir/Casilla_Comprable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POOII.dir/Casilla_Comprable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Comprable.cpp -o CMakeFiles/POOII.dir/Casilla_Comprable.cpp.s

CMakeFiles/POOII.dir/Tablero.cpp.o: CMakeFiles/POOII.dir/flags.make
CMakeFiles/POOII.dir/Tablero.cpp.o: ../Tablero.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/POOII.dir/Tablero.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POOII.dir/Tablero.cpp.o -c /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Tablero.cpp

CMakeFiles/POOII.dir/Tablero.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POOII.dir/Tablero.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Tablero.cpp > CMakeFiles/POOII.dir/Tablero.cpp.i

CMakeFiles/POOII.dir/Tablero.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POOII.dir/Tablero.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Tablero.cpp -o CMakeFiles/POOII.dir/Tablero.cpp.s

CMakeFiles/POOII.dir/Casilla_Accion.cpp.o: CMakeFiles/POOII.dir/flags.make
CMakeFiles/POOII.dir/Casilla_Accion.cpp.o: ../Casilla_Accion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/POOII.dir/Casilla_Accion.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POOII.dir/Casilla_Accion.cpp.o -c /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Accion.cpp

CMakeFiles/POOII.dir/Casilla_Accion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POOII.dir/Casilla_Accion.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Accion.cpp > CMakeFiles/POOII.dir/Casilla_Accion.cpp.i

CMakeFiles/POOII.dir/Casilla_Accion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POOII.dir/Casilla_Accion.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Accion.cpp -o CMakeFiles/POOII.dir/Casilla_Accion.cpp.s

CMakeFiles/POOII.dir/Casilla_Impuesto.cpp.o: CMakeFiles/POOII.dir/flags.make
CMakeFiles/POOII.dir/Casilla_Impuesto.cpp.o: ../Casilla_Impuesto.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/POOII.dir/Casilla_Impuesto.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POOII.dir/Casilla_Impuesto.cpp.o -c /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Impuesto.cpp

CMakeFiles/POOII.dir/Casilla_Impuesto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POOII.dir/Casilla_Impuesto.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Impuesto.cpp > CMakeFiles/POOII.dir/Casilla_Impuesto.cpp.i

CMakeFiles/POOII.dir/Casilla_Impuesto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POOII.dir/Casilla_Impuesto.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Impuesto.cpp -o CMakeFiles/POOII.dir/Casilla_Impuesto.cpp.s

CMakeFiles/POOII.dir/Casilla_Tarjeta.cpp.o: CMakeFiles/POOII.dir/flags.make
CMakeFiles/POOII.dir/Casilla_Tarjeta.cpp.o: ../Casilla_Tarjeta.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/POOII.dir/Casilla_Tarjeta.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POOII.dir/Casilla_Tarjeta.cpp.o -c /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Tarjeta.cpp

CMakeFiles/POOII.dir/Casilla_Tarjeta.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POOII.dir/Casilla_Tarjeta.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Tarjeta.cpp > CMakeFiles/POOII.dir/Casilla_Tarjeta.cpp.i

CMakeFiles/POOII.dir/Casilla_Tarjeta.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POOII.dir/Casilla_Tarjeta.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Casilla_Tarjeta.cpp -o CMakeFiles/POOII.dir/Casilla_Tarjeta.cpp.s

CMakeFiles/POOII.dir/Ferrocarril.cpp.o: CMakeFiles/POOII.dir/flags.make
CMakeFiles/POOII.dir/Ferrocarril.cpp.o: ../Ferrocarril.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/POOII.dir/Ferrocarril.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POOII.dir/Ferrocarril.cpp.o -c /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Ferrocarril.cpp

CMakeFiles/POOII.dir/Ferrocarril.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POOII.dir/Ferrocarril.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Ferrocarril.cpp > CMakeFiles/POOII.dir/Ferrocarril.cpp.i

CMakeFiles/POOII.dir/Ferrocarril.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POOII.dir/Ferrocarril.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Ferrocarril.cpp -o CMakeFiles/POOII.dir/Ferrocarril.cpp.s

CMakeFiles/POOII.dir/Carcel.cpp.o: CMakeFiles/POOII.dir/flags.make
CMakeFiles/POOII.dir/Carcel.cpp.o: ../Carcel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/POOII.dir/Carcel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POOII.dir/Carcel.cpp.o -c /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Carcel.cpp

CMakeFiles/POOII.dir/Carcel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POOII.dir/Carcel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Carcel.cpp > CMakeFiles/POOII.dir/Carcel.cpp.i

CMakeFiles/POOII.dir/Carcel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POOII.dir/Carcel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Carcel.cpp -o CMakeFiles/POOII.dir/Carcel.cpp.s

CMakeFiles/POOII.dir/Servicios.cpp.o: CMakeFiles/POOII.dir/flags.make
CMakeFiles/POOII.dir/Servicios.cpp.o: ../Servicios.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/POOII.dir/Servicios.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POOII.dir/Servicios.cpp.o -c /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Servicios.cpp

CMakeFiles/POOII.dir/Servicios.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POOII.dir/Servicios.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Servicios.cpp > CMakeFiles/POOII.dir/Servicios.cpp.i

CMakeFiles/POOII.dir/Servicios.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POOII.dir/Servicios.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/Servicios.cpp -o CMakeFiles/POOII.dir/Servicios.cpp.s

# Object files for target POOII
POOII_OBJECTS = \
"CMakeFiles/POOII.dir/main.cpp.o" \
"CMakeFiles/POOII.dir/Juego.cpp.o" \
"CMakeFiles/POOII.dir/dado.cpp.o" \
"CMakeFiles/POOII.dir/Casilla.cpp.o" \
"CMakeFiles/POOII.dir/Casilla_Inicio.cpp.o" \
"CMakeFiles/POOII.dir/Casilla_Propiedad.cpp.o" \
"CMakeFiles/POOII.dir/Jugador.cpp.o" \
"CMakeFiles/POOII.dir/Casilla_Comprable.cpp.o" \
"CMakeFiles/POOII.dir/Tablero.cpp.o" \
"CMakeFiles/POOII.dir/Casilla_Accion.cpp.o" \
"CMakeFiles/POOII.dir/Casilla_Impuesto.cpp.o" \
"CMakeFiles/POOII.dir/Casilla_Tarjeta.cpp.o" \
"CMakeFiles/POOII.dir/Ferrocarril.cpp.o" \
"CMakeFiles/POOII.dir/Carcel.cpp.o" \
"CMakeFiles/POOII.dir/Servicios.cpp.o"

# External object files for target POOII
POOII_EXTERNAL_OBJECTS =

POOII: CMakeFiles/POOII.dir/main.cpp.o
POOII: CMakeFiles/POOII.dir/Juego.cpp.o
POOII: CMakeFiles/POOII.dir/dado.cpp.o
POOII: CMakeFiles/POOII.dir/Casilla.cpp.o
POOII: CMakeFiles/POOII.dir/Casilla_Inicio.cpp.o
POOII: CMakeFiles/POOII.dir/Casilla_Propiedad.cpp.o
POOII: CMakeFiles/POOII.dir/Jugador.cpp.o
POOII: CMakeFiles/POOII.dir/Casilla_Comprable.cpp.o
POOII: CMakeFiles/POOII.dir/Tablero.cpp.o
POOII: CMakeFiles/POOII.dir/Casilla_Accion.cpp.o
POOII: CMakeFiles/POOII.dir/Casilla_Impuesto.cpp.o
POOII: CMakeFiles/POOII.dir/Casilla_Tarjeta.cpp.o
POOII: CMakeFiles/POOII.dir/Ferrocarril.cpp.o
POOII: CMakeFiles/POOII.dir/Carcel.cpp.o
POOII: CMakeFiles/POOII.dir/Servicios.cpp.o
POOII: CMakeFiles/POOII.dir/build.make
POOII: CMakeFiles/POOII.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX executable POOII"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/POOII.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/POOII.dir/build: POOII

.PHONY : CMakeFiles/POOII.dir/build

CMakeFiles/POOII.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/POOII.dir/cmake_clean.cmake
.PHONY : CMakeFiles/POOII.dir/clean

CMakeFiles/POOII.dir/depend:
	cd /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug /home/alonso/Documentos/Ciclo_3/POOII/POOProyecto/cmake-build-debug/CMakeFiles/POOII.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/POOII.dir/depend
