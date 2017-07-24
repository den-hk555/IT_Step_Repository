#include "Square.h"


Square::Square(const float newpartS1, const float newpartS2 = 0) :
	partS1(newpartS1), partS2(newpartS2)
{};



void Square::setpartS1(const float newpartS1)
{
	partS1 = newpartS1;
};


void Square::setpartS2(const float newpartS2)
{
	partS2 = newpartS2;
};

float Square::getpartS1() const
{
	return partS1;
};


float Square::getpartS2() const
{
	return partS2;
};


Square::~Square()
{

}


float SquareOfSquare(const float getpartS1, const float getpartS2) // функциия - площадь квадрата
{
	float S;
	if (getpartS2 != 0)
		S = getpartS1 * getpartS2;
	else
		S = getpartS1 * getpartS1;

	return S;
};
