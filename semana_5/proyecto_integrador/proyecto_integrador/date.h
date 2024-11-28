#ifndef date_h
#define date_h

#include <iostream>
using namespace std;

struct Date {
    int dia;
    int mes;
    int anio;
    
    void imprimir() {
        cout<<dia<<"/"<<mes<<"/"<<anio;
    }
};

#endif

