//  Archivo clase producto
//  Santiago Cacho Herrera A01255853
//  14/11/24

#include <iostream>
#include <string>

using namespace std;

class Producto {
private:
    string id;
    string nombre;
    string marca;
    int cantidad;
    
public:
    Producto(string cId, string cNombre, string cMarca, int cCantidad) {
        id = cId;
        nombre = cNombre;
        marca = cMarca;
        cantidad = cCantidad;
    };
    
    ~Producto() {}
    
    string getNombre() {
        return nombre;
    }
    
    int getCantidad() {
        return cantidad;
    }
    
    void setNombre(string cNombre) {
        nombre = cNombre;
    }
    
    void setCantidad(int cCantidad) {
        cantidad = cCantidad;
    }
    
    bool estaEnFalta() {
        return cantidad < 5;
    }
    
    int despachar(int cantidadSolicitada) {
        if (cantidadSolicitada <= cantidad) {
            cantidad -= cantidadSolicitada;
            return cantidad;
        } else {
            return -1;
        }
    }
};

int main() {
    Producto producto("CO2345", "Jabón", "Palmolive", 20);
    
    if (producto.estaEnFalta()) {
        cout << "El producto esta en falta" << endl;
    } else {
        cout << "El producto no está en falta" << endl;
    }
    
    return 0;
}
