#include"../include/Pedido.hpp"

#include<iostream>
#include<string>
using namespace std;

int Pedido::codigo_del_pedido_i = 101;

Pedido::Pedido(Cliente* cliente) 
    : codigo_del_pedido(codigo_del_pedido_i++), cliente(cliente), cantidad_de_item(0), monto_final(0) {} 

Pedido::~Pedido() 
{    
    for (int i = 0; i < cantidad_de_item; ++i) 
    {
        delete arreglo_de_items[i];    
    }
}
Cliente* Pedido::get_cliente()
{
    return cliente;
}
void Pedido::agregar_items(Item* item)
{
    if (cantidad_de_item < 10) {              
    arreglo_de_items[cantidad_de_item++] = item;
    calcular_precio_final();         
    }

}
void Pedido::calcular_precio_final()
{
    monto_final = 0;
    for (int i = 0; i < cantidad_de_item; ++i) {
        monto_final += arreglo_de_items[i]->calcular_precio_final_item();
    }
    //cout << "IMPORTE TOTAL : "<<monto_final<<" $"<< endl;
}
void Pedido::mostrar_pedido()
{
    cout << "--------------------------------------------------------------------------------------------- " << endl;
    cout << "N* de Pedido : " << codigo_del_pedido <<endl<<"--------------------------"<<endl<< "Cliente : " << cliente->mostrar_Nombre() << endl<<"--------------------------"<<endl;
    for (int i = 0; i < cantidad_de_item; ++i) {
        arreglo_de_items[i]->mostrar_detalle();
    }
    cout << "Total: $" << monto_final << endl;

}




