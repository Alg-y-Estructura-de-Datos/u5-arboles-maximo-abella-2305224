#include <iostream>
using namespace std;
#include "Arbol/ArbolBinario.h"

int main() {

    cout << "Ejercicio N° 2" << endl;
    ArbolBinario<int> Codigos;
    Codigos.put(4001);
    Codigos.put(2002);
    Codigos.put(6003);
    Codigos.put(1500);
    Codigos.put(3500);
    Codigos.put(5000);
    Codigos.put(7000);
    Codigos.print();

    try
    {
        Codigos.remove(2002);
        std::cout<<"Producto 2002 eliminado del sistema"<<std::endl;
    }
    catch(...)
    {
        std::cout<<"Producto Inexistente"<<std::endl;
    }
    Codigos.print();
    try
    {
        Codigos.remove(6003);
        std::cout<<"Producto 6003 eliminado del sistema"<<std::endl;
    }
    catch(...)
    {
        std::cout<<"Producto Inexistente"<<std::endl;
    }
    Codigos.print();
    try
    {
        Codigos.put(2005);
        std::cout<<"Codigo agregado al sistema"<<std::endl;
    }
    catch(...)
    {
        std::cout<<"Codigo en el sistema"<<std::endl;
    }
    Codigos.print();
    try
    {
        if (Codigos.search(4001))
        {
            std::cout<<"El valor existe en el sistema"<<std::endl;
        }
        
    }
    catch(...)
    {
        std::cout<<"El codigo no existe"<<std::endl;
    }
    Codigos.print();
    return 0;
}
