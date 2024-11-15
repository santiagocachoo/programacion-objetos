#include "estudiante.h"

// constructor default
Estudiante::Estudiante() {
    matricula = "";
    sexo = ' ';
    notaFis = 0;
    notaMat = 0;
    notaQuim = 0;
}

// constructor parametrizado
Estudiante::Estudiante(string matricula, char sexo, float notaMat, float notaFis, float notaQuim)
: matricula(matricula), sexo(sexo), notaMat(notaMat), notaFis(notaFis), notaQuim(notaQuim) {}

// destructor
Estudiante::~Estudiante() {
    cout<<"Estudiante con matricula "<<matricula<<" destruido."<<endl;
}

// imprimir detalles de estudiante
void Estudiante::print() {
    cout<<"Matricula: "<<matricula<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Nota matematicas: "<<notaMat<<endl;
    cout<<"Nota fisica: "<<notaFis<<endl;
    cout<<"Nota quimica: "<<notaQuim<<endl;
}

// getter matricula
string Estudiante::getMatricula() {
    return matricula;
}

// setters
void Estudiante::setMat(float notaMat) {
    this->notaMat = notaMat;
}

void Estudiante::setFis(float notaFis) {
    this->notaFis = notaFis;
}

void Estudiante::setQuim(float notaQuim) {
    this->notaQuim = notaQuim;
}

float Estudiante::calcularPromedio() {
    return (notaMat + notaFis + notaQuim) / 3;
}

bool Estudiante::isFem() {
    return sexo == 'F';
}
