#include <iostream>
#include "Arbol/ArbolBinario.h"

void entrega(ArbolBinario<int> numeros,int numero) {
    try
    {
        numeros.remove(numero);
    }
    catch(...)
    {
        std::cout<<"Numero inexistente"<<std::endl;
    }
}

int main() {
    ArbolBinario<int> NSeguimiento;
    NSeguimiento.put(1001);
    NSeguimiento.put(5002);
    NSeguimiento.put(3003);
    NSeguimiento.put(2004);
    NSeguimiento.put(4500);
    NSeguimiento.put(7005);
    NSeguimiento.put(8006);
    NSeguimiento.inorder();
    entrega(NSeguimiento,2004);
    entrega(NSeguimiento,4500);
    NSeguimiento.inorder();
    try
    {
        NSeguimiento.search(1001);
        std::cout<<"El paquete todavia esta en envio"<<std::endl;
    }
    catch(...)
    {
        std::cout<<"El paquete no esta en envio"<<std::endl;
    }

}