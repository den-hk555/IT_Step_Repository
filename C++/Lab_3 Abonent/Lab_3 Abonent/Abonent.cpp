
#include "Abonent.h"
#include <iostream>


size_t Abonent::countAbonent = 0;

Abonent::Abonent(std::string Surname, std::string Name, std::string Midname, std::string Phone, std::string MobPhone) :
	surname(Surname), name(Name), midname(Midname), phone(Phone), mobPhone(MobPhone)
{
	++countAbonent;
}

Abonent::Abonent() {}

Abonent::~Abonent() {}

void Abonent::setSurname(const std::string Surname) { surname = Surname; }
void Abonent::setName(const std::string Name) { name = Name; }
void Abonent::setMidname(const std::string Midname) { midname = Midname; }
void Abonent::setPhone(const std::string Phone) { phone = Phone; }
void Abonent::setMobPhone(const std::string MobPhone) { mobPhone = MobPhone; }

std::string Abonent::getSurname() const { return surname; }
std::string Abonent::getName()	const { return name; }
std::string Abonent::getMidname() const { return midname; }
std::string Abonent::getPhone() const { return phone; }
std::string Abonent::getMobPhone() const { return mobPhone; }

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