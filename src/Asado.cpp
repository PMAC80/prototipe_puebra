#include "../include/Asado.hpp"

#include<iostream>
#include<string>

using namespace std;

Asado::Asado(double peso_pedido , double precio_x_kilo): 
Producto_vacuno("asado de ternera", peso_pedido, precio_x_kilo) {}
Asado::~Asado() {}

double Asado::calcular_precio()
{
    return precio_x_kilo * peso_pedido;
}
