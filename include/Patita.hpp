#ifndef PATITA_HPP
#define PATITA_HPP

#include "Producto_de_pollo.hpp"

#include<iostream>
#include<string>

class Patita : public Producto_de_pollo
{
private:
    /* data */
public:
    Patita (double peso_pedido , double precio_x_kilo);
    ~Patita ();

    virtual double calcular_precio() ;

};

#endif