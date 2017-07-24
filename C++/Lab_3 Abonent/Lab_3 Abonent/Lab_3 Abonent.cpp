// Lab_3 Abonent.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "Abonent.h"
#include "PhoneBook.h"






void TestAbonentArrayDin()
{
	Abonent* subArray = new Abonent[10];
	for (Abonent* pt = subArray; pt < subArray + 10; ++pt)
	{
		pt->printInfo();
	}
	delete[] subArray;
}

void TestAbonentArrayStat()
{
	Abonent subscriberArray[2] =
	{ Abonent("Ivan", "Ivanov", "Ivanovich", "+375172343434", "+375172343434"),
		Abonent("Iv", "Ivanov", "Inovich", "+343434", "+375172343434") };
	for (size_t i(0); i < 2; ++i)
	{
		subscriberArray[i].printInfo();
	}
}

void TestAbonentArrayStat2()
{
	std::array<Abonent, 2> subscriberArray;
}







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
/*		case(3):
			phoneBook.searchDeleteSubscriberStatic();
			break;*/
		}
	}

}










int main()
{

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

	//TestSubscriber();
	TestAbonentArrayDin();
	cout << Ph1.getEntry() << std::endl;
	TestAbonentArrayStat();
	cout << Ph1.getEntry() << std::endl;
	TestAbonentArrayStat2();
	//Task 1
	//TestPhoneBookDynamic();
	PhoneBookStatic();
	//Task 2



    return 0;
}

