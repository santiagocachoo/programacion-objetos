#ifndef usuario_H
#define usuario_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Usuario {
private:
    int id;
    string nombre;
    vector<int> historial;
    
public:
    // constructor default
    Usuario();
    
    // constructor parametrizado
    Usuario(int, string);
    
    // getters
    int getId();
    string getNombre();
    vector<int> getHistorial();
    
    // metodos para prestamos
    void agregarPrestamo(int libroId);
    void eliminarPrestamo(int libroId);
    
    // imprimir
    void imprimir();
    
    // destructor
    ~Usuario();
};

#endif

