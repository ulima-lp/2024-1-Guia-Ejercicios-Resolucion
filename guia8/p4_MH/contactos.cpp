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

Contacto *ListaContactos::ObtenerContacto(
    const std::string &nombre)
{
    Contacto* pPivot = primer;
    while (pPivot != nullptr)
    {
        if (pPivot->nombre == nombre)
        {
            return pPivot;
        }
        pPivot = pPivot->siguiente;
    }
    return nullptr;
}

void ListaContactos::EliminarContacto(
    const std::string &nombre)
{
    Contacto* pPivot = primer;
    Contacto* pAnterior = nullptr;
    bool eliminado = false;

    while (pPivot != nullptr)
    {
        if (pPivot->nombre == nombre)
        {
            // Eliminar contacto
            if (pAnterior == nullptr)
            {
                // Eliminar el primer elemento
                primer = pPivot->siguiente;
                if (primer->siguiente == nullptr)
                {
                    ultimo = primer;
                }
            }else
            {
                pAnterior->siguiente = pPivot->siguiente;
                if (pPivot->siguiente == nullptr)
                {
                    ultimo = pAnterior;
                }
            }
            
            Contacto* temp = pPivot->siguiente;
            delete pPivot;
            pPivot = temp;
            eliminado = true;
            tam--;
        }

        if (!eliminado)
        {
            pAnterior = pPivot;
            pPivot = pPivot->siguiente;
        }else
        {
            eliminado = false;
        }
    }
}
