#pragma once
#include <iostream>

class Point
{
	float x;
	float y;

public:

	Point(float newX, float newY);
	
	Point() : x(0), y(0)
	{};

	void setX(const float newX);
	void setY(const float newY);
	
	float getX() const;
	float getY() const;

	~Point() {};

	friend std::ostream& operator << (std::ostream& out, const Point& p);
};

