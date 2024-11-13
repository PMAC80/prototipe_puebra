#include "../include/Producto_de_granja.hpp"

#include<iostream>

using namespace std;

Producto_de_granja::Producto_de_granja(string nombre, double precio_x_kilo, double peso_pedido) :
nombre(nombre),precio_x_kilo(precio_x_kilo),peso_pedido(peso_pedido){}

string Producto_de_granja::getNombre()
{
    return nombre;
}