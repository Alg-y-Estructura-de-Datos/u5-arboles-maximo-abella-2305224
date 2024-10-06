#include <iostream>
#include "Arbol/ArbolBinario.h"

void eliminarReserva(ArbolBinario<int> Reservas,int reserva) {
    try
    {
        Reservas.remove(reserva);
    }
    catch(...)
    {
        std::cout<<"Numero de reserva no existe"<<std::endl;
    }
    
}



int main() {
    ArbolBinario<int> Reservas;
    Reservas.put(15);
    Reservas.put(10);
    Reservas.put(20);
    Reservas.put(5);
    Reservas.put(12);
    Reservas.put(18);
    Reservas.put(25);
    Reservas.inorder();
    eliminarReserva(Reservas,10);
    eliminarReserva(Reservas,20);
    Reservas.inorder();
    Reservas.put(13);
    try
    {
        Reservas.search(12);
        std::cout<<"Mesa reservada"<<std::endl;
    }
    catch(...)
    {
        std::cout<<"La mesa no esta reservada"<<std::endl;
    }
return 0;
}