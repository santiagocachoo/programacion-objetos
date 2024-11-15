#ifndef estudiante_h
#define estudiante_h

#include <string>
#include <iostream>

using namespace std;

class Estudiante {
private:
    string matricula;
    char sexo;
    float notaMat;
    float notaFis;
    float notaQuim;
    
public:
    Estudiante();
    Estudiante(string matricula, char sexo, float notaMat, float notaFis, float notaQuim);
    ~Estudiante();
    
    void print();
    // getter para matricula
    string getMatricula();
    
    // setters
    void setMat(float notaMat);
    void setFis(float notaFis);
    void setQuim(float notaQuim);
    
    float calcularPromedio();
    bool isFem();
};

#endif

