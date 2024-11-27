#ifndef biblioteca_h
#define biblioteca_h

#include <vector>
#include <string>
#include <iostream>
#include "libro.h"
#include "usuario.h"
#include "prestamo.h"

using namespace std;

class Biblioteca {
private:
    vector<Libro> libros;
    vector<Usuario> usuarios;
    vector<Prestamo> prestamos;
    
public:    
    // metodos para gestionar libros
    void agregarLibro(Libro libro);
    void mostrarLibrosDisponibles();
    Libro* buscarLibro(int libroId);
    
    // metodos para gestionar usuarios
    void registrarUsuario(Usuario usuario);
    Usuario* buscarUsuario(int usuarioId);
    
    // metodos para gestionar prestamos
    void realizarPrestamo(int libroId, int usuarioId, string fechaPrestamo, string fechaDevolucion);
    void devolverLibro(int libroId);
    
    // imprimir
    void imprimir();
    
    // destructor
    ~Biblioteca();
};

#endif
