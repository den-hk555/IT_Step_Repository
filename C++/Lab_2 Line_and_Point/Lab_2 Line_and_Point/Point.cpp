#include "Point.h"
#include <iostream>


Point::Point(float newX, float newY):
	x(newX),y(newY)
{}


void Point::setX(const float newX) { x = newX; };
void Point::setY(const float newY) { y = newY; };

float Point::getX() const { return x; };
float Point::getY() const { return y; };

std::ostream& operator << (std::ostream& out, const Point& p)
{
	out << "x = " << p.getX() << ", y = " << p.getY();
	return out;
}