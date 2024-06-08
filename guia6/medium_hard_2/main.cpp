#include "p2.h"

/*
 *
Implementa un programa que gestione un inventario de productos. 
Cada producto tiene un nombre, un código y un precio. Usa un struct para definir un producto. 
El programa debe permitir:

- Implementar un sistema de menús para que el usuario pueda ingresar las opciones a realizar.
- Ingresar datos de productos.
- Mostrar el producto con el precio más alto y el más bajo.
- Imprimir un reporte con la lista de los precios ordenados por precio.
 */

int main()
{
    Producto* arregloProductos = nullptr;
    size_t tamArregloProductos = 0;

    while(true)
    {
        int opcion = MostrarMenu();
        if (opcion == 0)
        {
            break;
        }else
        {
            switch(opcion)
            {
                case 1: 
                    arregloProductos = AgregarProducto(
                            arregloProductos,
                            &tamArregloProductos
                    );
                    break;
                case 2:
                    MostrarPrecioAltoBajo(
                            arregloProductos,
                            tamArregloProductos
                    );
                    break;
                case 3:
                    ImprimirReporte(
                            arregloProductos,
                            tamArregloProductos 
                    );
                    break;
            }
        }
    }
    return 0;
}
