#include "libro.h"

// constructor por defecto
Libro::Libro() {
    id = 0;
    titulo = "";
    autor = "";
    cantidad = 0;
}

// constructor parametrizado
Libro::Libro(int id, string titulo, string autor, int cantidad) : id(id), titulo(titulo), autor(autor), cantidad(cantidad) {}

// getters
int Libro::getId() {
    return id;
}

string Libro::getTitulo() {
    return titulo;
}

string Libro::getAutor() {
    return autor;
}

int Libro::getCantidad() {
    return cantidad;
}

// setters
void Libro::setCantidad(int cantidad) {
    if (cantidad >= 0) {
        this->cantidad = cantidad;
    } else {
        cout<<"Error: La canidad no puede ser negativa. Manteniendo cantidad actual: "<<this->cantidad<<endl;
    }
}

// imprimir
void Libro::imprimir() {
    cout<<"ID: "<<id<<endl;
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Autor: "<<autor<<endl;
    cout<<"Cantidad de copias disponibles: "<<cantidad<<endl;
}

// destructor
Libro::~Libro() {}
