#include"../include/Item.hpp"

#include<iostream>

Item::Item(int numero_de_item,Producto_de_granja* tipo_de_producto,double cantidad_adquirida) : numero_de_item(numero_de_item),tipo_de_producto(tipo_de_producto),cantidad_adquirida(cantidad_adquirida) {}
Item::~Item() {delete tipo_de_producto;}

double Item::calcular_precio_final_item()
{
    return tipo_de_producto->calcular_precio();
    
}

double Item::mostrar_cantidad_de_items()
{
    return numero_de_item;
}
double Item::mostrar_cantidad_adquierida()
{
    return cantidad_adquirida;
}
void Item::mostrar_detalle()
{
    cout<<"         -N* de item: "<< mostrar_cantidad_de_items()<<endl;
    cout<<"         -Producto: "<< tipo_de_producto->getNombre()<<endl;
    cout<<"         -Cantidad adquirida: "<< mostrar_cantidad_adquierida()<<" kg "<<endl;
    cout<<"         -Precio: "<< tipo_de_producto->calcular_precio()<<" $"<<endl;



}

