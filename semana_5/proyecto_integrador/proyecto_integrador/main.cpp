//  sistema de gestion de una biblioteca con clases
//  ???
//  27/11/24

#include <iostream>
#include "biblioteca.h"
#include "libro.h"
#include "usuario.h"
#include "prestamo.h"

using namespace std;

int main() {
    Biblioteca miBiblioteca;
    
    // agregar libros a la biblioteca
    miBiblioteca.agregarLibro(Libro(1, "1984", "George Orwell", "12345", "Disponible", 5));
    miBiblioteca.agregarLibro(Libro(2, "The Stranger", "Albert Camus", "6789", "Disponible", 3));
    miBiblioteca.agregarLibro(Libro(3, "Crime and Punishment", "Fyodor Dostoevsky", "101112", "Disponible", 4));
    cout<<endl;
    
    // registrar usuarios
    miBiblioteca.registrarUsuario(Usuario(1, "Santiago Cacho"));
    miBiblioteca.registrarUsuario(Usuario(2, "Cesar Lopez"));
    miBiblioteca.registrarUsuario(Usuario(3, "Carlos Badilla"));
    cout<<endl;
    
    // mostrar libros disponibles
    miBiblioteca.mostrarLibrosDisponibles();
    
    // realizar prestamo
    miBiblioteca.realizarPrestamo(1, 1, "27/11/24", "28/12/24");
    
    // intentar prestar un libro ya prestado
    miBiblioteca.realizarPrestamo(1, 2, "27/11/24", "30/12/24");
    
    // devolver libro
    miBiblioteca.devolverLibro(1);
    
    // mosrar estado de biblioteca
    miBiblioteca.imprimir();
    
    // intentar devolver un libro ya dispoible
    miBiblioteca.devolverLibro(1);
    
    return 0;
}
