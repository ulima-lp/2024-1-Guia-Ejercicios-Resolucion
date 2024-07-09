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
    lista.ImprimirContactos();
    return 0;
}