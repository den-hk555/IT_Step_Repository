#pragma once

class Square
{

	float partS1;
	float partS2;

public:

	Square(const float newpartS1, const float newpartS2);

	Square() :
		partS1(0), partS2(0)
	{};

	void setpartS1(float newpartS1);
	void setpartS2(float newpartS2);

	float getpartS1() const;
	float getpartS2() const;


	~Square();

};

float SquareOfSquare(const float getpartS1, const float getpartS2);  // прототип функции - площадь квадрата
