#include "p2.h"

int MostrarMenu()
{
    std::cout << "MENU INVENTARIO: " << std::endl;
    std::cout << "(1) : Agregar Producto nuevo" << std::endl;
    std::cout << "(2) : Mostrar productos con precio mas alto y bajo"
        << std::endl;
    std::cout << "(3) : Imprimir reporte de productos" << std::endl;
    int opcion;
    std::cout << "Ingrese opcion: ";
    std::cin >> opcion;
    return opcion;
}

Producto* AgregarProducto(
        Producto* arregloProductos,
        size_t* tamArregloProductos
)
{
    std::string nombre;
    float precio;
    std::cout << "AGREGAR PRODUCTO: " << std::endl;
    std::cout << "Ingrese nombre: " ;
    std::cin >> nombre;
    std::cout << "Ingrese precio: ";
    std::cin >> precio;
    
    
    if (*tamArregloProductos == 0)
    {
        // Primer producto
        // Creando en el heap
        Producto* producto = new Producto[1];
        producto[0].nombre = nombre;
        producto[0].precio = precio;
        producto[0].id = (*tamArregloProductos) + 1;
        (*tamArregloProductos)++;
        
        return producto;

    }else
    {
        // Hay mas de un producto
        //1. Creamos un nuevo arreglo
        Producto* arregloNuevo = 
            new Producto[(*tamArregloProductos) + 1];

        //2. Trasnferencia de datos
        for (size_t i = 0; i < (*tamArregloProductos); i++)
        {
            arregloNuevo[i] = arregloProductos[i];
        }

        //3. Agregar el nuevo elemento
        arregloNuevo[(*tamArregloProductos)].nombre = nombre;
        arregloNuevo[(*tamArregloProductos)].precio = precio;
        arregloNuevo[(*tamArregloProductos)].id = 
            (*tamArregloProductos) + 1;

        //4. Liberar espacio de arreglo antiguo
        delete[] arregloProductos;

        (*tamArregloProductos)++;

        return arregloNuevo;
    }
}

void MostrarPrecioAltoBajo(
        Producto* arregloProductos,
        size_t tamArregloProductos
)
{
    Producto* productoMasCaro = arregloProductos;
    Producto* productoMasBarato = arregloProductos;

    for (size_t i = 0; i < tamArregloProductos; i++)
    {
        Producto producto = arregloProductos[i];
        if (productoMasCaro->precio < producto.precio)
        {
            // Hay un nuevo producto mas caro
            productoMasCaro = &producto;
        }
        if (productoMasBarato->precio > producto.precio)
        {
            // Hay un nuevo producto mas barato
            productoMasBarato = &producto;
        }
    }

    std::cout << "PRODUCTO MAS CARO: "
        << productoMasCaro->nombre
        << "(" << productoMasCaro->precio << ")"
        << std::endl;
    std::cout << "PRODUCTO MAS BARATO: "
        << productoMasBarato->nombre
        << "(" << productoMasBarato->precio << ")"
        << std::endl;
}

void ImprimirReporte(
        Producto* arregloProductos,
        size_t tamArregloProductos
)
{
    // Utilizando bubblesort.
    int i,j;
    bool intercambiar;
    for (i = 0; i < tamArregloProductos; i++)
    {
        intercambiar = false;
        for (j = 0; j < tamArregloProductos - i - 1; j++)
        {
            if (arregloProductos[j] > arregloProductos[j+1])
            {
                Producto temp;
                temp.nombre = arregloProductos[j].nombre;
                temp.precio = arregloProductos[j].precio;
                temp.id = arregloProductos[j]. id;

                arregloProductos[j].nombre = arregloProductos[j+1].nombre;
                arregloProductos[j].id = arregloProductos[j+1].id;
                arregloProductos[j].precio = arregloProductos[j+1].precio;

                arregloProductos[j+1].nombre = temp.nombre;
                arregloProductos[j+1].id = temp.id;
                arregloProductos[j+1].precio = temp.precio; 

                intercambiar = true;
            }
        }

        if (intercambiar == false)
        {
            break;
        }
    }

    for (size_t i = 0; i < tamArregloProductos; i++)
    {
        std::cout << arregloProductos[i].id << "\t"
            << arregloProductos[i].nombre << "\t"
            << arregloProductos[i].precio << std::endl;
    }
}
