// Class_Work_2017_06_04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Square.h"
#include "Student.h"

#include <iostream>



int main()
{
	std::cout << "Point" << std::endl;
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

	Point pt4;
	pt4.setX(599);
	pt4.setY(359);
	std::cout << pt4.getX() << std::endl;
	std::cout << pt4.getY() << std::endl;

	std::cout << checkPoint(pt2, pt3) << std::endl; // - работа функции - проверки совпадения точек
	std::cout << checkPoint(pt3, pt4) << std::endl; // - работа функции - проверки совпадения точек
	
	std::cout << std::endl;
	std::cout << "Line" << std::endl;

	Line l1(5, 5);

	Line l2(Point(1, 4), Point(10, 8));

	Line l3(5, 5);

	// Line l4('w');

	std::cout << l1.getB() << "     " << l1.getK() << std::endl;
	std::cout << l2.getB() << "     " << l2.getK() << std::endl;
	std::cout << l3.getB() << "     " << l3.getK() << std::endl;

	std::cout << checkIntersection(l1, l2) << std::endl; // - работа функции - проверки принадлежности точки прямой

	std::cout << checkIntersection(Line('w'), Line('d')) << std::endl; // - работа функции - проверки совпадения точек

	std::cout << std::endl;
	std::cout << "Triangle" << std::endl;

	Triangle St1; // Площадь треугольника по трем сторонам
	St1.setA(50);
	St1.setB(50);
	St1.setC(50);
	std::cout << St1.getA() << std::endl;
	std::cout << St1.getB() << std::endl;
	std::cout << St1.getC() << std::endl;

	std::cout << SquareOfTriangle(St1.getA(), St1.getB(), St1.getC(), St1.getH(), St1.getAlpha()) << std::endl;

	Triangle St2; // Площадь треугольника по высоте и основанию
	St2.setB(50);
	St2.setH(30);
	std::cout << St2.getB() << std::endl;
	std::cout << St2.getH() << std::endl;

	std::cout << SquareOfTriangle(St2.getB(), St2.getA(), St2.getC(), St2.getH(), St2.getAlpha()) << std::endl;

	Triangle St3; // Площадь треугольника по 2-м сторонам и углу
	St3.setB(50);
	St3.setA(30);
	St3.setAlpha(30);
	std::cout << St3.getB() << std::endl;
	std::cout << St3.getA() << std::endl;
	std::cout << St3.getAlpha() << std::endl;

	std::cout << SquareOfTriangle(St3.getB(), St3.getA(), St3.getC(), St3.getH(), St3.getAlpha()) << std::endl;



	std::cout << std::endl;
	std::cout << "Square" << std::endl;


	Square Sq1; // Площадь квадрата по 2-м сторонам
	Sq1.setpartS1(50);
	Sq1.setpartS2(50);
	std::cout << Sq1.getpartS1() << std::endl;
	std::cout << Sq1.getpartS2() << std::endl;

	std::cout << SquareOfSquare(Sq1.getpartS1(), Sq1.getpartS2()) << std::endl;

	Square Sq2; // Площадь квадрата по 1 - ой стороне
	Sq2.setpartS1(50);
	// Sq2.setpartS2(0);  // - можно по умолчанию ничего не ставить 
	std::cout << Sq2.getpartS1() << std::endl;
	std::cout << Sq2.getpartS2() << std::endl;

	std::cout << SquareOfSquare(Sq2.getpartS1(), Sq2.getpartS2()) << std::endl;

	std::cout << std::endl;
	std::cout << "Student" << std::endl;

	// Класс Студент

	Student Stu1("Ivanov", "Ivan", "Ivanovich", "31-12-2017", "666-666-666", "Zimbabve", "Sch-01", "001");
	std::cout << Stu1.getInfo() << std::endl;
	Stu1.printInfo();

	return 0;
}
