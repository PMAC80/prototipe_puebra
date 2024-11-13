#ifndef VACIO_HPP
#define VACIO_HPP

#include "Producto_vacuno.hpp"

#include<iostream>
#include<string>

class Vacio : public Producto_vacuno
{
private:
    /* data */
public:
    Vacio (double peso_pedido , double precio_x_kilo);
    ~Vacio ();

    virtual double calcular_precio() ;

};

#endif