#pragma once

#include <string>

class Book
{
	std::string autor;
	std::string name;
	std::string publish;
	std::string year;
	std::string page;


public:

	Book(const std::string AutorN, const std::string NameN, const std::string PublishN, const std::string YearN, const std::string PageN);

	Book();

	void setAutorN(const std::string AutorN);
	void setSurnameN(const std::string SurnameN);
	void setPublishN(const std::string PublishN);
	void YearN(const std::string YearN);
	void setPageN(const std::string PageN);

	std::string getAutorN() const;
	std::string getNameN()	const;
	std::string getPublishN() const;
	std::string getYearN() const;
	std::string getPageN() const;

	std::string getInfo() const;

	void printInfo() const;

	~Book();

};
