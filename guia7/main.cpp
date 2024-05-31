#include <iostream>
#include "p3.h"

int main()
{
    int numero = -10;

    std::cout << "Es positivo: " 
        << verSiEsPositivo(&numero)
        << std::endl;

    return 0;
}