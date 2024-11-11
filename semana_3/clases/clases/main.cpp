//  Introducción a clases en C++
//  Santiago Cacho Herrera A01255853
//  11/11/24


#include <iostream>
#include <string>

using namespace std;

class Estudiante{
private:
    string matricula;
    char sexo;
    float notaMat;
    float notaFis;
    float notaQuim;
public:
    Estudiante(){
        matricula = "";
        sexo = ' ';
        notaFis = 0;
        notaMat = 0;
        notaQuim = 0;
    }
    
    Estudiante(string cMatricula, char cSexo, float cMat, float cFis, float cQuim){
        matricula = cMatricula;
        sexo = cSexo;
        notaMat = cMat;
        notaFis = cFis;
        notaQuim = cQuim;
    };
    
    // imprimir en pantalla datos de estudiante
    void print(){
        cout<<"Matricula: "<<matricula<<endl;
        cout<<"Sexo: "<<sexo<<endl;
        cout<<"Nota Matematicas: "<<notaMat<<endl;
        cout<<"Nota Fisica: "<<notaFis<<endl;
        cout<<"Nota Quimica: "<<notaQuim<<endl;
    }
    
    // get y set
    string getMatricula(){
        return matricula;
    }
    
    void setMat(float cMat){
        notaMat = cMat;
    }
    
    void setFis(float cFis){
        notaFis = cFis;
    }
    
    void setQuim(float cQuim){
        notaQuim = cQuim;
    }
    
    // calcular promedio estudiante
    float calcularPromedio() {
        return (notaMat + notaFis + notaQuim) / 3;
    }
    
    // devuelve si el estudiante es de sexo femenino
    bool isFem(){
        return sexo == 'F';
    }
                 
    
    ~Estudiante(){
        cout<<"Se destruye la clase estudiante con matricula "<<matricula<<endl;
    }
};



// funcion principal
int main() {
    // crear objeto con el constructor por defecto
    Estudiante est1;
    
    // crear objeto con el constructor parametrizado
    Estudiante est2("ReneA2345", 'M', 95, 89, 100);
    Estudiante est3("ElenaA3456", 'F', 99, 96, 100);
    
    // calcular e imprimir promedio de los 3 estudiantes
    cout << "El promedio del estudiante con matricula "<<est1.getMatricula()<<" es "<<est1.calcularPromedio()<<endl;
    cout << "El promedio del estudiante con matricula "<<est2.getMatricula()<<" es "<<est2.calcularPromedio()<<endl;
    cout << "El promedio del estudiante con matricula "<<est3.getMatricula()<<" es "<<est3.calcularPromedio()<<endl;
    
    est3.setMat(78);
    est3.setFis(80);
    est3.setQuim(54);
    
    cout << "El promedio del estudiante con matricula "<<est3.getMatricula()<<" es "<<est3.calcularPromedio()<<endl;
    
    cout<<"El estudiante de matricula "<<est3.getMatricula()<<" es "<< (est3.isFem()?"Femenino":"Masculino")<<endl;
    
    //est1.print();
    //est2.print();
    //est3.print();
    return 0;
}

