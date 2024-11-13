#ifndef ASADO_HPP
#define ASADO_HPP

#include "Producto_vacuno.hpp"

#include<iostream>
#include<string>

class Asado : public Producto_vacuno
{
public:
    Asado(double peso_pedido , double precio_x_kilo);
    ~Asado();

    double calcular_precio() ;
    
};

#endif