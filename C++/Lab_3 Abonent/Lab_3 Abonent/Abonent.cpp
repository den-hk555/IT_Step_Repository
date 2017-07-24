
#include "Abonent.h"
#include <iostream>


size_t Abonent::countAbonent = 0;


Abonent::Abonent(std::string SurnameN, std::string NameN, std::string MidnameN, std::string PhoneN, std::string MobPhoneN) :
	surname(SurnameN), name(NameN), midname(MidnameN), phone(PhoneN), mobPhone(MobPhoneN)
{
	++countAbonent;
}

Abonent::Abonent() {}

Abonent::~Abonent() {}

void Abonent::setSurnameN(const std::string SurnameN) { std::string surname = SurnameN; }
void Abonent::setNameN(const std::string NameN) { std::string surname = NameN; }
void Abonent::setMidnameN(const std::string MidnameN) { std::string midname = MidnameN; }
void Abonent::setPhoneN(const std::string PhoneN) { std::string phone = PhoneN; }
void Abonent::setMobPhoneN(const std::string MobPhoneN) { std::string mobPhone = MobPhoneN; }

std::string Abonent::getSurnameN() const { return surname; }
std::string Abonent::getNameN()	const { return name; }
std::string Abonent::getMidnameN() const { return midname; }
std::string Abonent::getPhoneN() const { return phone; }
std::string Abonent::getMobPhoneN() const { return mobPhone; }


std::string Abonent::getInfo() const
{
	return surname + "\t" + name + "\t" + midname + "\t" + phone + "\t" + mobPhone;
}

void Abonent::printInfo() const
{
	std::cout << getInfo() << std::endl;
}

size_t Abonent::getCount()
{
	return countAbonent;
}