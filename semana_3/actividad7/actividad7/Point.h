#ifndef Point_h
#define Point_h


class Point
{
private:
	double x, y;
public:
	Point(double, double);
	Point();
	double getX();
	double getY();
	void setX(double);
	void setY(double);
	double distancia(Point);
	~Point();

};

#endif 