#include "fraccion.h"

// constructor default
Fraccion::Fraccion() {
    num = 1;
    den = 2;
}

// constructor parametrizado
Fraccion::Fraccion(int num, int den) : num(num), den(den) {}

// getters
int Fraccion::getNumerador() {
    return num;
}

int Fraccion::getDenominador() {
    return den;
}

// setters
void Fraccion::setNumerador(int num) {
    this->num = num;
}

void Fraccion::setDenominador(int den) {
    this->den = den;
}

// metodos adicionales
double Fraccion::calcValorReal() {
    return num * 1.0 / den;
}

Fraccion Fraccion::sumarFraccion(Fraccion f2) {
    int nuevoNum = num * f2.den + den * f2.num;
    int nuevoDen = den * f2.den;
    
    // simplificar fraccion con maximo comun divisor
    int a = nuevoNum;
    int b = nuevoDen;
    while (b != 0) {
        int bTemporal = b;
        b = a % b;
        a = bTemporal;
    }
    int mcd = a;
    
    nuevoNum /= mcd;
    nuevoDen /= mcd;
    
    return Fraccion(nuevoNum, nuevoDen);
}

void Fraccion::imprimeFraccion() {
    cout<<"La fraccion es: "<<num<<"/"<<den<<endl;
}

Fraccion::~Fraccion() {}

