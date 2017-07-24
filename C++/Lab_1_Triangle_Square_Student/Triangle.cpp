

#include "Triangle.h"
#include <math.h>


Triangle::Triangle(const float newB, const float newA = 0, const float newC = 0, const float newH = 0, const float newAlpha = 0):
	a(newA), b(newB), c (newC), h(newH), alpha(newAlpha)
{
}

void Triangle::setA(const float newA) { a = newA; }
void Triangle::setB(const float newB) {	b = newB; }
void Triangle::setC(const float newC) {	c = newC; }
void Triangle::setH(const float newH) { h = newH; }
void Triangle::setAlpha(const float newAlpha) { alpha = newAlpha; }

float Triangle::getA() { return a; }
float Triangle::getB() { return b; }
float Triangle::getC() { return c; }
float Triangle::getH() { return h; }
float Triangle::getAlpha() { return alpha; }


float SquareOfTriangle(const float getB, const float getA, const float getC, const float getH, const float getAlpha) // функция - площадь треугольника
{
	float S;
	if (getH == 0 && getAlpha == 0)
	{
		float p;
		p = (getA + getB + getC) / 2;
		S = sqrt(p * (p - getA) * (p - getB) * (p - getC));
		return S;
	}
	if (getA == 0 && getC == 0)
	{
		S = ((getB * getH) / 2);
		return S;
	}
	else
	{
		S = (getA * getB) * sin (getAlpha) / 2;
		return S;
	}
}  

Triangle::~Triangle()
{
}
