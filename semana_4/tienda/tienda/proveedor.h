#ifndef proveedor_h
#define proveedor_h

#include <string>
#include <iostream>

using namespace std;

class Proveedor {
private:
    string nombre;
    string ciudad;
    
public:
    // constructores
    Proveedor();
    Proveedor(string nombre, string ciudad);
    
    // getters
    string getNombre();
    string getCiudad();
    
    // getters
    void setNombre(string nombre);
    void setCiudad(string ciudad);
    
    // metodo para imprimir
    void imprimir();
    
    // destructor
    ~Proveedor();
};

#endif

