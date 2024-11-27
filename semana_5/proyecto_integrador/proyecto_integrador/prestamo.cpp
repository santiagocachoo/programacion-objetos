#include "prestamo.h"

// constructor default
Prestamo::Prestamo() {
    libroId = 0;
    usuarioId = 0;
    fechaPrestamo = "";
    fechaDevolucion = "";
}

// constructor parametrizado
Prestamo::Prestamo(int libroId, int usuarioId, string fechaPrestamo, string fechaDevolucion) : libroId(libroId), usuarioId(usuarioId), fechaPrestamo(fechaPrestamo), fechaDevolucion(fechaDevolucion) {}

// getters

int Prestamo::getLibroId() {
    return libroId;
}

int Prestamo::getUsuarioId() {
    return usuarioId;
}

string Prestamo::getFechaPrestamo() {
    return fechaPrestamo;
}

string Prestamo::getFechaDevolucion() {
    return fechaDevolucion;
}

// setters
void Prestamo::setFechaDevolucion(string fechaDevolucion) {
    this->fechaDevolucion = fechaDevolucion;
}

// imprimir
void Prestamo::imprimir() {
    cout<<"ID del libro prestado: "<<libroId<<endl;
    cout<<"ID del usuario: "<<usuarioId<<endl;
    cout<<"Fecha del prestamo: "<<fechaPrestamo<<endl;
    cout<<"Fecha de devolucion: "<<fechaDevolucion<<endl;
}

// destructor
Prestamo::~Prestamo() {}
