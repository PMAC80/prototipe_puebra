#ifndef PRODUCTO_DE_POLLO_HPP  
#define PRODUCTO_DE_POLLO_HPP

#include "Producto_de_granja.hpp"

#include<iostream>
#include<string>

using namespace std;

class Producto_de_pollo : public Producto_de_granja 
{
private:
    /* data */
public:
    Producto_de_pollo(string nombre , double precio_x_kilo, double cambiar_peso_pedido);
    virtual ~Producto_de_pollo() = default;
    
};

#endif