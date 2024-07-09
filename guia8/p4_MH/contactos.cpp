#include "contactos.h"

Contacto::Contacto(
    const std::string& nombre, 
    int edad, 
    const std::string& telefono, 
    const std::string& email,
    Sexo sexo
) : nombre(nombre), edad(edad), telefono(telefono),
    email(email), sexo(sexo), siguiente(nullptr)
{}

void Contacto::Imprimir()
{
    std::cout << nombre << "\t" 
        << edad << "\t" << telefono << "\t"
        << email << "\t" 
        << (sexo == Sexo::Masculino ? "Masculino" : "Femenino") << "\t"
        << std::endl;

}

ListaContactos::ListaContactos()
    : primer(nullptr), ultimo(nullptr), tam(0)
{}

void ListaContactos::AgregarContacto(
    const std::string &nombre, 
    int edad, 
    const std::string &telefono, 
    const std::string &email, 
    Sexo sexo)
{
    Contacto* nuevoContacto = new Contacto(
        nombre, edad, telefono,email, sexo
    );
    if (tam == 0)
    {
        primer = nuevoContacto;
        ultimo = nuevoContacto;
    }else
    {
        ultimo->siguiente = nuevoContacto;
        ultimo = nuevoContacto;
    }
    tam++;
}

void ListaContactos::ImprimirContactos()
{
    Contacto* pPivot = primer;
    while (pPivot != nullptr)
    {
        pPivot->Imprimir();
        pPivot = pPivot->siguiente;
    }
}
