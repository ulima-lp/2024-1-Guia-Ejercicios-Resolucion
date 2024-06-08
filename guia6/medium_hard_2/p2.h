#include <iostream>

struct Producto
{
    size_t id;
    std::string nombre;
    float precio;
};

/*
 * La funcion devolvera un entero que sea la 
 * accion a realizar:
 * 1: Agregar un nuevo producto
 * 2: Ver producto con precio mas alto y bajo
 * 3: Imprimir reporte
 * 0: Terminar programa
 */
int MostrarMenu();

/*
 * Funcion que registra un producto en el arreglo
 * de productos.
 */
Producto* AgregarProducto(
        Producto* arregloProductos,
        size_t* tamArregloProductos
);

/*
 * Funcion que devuelve los productos con precio
 * mas alto y bajo.
 */
void MostrarPrecioAltoBajo(
        Producto* arregloProductos,
        size_t tamArregloProductos
);

/*
 * Funcion que imprime la lista de precios
 * ordenados.
 */
void ImprimirReporte(
        Producto* arregloProductos,
        size_t tamArregloProductos
);



