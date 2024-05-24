#include <iostream>
#include <ctime>
#include <cstdlib>

enum class PiPaTi
{
    Piedra, Papel, Tijera
};

void easy_26();
PiPaTi transformarStringEleccion(std::string);
int verificarResultado(
    PiPaTi eleccionJugador,
    int eleccionIA
); // Devuelve 0: empate, 1: Gano 2: Perdio