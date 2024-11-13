#include "../include/Matambrito.hpp"

#include<iostream>
#include<string>

using namespace std;

Matambrito::Matambrito(double peso_pedido , double precio_x_kilo): Producto_de_cerdo("matambrito de cerdo",peso_pedido, precio_x_kilo) {}
Matambrito::~Matambrito() {}

double Matambrito::calcular_precio()
{
    return precio_x_kilo * peso_pedido;
}