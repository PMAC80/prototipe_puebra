#ifndef PRODUCTO_DE_GRANJA_HPP
#define PRODUCTO_DE_GRANJA_HPP

#include<iostream>
#include<string>

using namespace std;

class Producto_de_granja
{
protected:
    string nombre;
    double precio_x_kilo;
    double peso_pedido;

public:
    Producto_de_granja(string nombre, double precio_x_kilo, double peso_pedido);
    virtual ~Producto_de_granja() = default;

    double cambiar_de_precio();
    double cambiar_peso_pedido();

    virtual double calcular_precio() =0;
    string getNombre();
};

#endif