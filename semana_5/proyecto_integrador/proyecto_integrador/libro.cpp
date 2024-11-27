#include "libro.h"

// constructor por defecto
Libro::Libro() {
    id = 0;
    titulo = "";
    autor = "";
    isbn = "";
    estado = "Disponible";
    cantidad = 0;
}

// constructor parametrizado
Libro::Libro(int id, string titulo, string autor, string isbn, string estado, int cantidad) : id(id), titulo(titulo), autor(autor), isbn(isbn), estado(estado), cantidad(cantidad) {}

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

string Libro::getIsbn() {
    return isbn;
}

string Libro::getEstado() {
    return estado;
}

int Libro::getCantidad() {
    return cantidad;
}

// setters
void Libro::setEstado(string estado) {
    if (estado == "Disponible" || estado == "Prestado") {
        this->estado = estado;
    } else {
        cout<<"Estado invalido. Manteniendo estado actual: "<<this->estado<<endl;
    }
}

void Libro::setCantidad(int cantidad) {
    this->cantidad = cantidad;
}

// imprimir
void Libro::imprimir() {
    cout<<"ID: "<<id<<endl;
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Autor: "<<autor<<endl;
    cout<<"ISBN: "<<isbn<<endl;
    cout<<"Estado: "<<estado<<endl;
    cout<<"Cantidad de copias disponibles: "<<cantidad<<endl;
}

// destructor
Libro::~Libro() {}
