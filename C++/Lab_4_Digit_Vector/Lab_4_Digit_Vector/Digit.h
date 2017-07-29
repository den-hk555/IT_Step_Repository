
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

	Digit operator + (const Digit& dic);  // перегруженный +
	Digit operator + (const int d);		  // перегруженный + c INT

	Digit operator - (const Digit& dic);  // перегруженный -
	Digit operator - (const int d);       // перегруженный - c INT
	
	Digit& operator += (const Digit&);    // перегруженный +=
	Digit& operator -= (const Digit&);    // перегруженный -=
	Digit& operator *= (const Digit&);    // перегруженный *=
	Digit& operator /= (const Digit&);    // перегруженный /=
	Digit& operator %= (const Digit&);    // перегруженный %=
	
	Digit operator * (const Digit& dic);  // перегруженный *
	Digit operator * (const int d);       // перегруженный * c INT
	Digit operator / (const Digit& dic);  // перегруженный /
	Digit operator / (const int d);       // перегруженный / c INT
	Digit operator % (const Digit& dic);  // перегруженный %
	Digit operator % (const int d);       // перегруженный % c INT

	bool operator > (const Digit newDigit);  // перегруженный >
	bool operator < (const Digit newDigit);  // перегруженный <
	bool operator == (const Digit newDigit); // перегруженный ==
	bool operator != (const Digit newDigit); // перегруженный !=

	Digit& Digit::operator=(const Digit& d);  // перегруженный = присваивание

	Digit operator - ();                      // перегруженный унарный -

	Digit& Digit::operator ++ ();             // перегруженный ++ префиксный
	Digit& Digit::operator -- ();             // перегруженный -- префиксный

	Digit Digit::operator ++ (int);           // перегруженный -- постфиксный
	Digit Digit::operator -- (int);           // перегруженный -- постфиксный

	operator int();                           // перегруженный int()
	operator double();                        // перегруженный double()

	void operator()(int digit);               // перегруженный () - вызов функции()

	friend std::ostream& operator << (std::ostream& os, const Digit& a); // дружественная функция битовго сдвига
	friend std::istream& operator >> (std::istream& is, Digit& a);
};

Digit operator + (int a, const Digit& b);     // глобальная функция оператор +