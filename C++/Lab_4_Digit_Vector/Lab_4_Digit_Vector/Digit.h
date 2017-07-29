
#pragma once
#include <iostream>

class Digit
{
	int digit;
	static size_t counter;

public:

	explicit Digit(const int digit = 0);
	explicit Digit(const double digit);
	~Digit();

	static size_t getCounter();
	//-----------------
	Digit(const Digit& dic);
	Digit::Digit(Digit&& dic);
	//-----------------
	void setDigit(const int DigitN);
	int getDigit() const;

	int getInfo() const;

	void printInfo() const;

	Digit operator + (const Digit& dic);  // ������������� +
	Digit operator + (const int d);		  // ������������� + c INT

	Digit operator - (const Digit& dic);  // ������������� -
	Digit operator - (const int d);       // ������������� - c INT
	
	Digit& operator += (const Digit&);    // ������������� +=
	Digit& operator -= (const Digit&);    // ������������� -=
	Digit& operator *= (const Digit&);    // ������������� *=
	Digit& operator /= (const Digit&);    // ������������� /=
	Digit& operator %= (const Digit&);    // ������������� %=
	
	Digit operator * (const Digit& dic);  // ������������� *
	Digit operator * (const int d);       // ������������� * c INT
	Digit operator / (const Digit& dic);  // ������������� /
	Digit operator / (const int d);       // ������������� / c INT
	Digit operator % (const Digit& dic);  // ������������� %
	Digit operator % (const int d);       // ������������� % c INT

	bool operator > (const Digit newDigit);  // ������������� >
	bool operator < (const Digit newDigit);  // ������������� <
	bool operator == (const Digit newDigit); // ������������� ==
	bool operator != (const Digit newDigit); // ������������� !=

	Digit& Digit::operator=(const Digit& d);  // ������������� = ������������

	Digit operator - ();                      // ������������� ������� -

	Digit& Digit::operator ++ ();             // ������������� ++ ����������
	Digit& Digit::operator -- ();             // ������������� -- ����������

	Digit Digit::operator ++ (int);           // ������������� -- �����������
	Digit Digit::operator -- (int);           // ������������� -- �����������

	operator int();                           // ������������� int()
	operator double();                        // ������������� double()

	void operator()(int digit);               // ������������� () - ����� �������()

	friend std::ostream& operator << (std::ostream& os, const Digit& a); // ������������� ������� ������� ������
	friend std::istream& operator >> (std::istream& is, Digit& a);
};

Digit operator + (int a, const Digit& b);     // ���������� ������� �������� +