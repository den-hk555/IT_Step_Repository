#pragma once

#include <string>

using namespace std;

class Abonent
{
	std::string surname;
	std::string name;
	std::string midname;
	std::string phone;
	std::string mobPhone;
	static size_t countAbonent;

public:

	Abonent(const std::string SurnameN, const std::string NameN, const std::string MidnameN, const std::string PhoneN, const std::string MobPhoneN);

	Abonent();

	void setNameN(const std::string NameN);
	void setSurnameN(const std::string SurnameN);
	void setMidnameN(const std::string MidnameN);
	void setPhoneN(const std::string PhoneN);
	void setMobPhoneN(const std::string MobPhoneN);

	size_t Abonent::getCount();

	std::string getSurnameN() const;
	std::string getNameN() const;
	std::string getMidnameN() const;
	std::string getPhoneN() const;
	std::string getMobPhoneN() const;

	std::string getInfo() const;

	void printInfo() const;

	~Abonent();

};