#include "p18.h"

char* InicializarTablero(int m, int n)
{
    int tam = n*m;
    char* tablero = new char[tam];

    for (size_t i = 0; i < tam; i++)
    {
        tablero[i] = '-';
    }
    return tablero;
}

bool MostrarTablero(
        char* tablero,
        int m, int n,
        int x, int y,
        int tesoroX, int tesoroY)
{
    bool encontrado = false;
    if (x == tesoroX && y == tesoroY)
    {
        // Encontro el tesoro
        int pos = m * y + x;
        tablero[pos] = '0';
        encontrado = true;
    }else
    {
        // No encontro el tesoro
        int pos = m * y + x;
        tablero[pos] = ' ';
    }

    // Imprimir Tablero
    for (size_t i=0 ; i < n ; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            int pos = m * i + j;
            std::cout << tablero[pos] << " ";
        }
        std::cout << std::endl;
    }
    return encontrado;
}
