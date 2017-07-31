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

	Book(const std::string Autor, const std::string Name, const std::string Publish, const std::string Year, const std::string Page);

	Book();

	void setAutor(const std::string Autor);
	void setName(const std::string Name);
	void setPublish(const std::string Publish);
	void setYear(const std::string Year);
	void setPage(const std::string Page);

	std::string getAutor() const;
	std::string getName()	const;
	std::string getPublish() const;
	std::string getYear() const;
	std::string getPage() const;

	std::string getInfo() const;

	void printInfo() const;

	~Book();

};
