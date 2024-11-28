#ifndef biblioteca_h
#define biblioteca_h

#include <vector>
#include <string>
#include <iostream>
#include "libro.h"
#include "usuario.h"
#include "prestamo.h"
#include "date.h"

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
    Libro& buscarLibro(int libroId);
    
    // metodos para gestionar usuarios
    void registrarUsuario(Usuario usuario);
    Usuario& buscarUsuario(int usuarioId);
    
    // metodos para gestionar prestamos
    void realizarPrestamo(int libroId, int usuarioId, Date fechaPrestamo, Date fechaDevolucion);
    void devolverLibro(int libroId, int usuarioId);
    
    // metodos para imprimir
    void imprimirBiblioteca();
    void imprimirUsuario(int usuarioId);
    void imprimirLibro(int libroId);
    void imprimirPrestamo(int libroId, int usuarioId);
    
    // destructor
    ~Biblioteca();
};

#endif
