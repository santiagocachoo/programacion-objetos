#include "estudiante.h"

int main() {
    // crear estudiante con constructor default
    Estudiante est1;
    
    // crear estudiantes con constructor parametrizado
    Estudiante est2("ReneA2345", 'M', 95, 89, 100);
    Estudiante est3("ElenaA3456", 'F', 99, 96, 100);
    
    //est3.print();
    
    //cout<<"El promedio del estudiante con matricula "<<est1.getMatricula()<<" es "<<est1.calcularPromedio()<<endl;
    //cout<<"El promedio del estudiante con matricula "<<est2.getMatricula()<<" es "<<est2.calcularPromedio()<<endl;
    cout<<"El promedio del estudiante con matricula "<<est3.getMatricula()<<" es "<<est3.calcularPromedio()<<endl;
    
    est3.setMat(78);
    est3.setFis(80);
    est3.setQuim(54);
    //est3.print();
    cout<<"El promedio del estudiante con matricula "<<est3.getMatricula()<<" es "<<est3.calcularPromedio()<<endl;
    cout<<"El estudiante de matricula "<<est3.getMatricula()<<" es "<<(est3.isFem() ? "Femenino":"Masculino")<<endl;

    return 0;
}
