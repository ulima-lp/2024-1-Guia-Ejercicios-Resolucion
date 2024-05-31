#include <iostream>
#include "p6.h"

int main()
{
    int* arregloGenerado = generarArreglo(5);
    imprimirArreglo(arregloGenerado, 5);
    imprimirArregloRetroceso(arregloGenerado, 5);

    return 0;
}