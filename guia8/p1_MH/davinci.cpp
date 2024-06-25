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

void Frase::Ordenar()
{
    for (size_t i= 0; i < longitud - 1; i ++ )
    {
        for (size_t j = 0; j < longitud - 1 - i ; j++)
        {
            if (ObtenerLetra(j)->num > ObtenerLetra(j+1)->num)
            {
                IntercambiarLetras(j, j+1);
            }
        }
    }
}

Letra *Frase::ObtenerLetra(size_t pos)
{
    size_t cont = 0;

    Letra* pPivot = primer;
    while(pPivot != nullptr)
    {
        if (cont == pos)
        {
            return pPivot;
        }
        pPivot = pPivot->siguiente;
        cont++;
    }
    return nullptr;
}

void Frase::IntercambiarLetras(size_t p1, size_t p2)
{
    Letra* letra1 = Sacar(p2);
    Insertar(letra1, p1);
    Letra* letra2 = Sacar(p1 + 1);
    Insertar(letra2, p2);
}

Letra *Frase::Sacar(size_t pos)
{
    Letra* pPivot = primer;

    if (pos == 0)
    {
        primer = pPivot->siguiente;
        pPivot->siguiente = nullptr; // IMPORTANTE!!
        longitud--;
        return pPivot;
    }else
    {
        Letra* pAnt = nullptr;
        size_t cont = 0;

        while(pPivot != nullptr)
        {
            if (cont == pos)
            {
                pAnt->siguiente = pPivot->siguiente;
                pPivot->siguiente = nullptr;
                longitud--;
                return pPivot;
            }
            pAnt = pPivot;
            pPivot = pPivot->siguiente;
            cont++;
        }
    }
    return nullptr;
}

void Frase::Insertar(Letra *letra, size_t pos)
{
    if (pos == 0)
    {
        letra->siguiente = primer;
        primer = letra;
    }else
    {
        Letra* pPivot = primer;
        Letra* pAnt = nullptr;

        size_t cont = 0;
        while (pPivot != nullptr)
        {
            if (cont == pos)
            {
                pAnt->siguiente = letra;
                letra->siguiente = pPivot;
                break; 
            }
            pAnt = pPivot;
            pPivot = pPivot->siguiente;
            cont++;
        }
        pAnt->siguiente = letra;
    }
    longitud++;
    
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
