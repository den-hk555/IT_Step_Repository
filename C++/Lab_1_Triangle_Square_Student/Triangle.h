#pragma once



class Triangle
{
	float a;
	float b;
	float c;
	float h;
	float alpha;

public:

	
	Triangle(const float newB, const float newA, const float newC, const float newH, const float newAlpha);

	Triangle() :
		a(0), b(0), c(0), h(0), alpha(0)
	{};

	void setA(float newA);
	void setB(float newB);
	void setC(float newC);
	void setH(float newH);
	void setAlpha(float newAlpha);

	float getA();
	float getB();
	float getC();
	float getH();
	float getAlpha();

	~Triangle();
};

float SquareOfTriangle(const float getA, const float getB, const float getC, const float getH, const float getAlpha);  // прототип функции - площадь треугольника
