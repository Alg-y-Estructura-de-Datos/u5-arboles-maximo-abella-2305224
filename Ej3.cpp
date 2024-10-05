#include <iostream>
using namespace std;
#include "Arbol/ArbolBinario.h"

int main() {

    cout << "Ejercicio N° 3" << endl;
    ArbolBinario<int> Numeros;
    Numeros.put(500);
    Numeros.put(250);
    Numeros.put(750);
    Numeros.put(100);
    Numeros.put(300);
    Numeros.put(600);
    Numeros.put(800);
    Numeros.inorder();
    try
    {
        Numeros.remove(250);
        std::cout<<"numero eliminado"<<std::endl;
    }
    catch(...)
    {
        std::cout<<"Usuario no existe"<<std::endl;
    }
    Numeros.inorder();

    try
    {
        Numeros.search(300);
        std::cout<<"Numero encontrado"<<std::endl;
    }
    catch(...)
    {
        std::cout<<"Usuario no existe"<<std::endl;
    }

    try
    {
        Numeros.search(750);
        std::cout<<"Numero encontrado"<<std::endl;
    }
    catch(...)
    {
        std::cout<<"Usuario no existe"<<std::endl;
    }
    


    return 0;
}
