#pragma once

#include <string>


class Student
{
	std::string surname;
	std::string name;
	std::string midname;
	std::string birthYear;
	std::string phone;
	std::string location;
	std::string school;
	std::string group;

public:

	Student(const std::string SurnameN, const std::string NameN, const std::string MidnameN, const std::string BirthYearN,
		const std::string PhoneN, const std::string LocationN, const std::string SchoolN, const std::string GroupN);
	
	Student();
	
	void setNameN(const std::string NameN);
	void setSurnameN(const std::string SurnameN);
	void setMidnameN(const std::string MidnameN);
	void BirthYearN(const std::string BirthYearN);
	void setPhoneN(const std::string PhoneN);
	void setLocationN(const std::string LocationN);
	void setSchoolN(const std::string SchoolN);
	void setGroupN(const std::string GroupN);

	std::string getSurnameN() const { return surname; };
	std::string getNameN()	const { return name; };
	std::string getMidnameN() const { return midname; };
	std::string getBirthYearN() const { return birthYear; };
	std::string getPhoneN() const { return phone; };
	std::string getLocationN() const { return location; };
	std::string getSchoolN() const { return school; };
	std::string getGroupN() const { return group; };

	std::string getInfo() const;

	void printInfo() const;

	~Student();

};
