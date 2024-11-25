#include "tienda.h"

// constructor default
Tienda::Tienda() {}

// constructor parametrizado
Tienda::Tienda(string nombre) : nombre(nombre) {}

// setter
void Tienda::setName(string nombre) {
    this->nombre = nombre;
}

// getter
string Tienda::getName() {
    return nombre;
}

// metodo para imprimir datos
void Tienda::imprimir() {
    for (Producto p:productos){
        p.imprimir();
        cout<<endl;
    }
}

// metodos especificos
void Tienda::adicionarProducto(Producto & prod){
    productos.push_back(prod);
}

unsigned long Tienda::getCant(){
    return productos.size();
}

string Tienda::getProveedorProducto(int index) {
    return productos[index].getNombreProveedor();
    
}

Producto& Tienda::getProducto(int index) {
    return productos[index];
}

// destructor
Tienda::~Tienda() {}

