#include "producto.h"

// constructor default
Producto::Producto() {
    id = "";
    nombre = "";
    cantidad = 0;
    precio = 0.0;
}

// constructor parametrizado
Producto::Producto(string id, string nombre, int cantidad, double precio, Proveedor& proveedor) : id(id), nombre(nombre), cantidad(cantidad), precio(precio), proveedor(proveedor) {}

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

string Producto::getNombreProveedor() {
    return proveedor.getNombre();
}

// setters
void Producto::setNombre(string nombre) {
    this->nombre = nombre;
}

void Producto::setCantidad(int cantidad) {
    this->cantidad = cantidad;
}

void Producto::setPrecio(double precio) {
    this->precio = precio;
}

void Producto::setCiudadProveedor(string ciudad) {
    proveedor.setCiudad(ciudad);
}

// metodos de clase
bool Producto::estaEnExistencia() {
    return cantidad > 0;
}

void Producto::abastecer(int cantidad) {
        this->cantidad += cantidad;
}

double Producto::vender(int cantidad) {
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
    cout<<"Proveedor: "<<proveedor.getNombre()<<endl;
    cout<<"Ciudad de proveedor: "<<proveedor.getCiudad()<<endl;
}

// destructor
Producto::~Producto() {}
