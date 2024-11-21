#ifndef producto_h
#define producto_h

#include <string>
#include <iostream>

using namespace std;

class Producto {
private:
    string id;
    string nombre;
    int cantidad;
    double precio;
    
public:
    // constructores
    Producto();
    Producto(string id, string nombre, int cantidad, double precio);
    
    // getters
    string getNombre();
    string getId();
    int getCantidad();
    double getPrecio();
    
    // setters
    void setName(string nombre);
    void setPrecio(double precio);
    
    // metodos de clase
    bool estaEnExistencia();
    void abastecer(int cantidad);
    double vender(int cantidad);
    void imprimir();
    
    // destructor
    ~Producto();
};

#endif

