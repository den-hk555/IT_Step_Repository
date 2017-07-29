
#include "PhoneBook.h"
#include <iostream>
#include <array>

size_t countEntry = 0;

PhoneBook::PhoneBook(const Abonent& abonentN) : abonent(abonentN)
{ ++countEntry; }

PhoneBook::PhoneBook()
{ ++countEntry; }

PhoneBook::~PhoneBook() {}

Abonent& PhoneBook::getAbonent()
{ return abonent; }

Abonent* PhoneBook::getAbonentArray() const
{ return abonentArray; }

std::array<Abonent, 1000> & PhoneBook::getAbonentArrayStatic()
{ return abonentArrayStatic; }

/*
Abonent PhoneBook::getAbonentArrayStatic() const
{ return getAbonentArrayStatic(); }
*/

void PhoneBook::setAbonentArray(Abonent* newPhoneBookArray)
{ abonentArray = newPhoneBookArray; }

void PhoneBook::setAbonentArrayStatic(Abonent newSetAbonentArrayStatic, size_t countEntry)
{ abonentArrayStatic.at(countEntry) = newSetAbonentArrayStatic; }

void  PhoneBook::addAbonentStatic()
{
	std::string Surname, Name, Midname, Phone, MobPhone;

	std::cout << " Surname Abonent - ";
	std::cin >> Surname;
	abonentArrayStatic.at(countEntry).setSurname(Surname);
	std::cout << " Name Abonent - ";
	std::cin >> Name;
	abonentArrayStatic.at(countEntry).setName(Name);
	std::cout << " Midname Abonent - ";
	std::cin >> Midname;
	abonentArrayStatic.at(countEntry).setMidname(Midname);
	std::cout << " HomePhone Abonent - ";
	std::cin >> Phone;
	abonentArrayStatic.at(countEntry).setPhone(Phone);
	std::cout << " MobilPhone Abonent - ";
	std::cin >> MobPhone;
	abonentArrayStatic.at(countEntry).setMobPhone(MobPhone);
	++countEntry;
}

void PhoneBook::printAbonentArrayStatic()
{
	for (int i = 0; i < countEntry; ++i)
	{
		std::cout << " Abonent N " << i + 1 << std::endl;
		std::cout << " Surname Abonent - " <<
			abonentArrayStatic.at(i).getSurname() << std::endl;
		std::cout << " Name Abonent - " <<
			abonentArrayStatic.at(i).getName() << std::endl;
		std::cout << " Midname Abonent - " <<
			abonentArrayStatic.at(i).getMidname() << std::endl;
		std::cout << " HomePhone Abonent - " <<
			abonentArrayStatic.at(i).getPhone() << std::endl;
		std::cout << " MobilPhone Abonent - " <<
			abonentArrayStatic.at(i).getMobPhone() << std::endl;
		std::cout << "\n";
	}
}

void PhoneBook::FindAbonentStatic()
{
	bool exist = false;
	bool option;

	std::string Surname, Name, Midname;

	std::cout << "Input abonent to find : " << std::endl;
	std::cout << " Surname Abonent - ";
	std::cin >> Surname;
	abonentArrayStatic.at(countEntry).setSurname(Surname);
	std::cout << " Name Abonent - ";
	std::cin >> Name;
	abonentArrayStatic.at(countEntry).setName(Name);
	std::cout << " Midname Abonent - ";
	std::cin >> Midname;
	abonentArrayStatic.at(countEntry).setMidname(Midname);
		
	for (int i = 0; i < countEntry; ++i)
	{
		if (abonentArrayStatic.at(i).getSurname() == Surname &&
			abonentArrayStatic.at(i).getName() == Name &&
			abonentArrayStatic.at(i).getMidname() == Midname)
		{
			std::cout << "\n";
			std::cout << " Surname Abonent - " <<
				abonentArrayStatic.at(i).getSurname() << std::endl;
			std::cout << " Name Abonent - " <<
				abonentArrayStatic.at(i).getName() << std::endl;
			std::cout << " Midname Abonent - " <<
				abonentArrayStatic.at(i).getMidname() << std::endl;
			std::cout << " HomePhone Abonent - " <<
				abonentArrayStatic.at(i).getPhone() << std::endl;
			std::cout << " MobilPhone Abonent - " <<
				abonentArrayStatic.at(i).getMobPhone() << std::endl;

			exist = true;

			std::cout << " Delete That Abonent ? - 0" << std::endl;
			std::cout << " Continue search - 1" << std::endl;

			std::cin >> option;

			if (!option)
			{
				for (int j = i; j < countEntry; ++j)
				{
					abonentArrayStatic.at(j) = abonentArrayStatic.at(j + 1);
				}
				--countEntry;
				std::cout << " Abonent DELETED !" << std::endl;
			}
		}
	}
	
	if (!exist)
	{
		std::cout << " Abonent not found !" << std::endl;
	}
}





void PhoneBook::newAbonentArray()
{
	++countEntry;
	Abonent* newPhoneBookArray = new Abonent[countEntry];
		
	Abonent* newArray = newPhoneBookArray;
	for (Abonent* array = abonentArray;
		array < abonentArray + countEntry - 1; ++array, ++newArray)
	{
		*newArray = *array;
	}

}





void PhoneBook::addAbonent()
{
	std::string Surname, Name, Midname, Phone, MobPhone;

	std::cout << " Surname Abonent - ";
	std::cin >> Surname;
	(abonentArray + countEntry - 1)->setSurname(Surname);
	std::cout << " Name Abonent - ";
	std::cin >> Name;
	(abonentArray + countEntry - 1)->setName(Name);
	std::cout << " Midname Abonent - ";
	std::cin >> Midname;
	(abonentArray + countEntry - 1)->setMidname(Midname);
	std::cout << " HomePhone Abonent - ";
	std::cin >> Phone;
	(abonentArray + countEntry - 1)->setPhone(Phone);
	std::cout << " MobilPhone Abonent - ";
	std::cin >> MobPhone;
	(abonentArray + countEntry - 1)->setMobPhone(MobPhone);
	++countEntry;

}
void PhoneBook::printabonentArray()
{
	for (Abonent* array = abonentArray; array < abonentArray + countEntry; ++array)
	{
		std::cout << " Surname Abonent - " << array->getSurname() << std::endl;
		std::cout << " Name Abonent - " << array->getName() << std::endl;
		std::cout << " Midname Abonent - " << array->getMidname() << std::endl;
		std::cout << " HomePhone Abonent - " << array->getPhone() << std::endl;
		std::cout << " MobilPhone Abonent - " << array->getMobPhone() << std::endl;
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
