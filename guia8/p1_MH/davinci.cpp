#include "davinci.h"

// ===================== Letra =============================

Letra::Letra(size_t num, std::string car)
    : num(num), caracter(car), siguiente(nullptr)
{}

// ===================== Frase =============================

Frase::Frase()
    :longitud(0), primer(nullptr)
{}

void Frase::AgregarLetra(size_t num, std::string caracter)
{
    Letra* nuevaLetra = new Letra(num, caracter);
    if (longitud == 0)
    {
        primer = nuevaLetra;
    }else
    {
        Letra* pPivot = primer;
        while (pPivot->siguiente != nullptr)
        {
            pPivot = pPivot->siguiente;
        }
        pPivot->siguiente = nuevaLetra;
    }
    longitud++;
}

void Frase::SetearCaracter(std::string car, size_t pos)
{
    Letra* pPivot = primer;
    size_t cont = 0;
    while (pPivot != nullptr)
    {
        if (cont == pos)
        {
            pPivot->caracter = car;
        }
        pPivot = pPivot->siguiente;
        cont++;
    }
}

void Frase::PrintDebug()
{
    Letra* pPivot = primer;
    while (pPivot != nullptr)
    {
        std::cout << pPivot->caracter
            << "(" << pPivot->num
            << ") ";
        pPivot = pPivot->siguiente;
    }
    std::cout << std::endl;
}
