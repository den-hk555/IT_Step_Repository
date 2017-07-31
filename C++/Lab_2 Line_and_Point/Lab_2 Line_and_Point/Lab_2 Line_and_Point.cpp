// Lab_2 Line_and_Point.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Point.h"
#include "Line.h"
#include "Book.h"
#include "PrettyPrint.h"
#include <string>

#include <iostream>

using namespace std;


Point Intersection(Line l5, Line l6)
{
	float xI, yI;
	if (l5.getK() == l6.getK())
	{
		float xI = (l5.getB() - l6.getB()) / (l5.getK() - l6.getK());
		float yI = xI * l5.getK() + l6.getB();
		
	
	}
	return Point(xI, yI);
};


int main()
{
	Point pt1;
	std::cout << pt1.getX() << std::endl;
	std::cout << pt1.getY() << std::endl;
	
	Point pt2(10, 100);
	std::cout << pt2.getX() << std::endl;
	std::cout << pt2.getY() << std::endl;
	
	Point pt3;
	pt3.setX(599);
	pt3.setY(359);
	std::cout << pt3.getX() << std::endl;
	std::cout << pt3.getY() << std::endl;
	
	Point pt4(3, 3);
	std::cout << pt4.getX() << std::endl;
	std::cout << pt4.getY() << std::endl;
	
	Line l1(5, 10);

	Line l2(Point(1, 4), Point(10, 8));

	Line l3(5, 10);
	Line l4(1, 0);

	std::cout << l4.getB() << "     " << l4.getK() << std::endl;
	std::cout << l2.getB() << "     " << l2.getK() << std::endl;
	std::cout << l3.getB() << "     " << l3.getK() << std::endl;
	
	std::cout << checkIntersection(l1, l2) << std::endl;
	std::cout << checkIntersection(l1, l3) << std::endl;
	std::cout << checkIntersection(Line('w'), Line('d')) << std::endl;
	std::cout << checkIntersection(l1, l3) << std::endl;
	
	std::cout << "\t Ex 1.3. " << std::endl;
	std::cout << checkPoint(pt4, l4) << std::endl; // проверяет принадлежит ли точка прямой, выше или ниже прямой
	
	Line l5(6, 2);
	Line l6(-5, 1);
	std::cout << "\t Ex 1.4. " << std::endl;
	std::cout << checkIntersection(l5, l6) << std::endl;
	std::cout << Intersection(l5, l6) << std::endl;
	
	// Класс BOOK
	std::cout << "\t Ex 2. " << std::endl;
	Book Bk1("Tolstoy", "Besy", "Poligraf", "1975", "666");
	std::cout << Bk1.getInfo() << std::endl;
	Bk1.printInfo();

	// PrettyPrint
	std::cout << "\t Ex 3. " << std::endl;
	PrettyPrint PrP1("Hello world !!! My name is Vasya!");
	// std::cout << PrP1.getInfo() << std::endl;
	PrP1.printInfo();

	std::cout << "\t Ex 3.1. " << std::endl;
	
	string Str1 = "file";
	std::cout << Str1 << std::endl;
	string Str2 = "write";
	std::cout << Str2 << std::endl;
	const char *symb = ".";
	std::cout << "New String : " << PrP1.Concat(Str1, Str2, symb) << std::endl;
	
	std::cout << "\t Ex 3.2. " << std::endl;

	std::string strReplace = "Hello world !!! My name is Vasya!";
	std::cout << "First String : " << strReplace << std::endl;
	PrP1.replaceLiter(strReplace);
	std::cout << "New String : " << strReplace << std::endl;

	std::cout << " Ex 3.3. " << std::endl;

	std::string strInvert = "Hello world !!! My name is Vasya!";
	std::cout << "First String : "<< strInvert << std::endl;
	PrP1.invertString(strInvert);
	std::cout << "New String : " << strInvert << std::endl;
	
	// std::cout << invertString(PrP1) << std::endl;
	// PrP1.printInfo(invertString());

	return 0;
}