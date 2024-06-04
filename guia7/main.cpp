#include <iostream>
#include "p10.h"

int main()
{
    int num1 = 3;
    int num2 = 21;
    int respuesta = 0;
    operar(num1, num2, &respuesta);

    std::cout << respuesta;

    return 0;
}