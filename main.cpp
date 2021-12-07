#include <iostream>
#include "arregloDinamico.h"

using namespace std;

int main () {
    ArregloDinamico arr;

    arr.insertar_final("1");
    arr.insertar_final("2");
    arr.insertar_final("3");
    arr.insertar_final("4");
    arr.insertar_final("5");
    arr.insertar_final("6");
    arr.insertar_final("7");
    arr.insertar_final("8");
    
    arr.insertar_inicio("0");
    arr.insertar_inicio("-1");

    for(size_t i = 0; i < arr.size();i++){
        cout << arr[i] << " ";
    }

    return 0;
}