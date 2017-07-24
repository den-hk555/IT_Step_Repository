#include "Book.h"

#include <iostream>


Book::Book(std::string AutorN, std::string NameN, std::string PublishN, std::string YearN, std::string PageN):
	autor(AutorN), name(NameN), publish(PublishN), year(YearN), page(PageN)
{}

Book::Book() {}

Book::~Book() {}

void setAutorN(const std::string AutorN) { std::string autor = AutorN; };
void setNameN(const std::string NameN) { std::string surname = NameN; };
void setPublishN(const std::string PublishN) { std::string publish = PublishN; };
void setYearN(const std::string YearN) { std::string year = YearN; };
void setPageN(const std::string PageN) { std::string phone = PageN; };

std::string Book::getAutorN() const { return autor; };
std::string Book::getNameN()	const { return name; };
std::string Book::getPublishN() const { return publish; };
std::string Book::getYearN() const { return year; };
std::string Book::getPageN() const { return page; };


std::string Book::getInfo() const
{
	return autor + "	" + name + "	" + publish + "	" + year + "	" + page + "	";
}

void Book::printInfo() const
{
	std::cout << getInfo() << std::endl;
};