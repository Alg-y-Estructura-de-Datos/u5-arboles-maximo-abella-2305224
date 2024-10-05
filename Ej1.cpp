#include <iostream>
using namespace std;
#include "Arbol/ArbolBinario.h"

int main() {

    cout << "Ejercicio N° 1" << endl;
    ArbolBinario<int> Ar1;
    Ar1.put(101);
    Ar1.put(52);
    Ar1.put(198);
    Ar1.put(36);
    Ar1.put(75);
    Ar1.put(150);
    Ar1.put(200);
    Ar1.print();
    try
    {
        Ar1.search(76);
        std::cout<<"El Libro fue encontrado"<<std::endl;
    }
    catch(...)
    {
        std::cout<<"El dato no esta en la lista"<<std::endl;
    }
    try
    {
        Ar1.remove(52);
        std::cout<<"Elemento Borrado"<<std::endl;
    }
    catch(...)
    {
        std::cout<<"El dato no existe"<<std::endl;
    }
    Ar1.print();


    return 0;
}
