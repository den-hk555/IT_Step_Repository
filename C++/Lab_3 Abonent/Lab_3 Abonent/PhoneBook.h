#pragma once

#include "Abonent.h"
#include <string>
#include <array>

using namespace std;


class PhoneBook
{

	static size_t countEntry;

	Abonent abonent;

	Abonent* abonentArray;

	std::array<Abonent, 1000> abonentArrayStatic;

public:

	PhoneBook();
	PhoneBook(const Abonent& abonent);
	~PhoneBook();

	Abonent& PhoneBook::getabonentN();

	Abonent* getAbonentArray() const;
	Abonent getAbonentArrayStatic() const;

	void PhoneBook::setAbonentArray(Abonent* newPhoneBookArray);
	void PhoneBook::setAbonentArrayStatic(Abonent newSetSubArrayStatic, size_t index);


	void PhoneBook::addAbonentStatic();
	void PhoneBook::printAbonentArrayStatic();

	/*
	void addAbonent(const Abonent& abonent);
	void delAbonent(const Abonent& abonent);
	*/

	std::string getInfo() const;

	void printInfo() const;

	void PhoneBook::setcountEntry(const size_t newcountEntry);

	size_t PhoneBook::getEntry();


};
