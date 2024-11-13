#ifndef ITEM_HPP
#define ITEM_HPP

#include "Producto_de_granja.hpp"


class Item
{
private:
    int numero_de_item;
    Producto_de_granja* tipo_de_producto;
    double precio_unitario;
    double cantidad_adquirida;
    double precio_final_por_item;

public:
    Item(int numero_de_item,Producto_de_granja* tipo_de_producto, double cantidad_adquirida);
    ~Item();

    double calcular_precio_final_item();
    double mostrar_cantidad_de_items();
    void mostrar_detalle();
    double mostrar_cantidad_adquierida();
};

#endif