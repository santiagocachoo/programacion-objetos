#include "proveedor.h"

// constructor default
Proveedor::Proveedor() {
    nombre = "";
    ciudad = "";
}

// constructor parametrizado
Proveedor::Proveedor(string nombre, string ciudad) : nombre(nombre), ciudad(ciudad) {}

// getters
string Proveedor::getNombre() {
    return nombre;
}

string Proveedor::getCiudad() {
    return ciudad;
}

// setters
void Proveedor::setNombre(string nombre) {
    this->nombre = nombre;
}

void Proveedor::setCiudad(string ciudad) {
    this->ciudad = ciudad;
}

// metodo para imprimir
void Proveedor::imprimir() {
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Ciudad: "<<ciudad<<endl;
}

// destructor
Proveedor::~Proveedor() {}
