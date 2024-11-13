#include <iostream>
#include <string>

//#include "./include/Producto_de_granja.hpp"
#include "./include/Cliente.hpp"
#include "./include/Item.hpp"
#include "./include/Pedido.hpp"
#include "./include/Matambrito.hpp"
#include "./include/Pechito.hpp"
#include "./include/Patita.hpp"
#include "./include/Suprema.hpp"
#include "./include/Milanesa.hpp"
#include "./include/Vacio.hpp"
#include "./include/Asado.hpp"


using namespace std;

void clearConsole();
void pauseConsole();

int main()
{
    clearConsole();

    Cliente* cliente1 = new Cliente("Jhose Oeming", "santa clara",001);
    Cliente* cliente2 = new Cliente("Maximilano Antonelli", "serena",002);
    Cliente* cliente3 = new Cliente("Christian Atkinson", "centro",003);

    
    Producto_de_granja* suprema1 = new Suprema(2.5,2300); 
    Producto_de_granja* asado1 = new Asado(4.5,11000);         
    Producto_de_granja* vacio1 = new Vacio(3.5,7500);  
    Producto_de_granja* Matambrito1 = new Matambrito(2.5,7500); 
    Producto_de_granja* patita1 = new Patita(1.250,7500);  

    Item* item1 = new Item(1, asado1,1.5);  
    Item* item2 = new Item(2, vacio1,3.5);      
    Item* item3 = new Item(3, suprema1,1.100);  
    Item* item4 = new Item(4, Matambrito1,1.250); 
    Item* item5 = new Item(5, vacio1,1.0);  
    
    Pedido pedido1(cliente1);
    pedido1.agregar_items(item1);
    pedido1.agregar_items(item2);
    pedido1.agregar_items(item3);

    Pedido pedido2(cliente2);
    pedido2.agregar_items(item4);
    pedido2.agregar_items(item5);

    Pedido pedido3(cliente3);
    pedido3.agregar_items(item1);
    pedido3.agregar_items(item5);

    cout << "                         PEDIDO - GRANJA UKELELE -               " << endl;

    pedido1.mostrar_pedido();
    pedido1.calcular_precio_final();

    pedido2.mostrar_pedido();
    pedido2.calcular_precio_final();

    pedido3.mostrar_pedido();
    pedido3.calcular_precio_final();


    delete cliente1;
    delete cliente2;
    delete cliente3;
    delete item1;
    delete item2;
    delete item3;
    delete item4;
    delete item5;

    return 0;


}

void clearConsole() 
{
    #ifdef __unix__
        system("clear");
    #elif __APPLE__
        system("clear");
    #elif defined(_WIN32) || defined(WIN64)
        system("cls");
    #endif
}
void pauseConsole()                                        
{
cout << "Presione Enter para continuar..." << endl;
cin.ignore();                                               
cin.get();                                                  
}  
