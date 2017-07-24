
#include "PhoneBook.h"
#include <iostream>


size_t PhoneBook::countEntry = 0;


PhoneBook::PhoneBook(const Abonent& abonentN): abonent(abonentN)
{
	++countEntry;
}

PhoneBook::PhoneBook()
{
	++countEntry;
}


PhoneBook::~PhoneBook()
{

}

Abonent& PhoneBook::getabonentN() { return abonent; }



Abonent* PhoneBook::getAbonentArray() const
{
	return abonentArray;
}

Abonent PhoneBook::getAbonentArrayStatic() const
{
	return getAbonentArrayStatic();
}

void PhoneBook::setAbonentArray(Abonent* newPhoneBookArray)
{
	abonentArray = newPhoneBookArray;
}

void PhoneBook::setAbonentArrayStatic(Abonent newSetAbonentArrayStatic, size_t countEntry)
{
	abonentArrayStatic.at(countEntry) = newSetAbonentArrayStatic;
}



void  PhoneBook::addAbonentStatic()
{
	std::string SurnameN, NameN, MidnameN, PhoneN, MobPhoneN;
	
	std::cout << " Surname Abonent - ";
	std::cin >> SurnameN;
	abonentArrayStatic.at(countEntry).setSurnameN(SurnameN);
	std::cout << " Name Abonent - ";
	std::cin >> NameN;
	abonentArrayStatic.at(countEntry).setNameN(NameN);
	std::cout << " Midname Abonent - ";
	std::cin >> MidnameN;
	abonentArrayStatic.at(countEntry).setMidnameN(MidnameN);
	std::cout << " HomePhone Abonent - ";
	std::cin >> PhoneN;
	abonentArrayStatic.at(countEntry).setPhoneN(PhoneN);
	std::cout << " MobilPhone Abonent - ";
	std::cin >> MobPhoneN;
	abonentArrayStatic.at(countEntry).setMobPhoneN(MobPhoneN);
	++countEntry;
}

void PhoneBook::printAbonentArrayStatic()
{
	for (int i = 0; i < countEntry; ++i)
	{
		std::cout << " Surname Abonent - " <<
			abonentArrayStatic.at(i).getSurnameN() << std::endl;
		std::cout << " Name Abonent - " <<
			abonentArrayStatic.at(i).getNameN() << std::endl;
		std::cout << " Midname Abonent - " <<
			abonentArrayStatic.at(i).getMidnameN() << std::endl;
		std::cout << " HomePhone Abonent - " <<
			abonentArrayStatic.at(i).getPhoneN() << std::endl;
		std::cout << " MobilPhone Abonent - " <<
			abonentArrayStatic.at(i).getMobPhoneN() << std::endl;
	}
}



/*
void PhoneBook::addAbonent(const Abonent& abonent)
{}

void PhoneBook::delAbonent(const Abonent& abonent)
{}
*/


std::string PhoneBook::getInfo() const
{
	return abonent.getInfo();
}

void PhoneBook::printInfo() const
{
	std::cout << getInfo() << std::endl;
}

void PhoneBook::setcountEntry(const size_t newcountEntry)
{
	countEntry = newcountEntry;
}

size_t PhoneBook::getEntry()
{
	return countEntry;
}