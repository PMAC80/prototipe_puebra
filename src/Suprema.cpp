#include "../include/Suprema.hpp"

#include<iostream>
#include<string>

using namespace std;

Suprema::Suprema(double peso_pedido , double precio_x_kilo): Producto_de_pollo("suprema",peso_pedido, precio_x_kilo) {}
Suprema::~Suprema() {}


double Suprema::calcular_precio()
{
    return precio_x_kilo * peso_pedido;
}