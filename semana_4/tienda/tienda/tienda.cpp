#include "tienda.h"

// constructor default
Tienda::Tienda() {
    nombre = "";
}

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
    cout<<"Nombre: "<<nombre<<endl;
}

// destructor
Tienda::~Tienda() {}

