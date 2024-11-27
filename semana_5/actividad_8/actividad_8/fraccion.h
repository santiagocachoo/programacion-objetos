#ifndef fraccion_h
#define fraccion_h

#include <string>
#include <iostream>

using namespace std;

class Fraccion {
private:
    int num;
    int den;
    
public:
    // constructores
    Fraccion();
    Fraccion(int, int);
    
    // getters
    int getNumerador();
    int getDenominador();
    
    // setters
    void setNumerador(int);
    void setDenominador(int);
    
    // metodos adicionales
    double calcValorReal();
    Fraccion sumarFraccion(Fraccion);
    void imprimeFraccion();
    
    // destructor
    ~Fraccion();
};

#endif
