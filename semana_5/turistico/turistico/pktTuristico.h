#ifndef pktTuristico_h
#define pktTuristico_h

#include <string>
#include <iostream>

using namespace std;

class PaqueteTuristico {
private:
    string destino;
    double precio;
    int capacidad;
    int cantReservas;
    
public:
    // constructores
    PaqueteTuristico();
    PaqueteTuristico(string, double, int);
    
    // getters
    string getDestino();
    double getPrecio();
    int getCapacidad();
    int getCantReservas();
    
    // setters
    void setDestino(string);
    void setPrecio(double);
    
    // metodos
    bool reservar(int);
    void incCapacidad(int);
    int obtDisponibilidad();
    void imprimir();
    bool esDestino(string);
    
    // destructor
    ~PaqueteTuristico();
};

#endif



