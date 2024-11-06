//  Programa para calcular IMC de usuario
//  Santiago Cacho Herrera A01255853
//  30/10/24


#include <iostream>
using namespace std;

int hola() {
    float peso, altura;

    cout << "Ingrese peso en kg: ";
    cin >> peso;

    cout << "Ingrese altura en metros: ";
    cin >> altura;

    float imc = peso / (altura * altura);

    cout << "Tu IMC es: " << imc << endl;

    return 0;
}
