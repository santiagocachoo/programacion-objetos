#ifndef libro_h
#define libro_h

#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    int id;
    string titulo;
    string autor;
    int cantidad;;
    
public:
    // constructor default
    Libro();
    
    // constructor parametrizado
    Libro(int id, string titulo, string autor, int cantidad);
    
    // getters
    int getId();
    string getTitulo();
    string getAutor();
    int getCantidad();
    
    // setters
    void setCantidad(int cantidad);
    
    // mostrar informacion del libro
    void imprimir();
    
    // destructor
    ~Libro();
};

#endif

