#include "Point.h"
#include <cmath>

Point::Point(double cx,double cy):x(cx), y(cy){}
Point::Point():x(0), y(0){}
double Point::getX() { return x; }
double Point::getY() { return y; }
void Point::setX(double cx) {
	x = cx;
}
void Point::setY(double cy) {
	y = cy;
}
double Point::distancia(Point b) {
	return sqrt(pow(b.getX()-x, 2) + pow(b.getY()-y, 2));
}
Point::~Point(){}
