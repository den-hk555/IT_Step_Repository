#include "Point.h"


void Point::setX(const float newX)
{
	x = newX;
};


void Point::setY(const float newY)
{
	y = newY;
};

bool checkPoint(Point pt1, Point pt2) // функция - проверки совпадения точек
{
	if ((pt1.getX() == pt2.getX()) && (pt1.getY() == pt2.getY()))
		return true;
	else
		return false;
}
;