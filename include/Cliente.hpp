#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include<iostream>
#include<string>

using namespace std;

class Cliente 
{
private:
    string nombre_cliente;
    string direccion_cliente;
    int id;
public:
    Cliente(string nombre_cliente, string direccion_cliente, int id);
    ~Cliente();

    string mostrar_Nombre();
    string cambiar_direccion();
    
};

#endif