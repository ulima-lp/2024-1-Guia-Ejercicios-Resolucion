#include "p6.h"

int* generarArreglo(int n)
{
    int* arr = new int[n]; // HEAP

    for (size_t i = 0 ; i < n; i++)
    {
        int numero;
        std::cin >> numero; 
        arr[i] = numero;
    }

    return arr;
}

void imprimirArreglo(int* arr, int n)
{
    for (size_t i = 0 ; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void imprimirArregloRetroceso(int* arr, int n)
{
    for (size_t i = n - 1 ; i >=0 ; i--)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}