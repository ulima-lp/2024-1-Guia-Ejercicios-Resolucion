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

	fraseCodificada.PrintDebug();

	return 0;
}