#include <iostream>
#include "p6.h"

int main()
{
    int* arregloGenerado = generarArreglo(5);
    imprimirArreglo(arregloGenerado, 5);
    imprimirArregloRetroceso(arregloGenerado, 5);
    arregloGenerado = agregarNumero(arregloGenerado, 5, 30);
    imprimirArreglo(arregloGenerado, 6);
    return 0;
}