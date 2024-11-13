#ifndef SUPREMA_HPP
#define SUPREMA_HPP

#include "Producto_de_pollo.hpp"

#include<iostream>
#include<string>

class Suprema : public Producto_de_pollo
{
private:
    /* data */
public:
    Suprema (double peso_pedido , double precio_x_kilo);
    ~Suprema ();

    virtual double calcular_precio() ;

};

#endif