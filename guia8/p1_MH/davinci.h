#include <iostream>

class Letra
{
public:
    size_t num;
    std::string caracter;
    Letra* siguiente;

    Letra(size_t num, std::string car);
};

class Frase
{
public:
    size_t longitud;
    Letra* primer;

    Frase();
    void AgregarLetra(size_t num, std::string caracter);
    void SetearCaracter(std::string car, size_t pos);
    void Ordenar();
    Letra* ObtenerLetra(size_t pos);
    void IntercambiarLetras(size_t p1, size_t p2);
    Letra* Sacar(size_t pos);
    void Insertar(Letra* letra, size_t pos);
    void PrintDebug();
};