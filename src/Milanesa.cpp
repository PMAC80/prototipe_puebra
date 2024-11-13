#include "../include/Milanesa.hpp"

#include<iostream>
#include<string>

using namespace std;

Milanesa::Milanesa(double peso_pedido , double precio_x_kilo): Producto_vacuno("milanesa de pesseto",peso_pedido, precio_x_kilo) {}
Milanesa::~Milanesa() {}



double Milanesa::calcular_precio()
{
    return precio_x_kilo * peso_pedido;
}