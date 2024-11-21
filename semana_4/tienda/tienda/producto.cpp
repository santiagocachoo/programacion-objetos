#include "producto.h"

// constructor default
Producto::Producto() {
    id = "";
    nombre = "";
    cantidad = 0;
    precio = 0.0;
}

// constructor parametrizado
Producto::Producto(string id, string nombre, int cantidad, double precio) : id(id), nombre(nombre), cantidad(cantidad), precio(precio) {}

// getters
string Producto::getNombre() {
    return nombre;
}
string Producto::getId() {
    return id;
}

int Producto::getCantidad() {
    return cantidad;
}

double Producto::getPrecio() {
    return precio;
}

// setters
void Producto::setName(string nombre) {
    this->nombre = nombre;
}

void Producto::setPrecio(double precio) {
    this->precio = precio;
}

// metodos de clase
bool Producto::estaEnExistencia() {
    return cantidad > 0;
}

void Producto::abastecer(int cantidad) {
    if (cantidad > 0){
        this->cantidad += cantidad;
    } else {
        cout<<"Error: No se puede abastecer con una cantidad negativa"<<endl;
    }
}

double Producto::vender(int cantidad) {
    if (cantidad <= 0) {
        cout<<"Error: Cantidad a vender debe ser mayor que 0"<<endl;
        return -1;
    }
    if (cantidad <= this->cantidad) {
        this->cantidad -= cantidad;
        return cantidad * precio;
    } else {
        return -1;
    }
}

void Producto::imprimir() {
    cout<<"ID: "<<id<<endl;
    cout<<"Nombre :"<<nombre<<endl;
    cout<<"Cantidad: "<<cantidad<<endl;
    cout<<"Precio: "<<precio<<endl;
}

// destructor
Producto::~Producto() {}
