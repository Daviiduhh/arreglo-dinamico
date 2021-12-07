#include "arregloDinamico.h"
#include <iostream>
using namespace std;

ArregloDinamico::ArregloDinamico(/* args */)
{
    arreglo = new string[MAX];
    cont = 0;
    tam = MAX;
}
ArregloDinamico::~ArregloDinamico(/* args */)
{
    delete[] arreglo;
}

void ArregloDinamico::insertar_final(const string &v) {
    if(cont == tam){
        //Expandir el arreglo
        expandir();
    }
    arreglo[cont] = v;
    cont++;
}
void ArregloDinamico::insertar_inicio(const string &v) {
    if(cont == tam){
        //Expandir el arreglo
        expandir();
    }
    for(size_t i = cont; i > 0; i--){
        arreglo[i] = arreglo[i-1];
    }
    arreglo[0] = v;
    cont++;
}

void ArregloDinamico::expandir() {
    string *nuevo = new string[tam+MAX];

    for(size_t i = 0; i < cont; i++){
        nuevo[i] = arreglo[i];
    }

    delete[] arreglo;
    arreglo = nuevo;
    tam = tam + MAX;
}

size_t ArregloDinamico::size() {
    return cont;
}