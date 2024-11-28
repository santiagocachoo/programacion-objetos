#ifndef usuario_H
#define usuario_H

#include <string>
#include <iostream>
#include <vector>
#include "prestamo.h"

using namespace std;

class Usuario {
private:
    int id;
    string nombre;
    vector<Prestamo*> historial;
    
public:
    // constructor default
    Usuario();
    
    // constructor parametrizado
    Usuario(int id, string nombre);
    
    // getters
    int getId();
    string getNombre();
    vector<Prestamo*> getHistorial();
    
    // metodos para prestamos
    void agregarPrestamo(Prestamo* prestamo);
    void eliminarPrestamo(int libroId);
    
    // imprimir
    void imprimir();
    
    // destructor
    ~Usuario();
};

#endif

