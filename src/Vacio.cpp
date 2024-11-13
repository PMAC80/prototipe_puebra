#include "../include/Vacio.hpp"

#include<iostream>
#include<string>

using namespace std;

Vacio::Vacio(double peso_pedido , double precio_x_kilo): Producto_vacuno("vacio de ternera",peso_pedido, precio_x_kilo) {}
Vacio::~Vacio() {}


double Vacio::calcular_precio()
{
    return precio_x_kilo * peso_pedido;
}
