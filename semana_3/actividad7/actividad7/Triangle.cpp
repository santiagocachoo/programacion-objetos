#include "Triangle.h"
#include "Point.h"
#include <cmath>

Triangle::Triangle(Point a, Point b, Point c):vertex1(a),vertex2(b),vertex3(c){}
Triangle::Triangle() {
    Point a(0,0);
    Point b(50,30);
    Point c(25,10);
    vertex1 = a;
    vertex2 = b;
    vertex3 = c;
}
double Triangle::perimeter() {
    return vertex1.distancia(vertex2) + vertex2.distancia(vertex3) + vertex3.distancia(vertex1);
}
double Triangle::area() {
    double a, b, c, s, d;
    a = vertex1.distancia(vertex2);
    b = vertex2.distancia(vertex3);
    c = vertex3.distancia(vertex1);
    s = (a + b + c) / 2;
    d = sqrt(s * (s - a) * (s - b) * (s - c));
    return d;
}
Triangle::~Triangle(){}
