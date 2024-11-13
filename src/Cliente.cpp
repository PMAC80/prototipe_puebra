#include "../include/Cliente.hpp"

#include<iostream>
#include<string>

Cliente::Cliente(string nombre_cliente, string direccion_cliente, int id): nombre_cliente(nombre_cliente),direccion_cliente(direccion_cliente),id(id) {}
Cliente::~Cliente() {}

string Cliente::mostrar_Nombre() 
{
    return nombre_cliente;
}

string Cliente::cambiar_direccion()
{
    return direccion_cliente;
}


