#ifndef MILANESA_HPP
#define MILANESA_HPP

#include "Producto_vacuno.hpp"

#include<iostream>
#include<string>

class Milanesa : public Producto_vacuno
{
private:
    /* data */
public:
    Milanesa (double peso_pedido, double precio_x_kilo);
    ~Milanesa ();

    virtual double calcular_precio() ;

};

#endif