#include "prestamo.h"

// constructor parametrizado
Prestamo::Prestamo(int libroId, int usuarioId, Date fechaPrestamo, Date fechaDevolucion, string estado) : libroId(libroId), usuarioId(usuarioId), fechaPrestamo(fechaPrestamo), fechaDevolucion(fechaDevolucion), estado(estado) {}

// getters

int Prestamo::getLibroId() {
    return libroId;
}

int Prestamo::getUsuarioId() {
    return usuarioId;
}

Date Prestamo::getFechaPrestamo() {
    return fechaPrestamo;
}

Date Prestamo::getFechaDevolucion() {
    return fechaDevolucion;
}

string Prestamo::getEstado() {
    return estado;
}

// setters
void Prestamo::setFechaDevolucion(Date fechaDevolucion) {
    this->fechaDevolucion = fechaDevolucion;
}

void Prestamo::setEstado(string estado) {
    this->estado = estado;
}

// imprimir
void Prestamo::imprimir() {
    cout<<"ID del libro prestado: "<<libroId<<endl;
    cout<<"ID del usuario: "<<usuarioId<<endl;
    cout<<"Fecha del prestamo: ";
    fechaPrestamo.imprimir();
    cout<<endl;
    cout<<"Fecha de devolucion: ";
    fechaDevolucion.imprimir();
    cout<<endl;
    cout<<"Estado: "<<estado<<endl;
}

// destructor
Prestamo::~Prestamo() {}
