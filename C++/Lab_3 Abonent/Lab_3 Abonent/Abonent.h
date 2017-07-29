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

	Abonent(const std::string Surname, const std::string Name, const std::string Midname, const std::string Phone, const std::string MobPhone);

	Abonent();

	void setName(const std::string Name);
	void setSurname(const std::string Surname);
	void setMidname(const std::string Midname);
	void setPhone(const std::string Phone);
	void setMobPhone(const std::string MobPhone);

	size_t getCount();

	std::string getSurname() const;
	std::string getName() const;
	std::string getMidname() const;
	std::string getPhone() const;
	std::string getMobPhone() const;

	std::string getInfo() const;

	void printInfo() const;

	~Abonent();

};