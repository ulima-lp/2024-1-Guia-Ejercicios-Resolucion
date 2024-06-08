#include <iostream>
#include <cstdlib>
#include <ctime>
#include "p18.cpp"

/*
Programar un juego de búsqueda del tesoro, donde:

a) el tablero es una matriz de "m" x "n" donde m y n es ingresado por teclado, inicializado con 0 (ceros) que se 
ve alineada
b) el jugador solo tiene 3 intentos para adivinar en qué fila y columna se encuentra un tesoro
c) si el usuario adivina correctamente, gana el juego; de lo contrario, pierde al superar los 3 intentos.
d) solo hay un tesoro oculto en el tablero, ubicado aleatoriamente.
e) en cada intento se muestra el tablero, el tesoro no se muestra, pero sí los intentos con -1
f) si adivina la ubicación se muestra el tesoro con el número 10.
g) se muestra ¡Ganaste! si se encontró el tesoro, ¡Perdiste! en caso contrario.
h) Al finalizar el juego, mostrar el tablero con el tesoro con número 10
i) se requiere las siguientes funciones mínimas: inicializarTablero, colocarTesoro, mostrarTablero

*/

int main()
{
    srand(time(NULL)); // Iniciando semilla
    int m, n;
    std::cout << "Ingrese tamano m: ";
    std::cin >> m;
    std::cout << "Ingrese tamano n: ";
    std::cin >> n;

    char* tablero = InicializarTablero(m, n);
    int tesoroX = rand() % m;
    int tesoroY = rand() % n;
    
    int contadorIntentos = 0;

    for (int i=0; i < contadorIntentos; i++)
    {
        int posx, posy;
        std::cout << "Ingresa Posicion X: ";
        std::cin >> posx;
        std::cout << "Ingresa Posicion Y: ";
        std::cin >> posy;

        bool hayTesoro = MostrarTablero(
                tablero, 
                m, n,
                posx, posy, 
                tesoroX, tesoroY);
        if (hayTesoro == true)
        {
            std::cout << "Ganaste!!!" << std::endl;
            return 0;
        }
    }

    std::cout << "Perdiste!" << std::endl;

    return 0;
}
