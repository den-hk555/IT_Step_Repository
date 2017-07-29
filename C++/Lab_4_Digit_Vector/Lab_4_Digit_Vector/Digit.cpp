#include "Digit.h"

#include <iostream>


size_t Digit::counter = 0;


Digit::Digit(const int DigitN) :
	digit(DigitN)
{
	++counter;
}

Digit::Digit(const double DigitN) :
	digit(DigitN)
{
	++counter;
}

Digit::~Digit()
{
	// --counter; // (������� �������. �������� - ���� "���������" - �� �� ���� )
}

size_t Digit::getCounter()
{
	return counter;
};

void Digit::setDigit(const int DigitN)
{
	digit = DigitN;
};

//-----------------
Digit::Digit(const Digit& dic) :
	digit(dic.digit)
{
	++counter;
}

Digit::Digit(Digit&& dic) :
	digit(dic.digit)
{
	++counter;
}
//-----------------

int Digit::getDigit() const
{
	return digit;
};

int Digit::getInfo() const
{
	return digit;
};

void Digit::printInfo() const
{
	std::cout << getInfo() << std::endl;
};


Digit Digit::operator + (const Digit& dic)      // ������������� +
{
	Digit tmp;
	tmp.digit = digit + dic.digit;
	return tmp;
};

Digit Digit::operator + (const int d)           // ������������� + c INT
{
	return Digit(digit + d);
};

Digit Digit::operator - (const Digit& dic)      // ������������� -
{
	// Digit tmp;
	// tmp.digit = digit - dic.digit;
	return Digit(digit - dic.digit);
};

Digit Digit::operator - (const int d)           // ������������� - c INT
{
	return Digit(digit - d);
};

Digit& Digit::operator += (const Digit& dic)    // ������������� +=
{
	digit += dic.digit;
	return *this;
};

Digit& Digit::operator -= (const Digit& dic)    // ������������� -=
{
	digit -= dic.digit;
	return *this;
};

Digit& Digit::operator *= (const Digit& dic)    // ������������� *=
{
	digit *= dic.digit;
	return *this;
};

Digit& Digit::operator /= (const Digit& dic)    // ������������� /=
{
	digit /= dic.digit;
	return *this;
};

Digit& Digit::operator %= (const Digit& dic)    // ������������� %=
{
	digit %= dic.digit;
	return *this;
};

Digit Digit::operator * (const Digit& dic)      // ������������� *
{
	return Digit(digit * dic.digit);
};

Digit Digit::operator * (const int d)           // ������������� * c INT
{
	return Digit(digit * d);
};

Digit Digit::operator / (const Digit& dic)      // ������������� /
{
	return Digit(digit / dic.digit);
};

Digit Digit::operator / (const int d)           // ������������� / c INT
{
	return Digit(digit / d);
};

Digit Digit::operator % (const Digit& dic)      // ������������� %
{
	return Digit(digit % dic.digit);
};

Digit Digit::operator % (const int d)           // ������������� % c INT
{
	return Digit(digit % d);
};

bool Digit::operator > (const Digit newDigit)   // ������������� >
{
	return digit > newDigit.digit;
};

bool Digit::operator < (const Digit newDigit)   // ������������� <
{
	return !(*this > newDigit);
};

bool Digit::operator == (const Digit newDigit)  // ������������� ==
{
	if (this == &newDigit) { return true; }
	return digit == newDigit.digit;
};

bool Digit::operator != (const Digit newDigit)  // ������������� !=
{
	return !(*this == newDigit);
};

Digit& Digit::operator = (const Digit& d)      // ������������� = ������������
{
	if (this == &d)
	{
		return *this;
	};

	digit = d.digit;

	return *this;
};

Digit Digit::operator - ()                      // ������������� ������� -
{
	return Digit(-digit);
}

Digit& Digit::operator ++ ()                    // ������������� ++ ����������
{
	++digit;
	return *this;
}

Digit& Digit::operator -- ()                    // ������������� -- ����������
{
	--digit;
	return *this;
}

Digit Digit::operator ++ (int)                  // ������������� ++ �����������
{
	Digit tmp = *this;
	++digit;
	return tmp;
}

Digit Digit::operator -- (int)                  // ������������� -- �����������
{
	Digit tmp = *this;
	--digit;
	return tmp;
}

Digit::operator int()                           // ������������� int()
{
	return digit;
}

Digit::operator double()                        // ������������� double()
{
	return double(digit);
}

void Digit::operator()(int digitN)              // ������������� () - ����� �������()
{
	digit = digitN;
}

Digit operator + (int a, const Digit& b)        // ���������� ������� �������� +
{
	Digit tmp;
	tmp.setDigit(a + b.getDigit());
	return tmp;
}

std::ostream& operator << (std::ostream& os, const Digit& a)  // ������������� ������� ������� ������ <<
{
	os << a.digit;
	return os;
}

std::istream& operator >> (std::istream& is, Digit& a)    // ������������� ������� ������� ������ >>
{
	is >> a.digit;
	return is;
}