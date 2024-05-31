#include <iostream>
#include "p1.h"

int main()
{
    int numero1 = 30;
    int numero2 = 40;

    std::cout << numero1 << std::endl;
    std::cout << numero2 << std::endl;

    intercambiarValores(&numero1, &numero2);

    std::cout << numero1 << std::endl;
    std::cout << numero2 << std::endl;

    return 0;
}