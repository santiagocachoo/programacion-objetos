#ifndef tienda_h
#define tienda_h

#include <string>
#include <iostream>

using namespace std;

class Tienda {
private:
    string nombre;
    
public:
    // constructores
    Tienda();
    Tienda(string nombre);
    
    // setter
    void setName(string nombre);
    
    // getter
    string getName();
    
    // metodo para imprimir
    void imprimir();
    
    // destructor
    ~Tienda();
};

#endif

