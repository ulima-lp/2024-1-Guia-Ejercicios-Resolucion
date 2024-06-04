#include <iostream>
#include "p13.h"

int main()
{
    int* arr = inputArreglo(5);
    printArreglo(arr, 5);

    int* arr2 = generateArreglo(5);
    printArreglo(arr2, 5);

    return 0;
}