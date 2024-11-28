#ifndef prestamo_h
#define prestamo_h

#include <iostream>
#include <string>
#include "date.h"

using namespace std;

class Prestamo {
private:
    int libroId;
    int usuarioId;
    Date fechaPrestamo;
    Date fechaDevolucion;
    string estado;
    
public:    
    // constructor parametrizado
    Prestamo(int, int, Date, Date, string estado = "prestado");
    
    // getters
    int getLibroId();
    int getUsuarioId();
    Date getFechaPrestamo();
    Date getFechaDevolucion();
    string getEstado();
    
    // setters
    void setFechaDevolucion(Date fechaDevolucion);
    void setEstado(string estado);
    
    // imprimir
    void imprimir();
    
    // destructor
    ~Prestamo();
};

#endif
