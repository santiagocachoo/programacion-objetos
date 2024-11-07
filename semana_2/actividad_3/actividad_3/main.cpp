//  Programa que lee una lista de estudiantes con sus notas y calcula promedios
//  Santiago Cacho Herrera A01255853
//  06/11/24

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Estudiante {
    string nombre;
    float matematicas;
    float fisica;
    float quimica;
    float promedio;
};

int main() {
    ifstream archivoEntrada("input.txt");
    ofstream archivoSalida("output.txt)");
    
    Estudiante estudiantes[20];
    float sumaPromedios = 0;
    
    for (int i = 0; i < 20; i++) {
        getline(archivoEntrada, estudiantes[i].nombre);
        archivoEntrada >> estudiantes[i].matematicas >> estudiantes[i].fisica >> estudiantes[i].quimica;
        archivoEntrada.ignore();
        
        estudiantes[i].promedio = (estudiantes[i].matematicas + estudiantes[i].fisica + estudiantes[i].quimica) / 3;
        
        sumaPromedios += estudiantes[i].promedio;
    }
    
    float promedioGeneral = sumaPromedios / 20;
    
    for (int i = 0; i < 20; i++) {
        archivoSalida << estudiantes[i].nombre << " " << estudiantes[i].promedio << endl;
    }
    
    cout << promedioGeneral << endl;
    
    return 0;
}
