#pragma once


class Point
{
	float x;
	float y;

public:
	/* Point(float newX, float newY)
	{
	x = newX;
	y = newY;
	};
	*/

	Point(float newX, float newY) :
		x(newX), y(newY)
	{};

	Point() :
		x(0), y(0)
	{};

	void setX(const float newX);

	void setY(const float newY);

	float getX() const
	{
		return x;
	};

	float getY() const
	{
		return y;
	};


	~Point() {};
};

bool checkPoint(Point pt1, Point pt2);  // - прототип функции - проверки совпадения точек