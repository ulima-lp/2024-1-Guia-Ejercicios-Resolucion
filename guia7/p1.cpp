#include "p1.h"

void intercambiarValores(int* n1, int* n2)
{
    int temp = *n2;
    *n2 = *n1;
    *n1 = temp;
}