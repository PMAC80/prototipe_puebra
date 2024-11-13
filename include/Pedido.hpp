#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include"Cliente.hpp"
#include"Item.hpp"

#include<iostream>
#include<string>

class Pedido
{
private:
    static int codigo_del_pedido_i;
    int codigo_del_pedido;
    int cantidad_de_item;
    double monto_final;
    Cliente* cliente;
    Item* arreglo_de_items[10];
    double precio_final;
public:
    Pedido(Cliente* cliente);
    ~Pedido();

    Cliente* get_cliente();
    void agregar_items(Item* item);
    void calcular_precio_final();
    void mostrar_pedido();

};

#endif