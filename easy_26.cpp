#include "easy_26.h"

PiPaTi transformarStringEleccion(std::string eleccion)
{
    if (eleccion == "pi") return PiPaTi::Piedra;
    if (eleccion == "pa") return PiPaTi::Papel;
    if (eleccion == "ti") return PiPaTi::Tijera;
    return PiPaTi::Piedra; // TODO: Mejorar
}

int verificarResultado(PiPaTi eleccionJugador, int eleccionIA)
{
    if ((int)eleccionJugador == eleccionIA)
    {
        // Hubo empate
        return 0;
    }
    else
    {
        if (eleccionJugador == PiPaTi::Papel && eleccionIA == 0)
        {
            return 1;
        }
        else if (eleccionJugador == PiPaTi::Tijera && eleccionIA == 1)
        {
            return 1;
        }
        else if (eleccionJugador == PiPaTi::Piedra && eleccionIA == 2)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
}

void easy_26()
{
    std::cout << "=======================" << std::endl;
    std::cout << "= PIEDRA PAPEL TIJERA =" << std::endl; 
    std::cout << "=======================" << std::endl;

    const int numPartidas = 5;
    srand(time(NULL)); // Inicializaos la semilla
    float puntaje = 0;

    for (size_t i = 0; i < numPartidas; i++)
    {
        std::string eleccion;
        std::cout << "Partida " << i + 1 << std::endl;
        std::cout << "Ingrese pi (piedra), pa (papel), ti (tijera): ";
        std::cin >> eleccion;

        int eleccionIA = rand() % 3; //0: Pi 1: Pa 2: Ti
        PiPaTi eleccionJugador = transformarStringEleccion(eleccion);

        int res = verificarResultado(
            eleccionJugador, 
            eleccionIA
        );

        
        switch(res) 
        {
            case 0:
                // Empate
                puntaje += 0.5f;
                std::cout << "Empataste!" << std::endl;
                break;
            case 1:
                // Gano
                puntaje += 1.0f;
                std::cout << "Ganaste!" << std::endl;
                break;
            case 2:
                std::cout << "Perdiste" << std::endl;
        }  
    }

    std::cout << "Puntaje Final: " << puntaje << std::endl;

}