#ifndef producto_h
#define producto_h

#include <string>
using namespace std;

class Producto
{
private:
    string id;
    string nombre;
    string marca;
    int cantidad;
    
public:
    Producto(string, string, string, int);
    void setNombre(string);
    int getCantidad();
    void setCantidad(int);
    bool estaEnFalta();
    int despachar(int);
};
