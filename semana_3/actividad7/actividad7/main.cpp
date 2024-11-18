/*Created by
-Guadalupe Elena Fierros Valenzuela A01255712
-Santiago Cacho Herrera A01255853
*/

#include "Triangle.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//main
int main() {
    int x[3], y[3];
    bool isX[3] = { false, false, false }, isY[3] = { false, false, false };
    Triangle t1;
    cout << "El area del triangulo por default es " << t1.area()<< " y su perimetro es " << t1.perimeter() << endl;

    cout << "Ahora vamos a obtener el area y el perimetro de un triangulo creado por usted :)" << endl << "Por favor ingrese los siguientes datos" << endl;

    while (true) {
        if (!isX[0] && !isY[0]) {
            cout << "Ingrese las coordenadas del primer vertice del triangulo: " << endl;
        }

        if (!isX[0]) {
            cout << "X: ";
            cin >> x[0];
            //condicional para letras
            if (cin.fail()) {
                cout << "Ingrese un numero..." << '\n';
                cin.clear(); // Limpia el estado de error de cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignora el error ocasionado por el usuario
                continue;
            }
            isX[0] = true;
        }
        if (!isY[0]) {
            cout << "Y: ";
            cin >> y[0];
            //condicional letra
            if (cin.fail()) {
                cout << "Ingrese un numero..." << '\n';
                cin.clear(); // Limpia el estado de error de cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignora el error ocasionado por el usuario
                continue;
            }
            isY[0] = true;
        }

        if (!isX[1]) {
            cout << "Ingrese las coordenadas del segundo vertice del triangulo: " << endl;
            cout << "X: ";
            cin >> x[1];
            if (cin.fail()) {
                cout << "Ingrese un numero..." << '\n';
                cin.clear(); // Limpia el estado de error de cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignora el error ocasionado por el usuario
                continue;
            }
        }
        if (!isY[1]) {
            cout << "Y: ";
            cin >> y[1];
            if (cin.fail()) {
                cout << "Ingrese un numero..." << '\n';
                cin.clear(); // Limpia el estado de error de cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignora el error ocasionado por el usuario
                continue;
            }
        }

        if (x[0] == x[1] && y[0] == y[1]) {
            cout << "Ingrese coordenadas diferentes al primer punto"<<endl;
            continue;
        }

        isX[1] = true;
        isY[1] = true;

        if (!isX[2]) {
            cout << "Ingrese las coordenadas del tercer vertice del triangulo: " << endl;
            cout << "X: ";
            cin >> x[2];
            if (cin.fail()) {
                cout << "Ingrese un n˙mero..." << '\n';
                cin.clear(); // Limpia el estado de error de cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignora el error ocasionado por el usuario
                continue;
            }
        }
        if (!isY[2]) {
            cout << "Y: ";
            cin >> y[2];
            if (cin.fail()) {
                cout << "Ingrese un numero..." << '\n';
                cin.clear(); // Limpia el estado de error de cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignora el error ocasionado por el usuario
                continue;
            }
        }
        if ((x[0] == x[2] && y[0] == y[2]) || (x[1] == x[2] && y[1] == y[2])) {
            cout << "Ingrese coordenadas diferentes a los puntos anteriores..."<<endl;
            continue;
        }
        isY[2] = true;
        isX[2] = true;
        break;
    }
        Point p3(x[2], y[2]);
        Point p1(x[0], y[0]);
        Point p2(x[1], y[1]);

    Triangle t2(p1, p2, p3);

    if (t2.area() == 0) {
        cout << "Hubo un error en los puntos que ingreso, probablemente no forman un triangulo...";
    }else cout << "El area del triangulo dado por los vertices que ingreso es " << t2.area() << " y su perimetro es " << t2.perimeter() << endl;

}

