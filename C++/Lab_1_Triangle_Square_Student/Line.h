#pragma once

#include "Point.h"

class Line
{

	float k;
	float b;

public:

	Line(const Point, const Point);

	Line(const float newK, const float newB = 0) :
		k(newK), b(newB)
	{};

	void setK(float newK);
	void setB(float newB);

	float getK();
	float getB();



	~Line() {};

};


bool checkIntersection(Line l1, Line l2);  // прототип функции - проверки принадлежности точки прямой
