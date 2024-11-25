#ifndef producto_h
#define producto_h

#include <string>
#include <iostream>
#include "proveedor.h"

using namespace std;

class Producto {
private:
    string id;
    string nombre;
    int cantidad;
    double precio;
    
    Proveedor proveedor;
    
public:
    // constructores
    Producto();
    Producto(string, string, int, double, Proveedor&);
    
    // getters
    string getNombre();
    string getId();
    int getCantidad();
    double getPrecio();
    string getNombreProveedor();
    
    // setters
    void setNombre(string);
    void setCantidad(int);
    void setPrecio(double);
    void setCiudadProveedor(string);
    
    // metodos de clase
    bool estaEnExistencia();
    void abastecer(int);
    double vender(int);
    void imprimir();
    
    // destructor
    ~Producto();
};

#endif

