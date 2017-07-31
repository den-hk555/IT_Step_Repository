// Lab_3_Phone_book_Vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <array>

#include "Abonent.h"
#include "PhoneBook.h"
#include "Test.h"


int PhoneBookStatic()
{
	size_t choice = 1;
	PhoneBook PhBook;
	PhBook.setcountEntry(0);
	while (choice)
	{
		std::cout << "0 - Exit\n";
		std::cout << "1 - Adding contacts \n";
		std::cout << "2 - View contacts \n";
		std::cout << "3 - Search for contacts and delete contacts \n";
		std::cin >> choice;
		switch (choice)
		{
		case(0):
			return 0;
		case(1):
			PhBook.addAbonentStatic();
			break;
		case(2):
			PhBook.printAbonentArrayStatic();
			break;
		case(3):
			PhBook.FindAbonentStatic();
			break;
		}
	}
}

int PhoneBookDynamic()
{
	size_t choice = 1;
	PhoneBook PhBook;
	PhBook.setcountEntry(0);
	while (choice)
	{
		std::cout << "0 - Exit\n";
		std::cout << "1 - Adding contacts \n";
		std::cout << "2 - View contacts \n";
		std::cout << "3 - Search for contacts and delete contacts \n";
		std::cin >> choice;
		switch (choice)
		{
		case(0):
			return 0;
		case(1):
			PhBook.newAbonentArray();
			PhBook.addAbonent();
			break;
		case(2):
			PhBook.printabonentArray();
			break;
	/*	case(3):
			PhBook.FindAbonentStatic();
			break;*/
		}
	}
}



int main()
{
	std::cout << "Basic functional, Abonent & Phone Book \n" << std::endl;
	Abonent Ab1("Ivanov", "Ivan", "Ivanovich", "555-555-555", "666-666-666");
	Abonent Ab2("Petrov", "Peter", "Petrovich", "555-555-555", "666-666-666");
	Abonent Ab3("Vadimov", "Vadim", "Vadimovich", "555-555-555", "666-666-666");
	std::cout << Ab1.getInfo() << std::endl;
	Ab1.printInfo();
	Ab2.printInfo();
	Ab3.printInfo();
	cout << Ab1.getCount() << std::endl;

	PhoneBook Ph1(Ab1);
	std::cout << Ph1.getInfo() << std::endl;

	std::cout << "\n" << std::endl;
	std::cout << "Task 1" << std::endl;
	std::cout << "\n" << std::endl;
	std::cout << "Static Phone Book \n" << std::endl;
	PhoneBookStatic();

	std::cout << "\n" << std::endl;
	std::cout << "Dynamic Phone Book \n" << std::endl;
	// PhoneBookDynamic();

	std::cout << "\n" << std::endl;
	std::cout << "Task 2" << std::endl;
	std::cout << "\n" << std::endl;
	std::cout << "Vector \n" << std::endl;
	Test t;
	t.test();

	return 0;
}

