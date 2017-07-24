#include "Point.h"


Point::Point(float newX, float newY):
	x(newX),y(newY)
{}


void Point::setX(const float newX) { x = newX; };
void Point::setY(const float newY) { y = newY; };

float Point::getX() const { return x; };
float Point::getY() const { return y; };