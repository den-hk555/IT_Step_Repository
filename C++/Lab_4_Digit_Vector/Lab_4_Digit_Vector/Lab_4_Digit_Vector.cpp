// Lab_4_Digit_Vector.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"

#include <utility>
#include <iostream>

#include "Digit.h"
#include "MyVector.h"


int main()
{
	Digit d1(5.54);
	d1.printInfo();
	Digit d2 = d1;
	d2.printInfo();
	Digit c = std::move(d1);
	c.printInfo();
	d1.printInfo();

	Digit d3 = d1 + d2;  // ������������� +
	d3.printInfo();
	d3 += d1;            // ������������� +=
	d3.printInfo();

	Digit d4 = d3 - d1;  // ������������� -
	d4.printInfo();
	d4 -= d1;            // ������������� -=
	d4.printInfo();

	Digit d5 = d2 * d1;  // ������������� *
	d5.printInfo();

	Digit d6 = d3 / d1;  // ������������� /
	d6.printInfo();

	Digit d7 = d3 % d1;  // ������������� %
	d7.printInfo();

	Digit d8 = d1 + 5;  // ������������� + c int
	d8.printInfo();

	Digit d9 = d1 - 5;  // ������������� - c int
	d9.printInfo();

	std::cout << " <, >, ==, != " << std::endl;
	std::cout << (d3 > d1) << std::endl;  // ������������� >
	std::cout << (d3 < d1) << std::endl;  // ������������� >
	std::cout << (d1 < d3) << std::endl;  // ������������� <
	std::cout << (d1 > d3) << std::endl;  // ������������� <
	std::cout << (d3 == d3) << std::endl; // ������������� ==
	std::cout << (d1 == d3) << std::endl; // ������������� ==
	std::cout << (d3 != d3) << std::endl; // ������������� !=
	std::cout << (d1 != d3) << std::endl; // ������������� !=

	std::cout << " = " << std::endl;
	d3 = d1;                              // ������������� = ������������
	d3.printInfo();
	d3 = -d1;	                          // ������������� ������� -
	d3.printInfo();
	++d3;                                 // ������������� ++ ����������
	d3.printInfo();
	--(--d3);                             // ������������� -- ����������
	d3.printInfo();
	d3++;                                 // ������������� ++ �����������
	d3.printInfo();
	d3--;                                 // ������������� -- �����������
	d3.printInfo();

	int y = d1;			     		      // ������������� int()
	d1.printInfo();

	double(z) = d1;						  // ������������� double()
	d1.printInfo();

	d1(545);							  // ������������� () - ����� �������()
	d1.printInfo();

	Digit d10 = 263 + d3;                 // ���������� ������� - �������� +
	d10.printInfo();

	std::cout << d10 << std::endl;
	
	int a;                                // ������������� ������� ������� ������
	std::cout << "Input a :" << std::endl;
	std::cin >> a;
	std::cout << a << std::endl;






	return 0;

}