#ifndef prestamo_h
#define prestamo_h

#include <iostream>
#include <string>

using namespace std;

class Prestamo {
private:
    int libroId;
    int usuarioId;
    string fechaPrestamo;
    string fechaDevolucion;
    
public:
    // constructor default
    Prestamo();
    
    // constructor parametrizado
    Prestamo(int, int, string, string);
    
    // getters
    int getId();
    int getLibroId();
    int getUsuarioId();
    string getFechaPrestamo();
    string getFechaDevolucion();
    
    // setters
    void setFechaDevolucion(string fechaDevolucion);
    
    // imprimir
    void imprimir();
    
    // destructor
    ~Prestamo();
};

#endif
