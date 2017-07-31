#include "Book.h"

#include <iostream>


Book::Book(std::string Autor, std::string Name, std::string Publish, std::string Year, std::string Page):
	autor(Autor), name(Name), publish(Publish), year(Year), page(Page)
{}

Book::Book() {}

Book::~Book() {}

void Book::setAutor(const std::string Autor) { std::string autor = Autor; };
void Book::setName(const std::string Name) { std::string surname = Name; };
void Book::setPublish(const std::string Publish) { std::string publish = Publish; };
void Book::setYear(const std::string Year) { std::string year = Year; };
void Book::setPage(const std::string Page) { std::string phone = Page; };

std::string Book::getAutor() const { return autor; };
std::string Book::getName()	const { return name; };
std::string Book::getPublish() const { return publish; };
std::string Book::getYear() const { return year; };
std::string Book::getPage() const { return page; };


std::string Book::getInfo() const
{
	return autor + "	" + name + "	" + publish + "	" + year + "	" + page + "	";
}

void Book::printInfo() const
{
	std::cout << getInfo() << std::endl;
};