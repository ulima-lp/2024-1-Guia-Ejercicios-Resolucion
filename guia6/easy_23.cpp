#include "easy_23.h"

void easy_23()
{
    std::cout << "EJERCICIO: easy 23" << std::endl;

    srand(time(NULL)); // Inicializar semilla

    int matriz[3][3];
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 9 + 1;
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }



    
}