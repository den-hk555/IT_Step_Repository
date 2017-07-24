#pragma once
#include <string>


class PrettyPrint
{
	std::string string_STR;



public:

	PrettyPrint(std::string String_STRN);
	
	// PrettyPrint();

	~PrettyPrint();

	void setString_STRN(const std::string String_STRN);

	std::string getString_STRN() const { return string_STR; };

	std::string getInfo() const;

	void printInfo() const;

	std::string Concat(std::string& String_STRN, std::string& String_STRN1, const char *symb);

	void replaceLiter(std::string& String_STRN);

	void invertString(std::string& String_STRN);
	//void invertString(PrettyPrint& str);
	
};

