#include "../include/Pechito.hpp"

#include<iostream>
#include<string>

using namespace std;

Pechito::Pechito(double peso_pedido , double precio_x_kilo): Producto_de_cerdo("pechito de cerdo",peso_pedido, precio_x_kilo) {}
Pechito::~Pechito() {}


double Pechito::calcular_precio()
{
    return precio_x_kilo * peso_pedido;
}