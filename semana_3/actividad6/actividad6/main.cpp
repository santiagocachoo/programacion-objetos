#include <iostream>
#include "punto.h"

using namespace std;

int main() {
    // crear dos puntos
    Point p1(3, 4);
    Point p2(7, 1);
    
    // mostrar coordenadas de los puntos
    cout<<"Punto 1: ("<<p1.getX()<<", "<<p1.getY()<<")"<<endl;
    cout<<"Punto 2: ("<<p2.getX()<<", "<<p2.getY()<<")"<<endl;
    
    // calcular distancia entre puntos
    cout<<"La distancia entre el punto 1 y el punto 2 es: "<<p1.distance(p2)<<endl;
    
    return 0;
}
