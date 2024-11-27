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
    string isbn;
    string estado;
    int cantidad;;
    
public:
    // constructor default
    Libro();
    
    // constructor parametrizado
    Libro(int, string, string, string, string, int);
    
    // getters
    int getId();
    string getTitulo();
    string getAutor();
    string getIsbn();
    string getEstado();
    int getCantidad();
    
    // setters
    void setEstado(string estado);
    void setCantidad(int cantidad);
    
    // mostrar informacion del libro
    void imprimir();
    
    // destructor
    ~Libro();
};

#endif

