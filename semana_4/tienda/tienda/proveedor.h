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
    Proveedor(string, string);
    
    // getters
    string getNombre();
    string getCiudad();
    
    // setters
    void setNombre(string);
    void setCiudad(string);
    
    // metodo para imprimir
    void imprimir();
    
    // destructor
    ~Proveedor();
};

#endif

