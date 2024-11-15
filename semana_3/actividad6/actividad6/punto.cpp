#include "punto.h"

// constructor
Point::Point(double x, double y) : x(x), y(y) {}

// getters
double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

// setters
void Point::setX(double x) {
    this->x = x;
}

void Point::setY(double y) {
    this->y = y;
}

double Point::distance(Point &otro) {
    return sqrt(pow(otro.x - x, 2) + pow(otro.y - y, 2));
}


