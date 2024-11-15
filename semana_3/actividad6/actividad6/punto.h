#ifndef punto_h
#define punto_h

#include <cmath>
using namespace std;

class Point {
private:
    double x;
    double y;
    
public:
    Point();
    // constructor
    Point(double x=0, double y = 0);
    
    // getters
    double getX();
    double getY();
    
    // setters
    void setX(double x);
    void setY(double y);
    
    double distance(Point punto);
};

#endif
