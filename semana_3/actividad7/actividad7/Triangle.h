#pragma once

#include "Point.h"
class Triangle
{
private:
    Point vertex1, vertex2, vertex3;
public:
    Triangle(Point, Point, Point);
    Triangle();
    double perimeter();
    double area();
    ~Triangle();
};
