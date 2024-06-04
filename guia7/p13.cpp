#include "p13.h"

int* inputArreglo(int tam)
{
    int* arreglo = new int[tam];

    for (size_t i=0; i< tam; i++)
    {
        int num;
        std::cin >> num;

        arreglo[i] = num;
    }

    return arreglo;
}
int* generateArreglo(int m)
{

}
void printArreglo(int* arreglo, int m)
{
    for (size_t i =0 ; i < m ; i++)
    {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;
}