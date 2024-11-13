#ifndef PRODUCTO_VACUNO_HPP  
#define PRODUCTO_VACUNO_HPP

#include "Producto_de_granja.hpp"

#include<iostream>
#include<string>

using namespace std;

class Producto_vacuno : public Producto_de_granja 
{
private:
    /* data */
public:
    Producto_vacuno(string nombre , double precio_x_kilo, double cambiar_peso_pedido);
    virtual ~Producto_vacuno() = default;
};

#endif