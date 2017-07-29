#pragma once

#include "Abonent.h"
#include <string>
#include <array>

using namespace std;


class PhoneBook
{

	size_t countEntry;
	Abonent abonent;
	Abonent* abonentArray;
	std::array <Abonent, 1000> abonentArrayStatic;

public:

	PhoneBook();
	PhoneBook(const Abonent& abonent);
	~PhoneBook();

	Abonent& PhoneBook::getAbonent();

	Abonent* getAbonentArray() const;
	std::array <Abonent, 1000> & PhoneBook::getAbonentArrayStatic();

	// Abonent getAbonentArrayStatic() const;

	void setAbonentArray(Abonent* newPhoneBookArray);
	void setAbonentArrayStatic(Abonent newSetSubArrayStatic, size_t index);


	void addAbonentStatic();
	void printAbonentArrayStatic();
	void FindAbonentStatic();

	void newAbonentArray();
	void addAbonent();
	void printabonentArray();
	/*
	void delAbonent(const Abonent& abonent);
	*/

	std::string getInfo() const;

	void printInfo() const;

	void setcountEntry(const size_t newcountEntry);

	size_t getEntry();

	
};
