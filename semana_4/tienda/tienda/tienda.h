#ifndef tienda_h
#define tienda_h

#include <string>
#include <iostream>
#include <vector>
#include "producto.h"

using namespace std;

class Tienda {
private:
    string nombre;
    vector<Producto> productos;
    
public:
    // constructores
    Tienda();
    Tienda(string);
    
    // setter
    void setName(string);
    
    // getter
    string getName();
    Producto& getProducto(int);
    
    // metodo para imprimir
    void imprimir();
    
    // metodos adicionales
    void adicionarProducto(Producto&);
    unsigned long getCant();
    string getProveedorProducto(int);
    
    // destructor
    ~Tienda();
};

#endif

