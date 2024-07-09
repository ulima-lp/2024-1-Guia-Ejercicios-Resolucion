#include <iostream>

enum class Sexo
{
    Masculino, Femenino
};

class Contacto
{
public:
    std::string nombre;
    int edad;
    std::string telefono;
    std::string email;
    Sexo sexo;
    Contacto* siguiente;

    Contacto(
        const std::string& nombre,
        int edad,
        const std::string& telefono,
        const std::string& email,
        Sexo sexo);
    void Imprimir();
};

class ListaContactos
{
public:
    Contacto* primer;
    Contacto* ultimo;
    size_t tam;

    ListaContactos();
    void AgregarContacto(
        const std::string& nombre,
        int edad,
        const std::string& telefono,
        const std::string& email,
        Sexo sexo
    );
    void ImprimirContactos();
    Contacto* ObtenerContacto(
        const std::string& nombre
    );
    void EliminarContacto(
        const std::string& nombre
    );
};