#ifndef PECHITO_HPP
#define PECHITO_HPP

#include "Producto_de_cerdo.hpp"

#include<iostream>
#include<string>

class Pechito : public Producto_de_cerdo
{
private:
    /* data */
public:
    Pechito (double peso_pedido , double precio_x_kilo);
    ~Pechito ();

    virtual double calcular_precio() ;

};

#endif