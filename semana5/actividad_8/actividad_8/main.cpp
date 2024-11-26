// programa para manejar clases de fracciones
// Santiago Cacho Herrera A01255853
// 25/11/24

#include <iostream>
#include <vector>
#include "fraccion.h"

using namespace std;

int main() {
    int n;
    cout<<"Cuantas fracciones desea ingresar? ";
    cin>>n;
    
    // vector para almacenar fracciones
    vector<Fraccion> fracciones;
    
    // solicitar fracciones de usuario
    for (int i = 0; i < n; i++) {
        int num, den;
        cout<<"Introduce el numerador de la fraccion "<<i+1<<": ";
        cin>>num;
        
        cout<<"Introduce el denominador de la fraccion "<<i+1<<": ";
        cin>>den;
        
        while (den == 0) {
            cout<<"El denominador no puede ser 0. Ingrese otro valor: ";
            cin>>den;
        }
        cout<<endl;
        // crear fraccion y añadirla al vector
        fracciones.push_back(Fraccion(num, den));
    }
    
    // mostrar las fracciones ingresadas
    cout<<"Fracciones ingresadas:"<<endl;
    for (int i = 0; i < fracciones.size(); i++) {
        cout<<"Fraccion "<<i+1<<": ";
        fracciones[i].imprimeFraccion();
    } cout<<endl;
    
    // prueba de suma de fracciones
    if (fracciones.size() > 1) {
        cout<<"Sumando las dos primeras fracciones"<<endl;
        Fraccion resultado = fracciones[0].sumarFraccion(fracciones[1]);
        resultado.imprimeFraccion();
        cout<<endl;
    } else {
        cout<<"No hay suficientes fracciones para hacer la suma"<<endl;
        cout<<endl;
    }
    
    // prueba de calcular valor real
    cout<<"Valor real de la fraccion 1: "<<fracciones[0].calcValorReal()<<endl;
    cout<<endl;
    
    return 0;
}
