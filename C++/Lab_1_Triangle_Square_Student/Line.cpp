
#include "Line.h"

Line::Line(const Point pt1, const Point pt2)
{
	k = (pt2.getY() - pt1.getY()) / (pt2.getX() - pt1.getX());
	b = pt1.getY() - k * pt1.getX();
};

void Line::setK(const float newK)
{
	k = newK;
};


void Line::setB(const float newB)
{
	b = newB;
};

float Line::getK()
{
	return k;
};


float Line::getB()
{
	return b;
};


bool checkIntersection(Line l1, Line l2)  // функция - проверки принадлежности точки прямой
{
	if (l1.getK() == l2.getK())
		return true;
	else
		return false;
};