#include "contactos.h"

int main()
{
    ListaContactos lista;
    lista.AgregarContacto(
        "Pepito",
        25,
        "98432948",
        "a@gmail.com",
        Sexo::Masculino
    );
    lista.AgregarContacto(
        "Pepito",
        25,
        "98432948",
        "a@gmail.com",
        Sexo::Masculino
    );
    lista.AgregarContacto(
        "Rocio",
        21,
        "999888777",
        "b@gmail.com",
        Sexo::Femenino
    );
    lista.AgregarContacto(
        "Rocio",
        21,
        "999888777",
        "b@gmail.com",
        Sexo::Femenino
    );
    lista.AgregarContacto(
        "Piero",
        20,
        "932456443",
        "c@gmail.com",
        Sexo::Masculino
    );
    lista.AgregarContacto(
        "Piero",
        25,
        "99999999",
        "d@gmail.com",
        Sexo::Masculino
    );
    lista.ImprimirContactos();

    Contacto* c1 = lista.ObtenerContacto("Rocio");
    std::cout << c1->email << std::endl;

    lista.EliminarContacto("Piero");
    lista.ImprimirContactos();

    return 0;
}