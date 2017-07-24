#include "Student.h"

#include <iostream>


Student::Student(std::string SurnameN, std::string NameN, std::string MidnameN, std::string BirthYearN, std::string PhoneN,
	std::string LocationN, std::string SchoolN, std::string GroupN) :
	surname(SurnameN), name(NameN), midname(MidnameN), birthYear(BirthYearN), phone(PhoneN), location(LocationN), school(SchoolN), group(GroupN)
{}

Student::Student(){}

Student::~Student(){}

void setSurnameN(const std::string SurnameN) { std::string surname = SurnameN; };
void setNameN(const std::string NameN) { std::string surname = NameN; };
void setMidnameN(const std::string MidnameN) { std::string midname = MidnameN; };
void setBirthYearN(const std::string BirthYearN) { std::string birthYear = BirthYearN; };
void setPhoneN(const std::string PhoneN) { std::string phone = PhoneN; };
void setLocationN(const std::string LocationN) { std::string location = LocationN; };
void setSchoolN(const std::string SchoolN) { std::string school = SchoolN; };
void setGroupN(const std::string GroupN) { std::string group = GroupN; };


std::string Student::getInfo() const
{
	return surname + "	" + name + "	" + midname + "	" + birthYear + "	" + phone + "	" + location + "	" + school + "	" + group;
};

void Student::printInfo() const
{
	std::cout << getInfo() << std::endl;
};