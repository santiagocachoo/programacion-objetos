/*Created by 
-Guadalupe Elena Fierros Valenzuela A01255712
-Santiago Cacho Herrera A01255853
*/

#include "Triangle.h"
#include <iostream>
using namespace std;

//main
int main() {
	int x, y;
	Triangle t1;
	cout << "El area del triangulo por default es " << t1.area()<< " y su perimetro es " << t1.perimeter() << endl;

	cout << "Ahora vamos a obtener el area y el perimetro de un triangulo creado por usted :)" << endl << "Por favor ingrese los siguientes datos" << endl;

	cout << "Ingrese las coordenadas del primer vertice del triangulo: " << endl << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;
	Point p1(x, y);

	cout << "Ingrese las coordenadas del segundo vertice del triangulo: " << endl << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;
	Point p2(x, y);

	cout << "Ingrese las coordenadas del tercer vertice del triangulo: " << endl << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;
	Point p3(x, y);

	Triangle t2(p1, p2, p3);
	cout << "El area del triangulo dado por los vertices que ingreso es " << t2.area() << " y su perimetro es " << t2.perimeter() << endl;

}
