#include <iostream>
#include "davinci.h"

int main()
{
	// Leemos cantidad de letras
	size_t cantidad;
	std::cin >> cantidad;

	// Leemos nros de frase codificada
	Frase fraseCodificada;
	for (size_t i=0; i < cantidad; i++)
	{
		size_t num;
		std::cin >> num;
		fraseCodificada.AgregarLetra(num, "");
	}

	// Leer cadena codificada y luego pasarla
	// a nuestra frase creada
	std::string cadCodificada = "";
	std::cin >> cadCodificada;

	for (size_t i=0; i < cantidad; i++)
	{
		std::string caracter(1, cadCodificada[i]);
		fraseCodificada.SetearCaracter(caracter, i);
	}

	fraseCodificada.PrintDebug();
	fraseCodificada.Ordenar();
	fraseCodificada.PrintDebug();

	return 0;
}