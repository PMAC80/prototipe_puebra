#ifndef MATAMBRITO_HPP
#define MATAMBRITO_HPP

#include "Producto_de_cerdo.hpp"

#include<iostream>
#include<string>

class Matambrito : public Producto_de_cerdo
{
private:
    /* data */
public:
    Matambrito (double peso_pedido , double precio_x_kilo);
    ~Matambrito ();

    virtual double calcular_precio() ;

};

#endif