#include "../include/Patita.hpp"

#include<iostream>
#include<string>

using namespace std;

Patita::Patita(double peso_pedido , double precio_x_kilo): Producto_de_pollo("patitas",peso_pedido, precio_x_kilo) {}
Patita::~Patita() {}


double Patita::calcular_precio()
{
    return precio_x_kilo * peso_pedido;
}