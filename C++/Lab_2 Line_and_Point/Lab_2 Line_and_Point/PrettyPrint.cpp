#include "PrettyPrint.h"

#include <string>
#include <iostream>
#include <tchar.h>

using namespace std;


PrettyPrint::PrettyPrint(const std::string String_STRN):
	string_STR(String_STRN)
{}

PrettyPrint::~PrettyPrint()
{}

void setString_STRN(const std::string String_STRN) { std::string string_STR = String_STRN; };

std::string PrettyPrint::getInfo() const
{
	return string_STR;
}

void PrettyPrint::printInfo() const
{
	std::cout << getInfo() << std::endl;
}


std::string PrettyPrint::Concat(std::string& String_STRN, std::string& String_STRN1, const char *symb)
{
	string Str3 = String_STRN + symb + String_STRN1;
	return Str3;
}






void PrettyPrint::replaceLiter(std::string& String_STRN)
{
	for (int i = 0; i < String_STRN.size(); ++i)
	{
		if (String_STRN[i] == 'a')
			String_STRN[i] = 'o';
	}
}


void PrettyPrint::invertString(std::string& String_STRN)
{
	const size_t strLen = String_STRN.size();
	for (size_t i = strLen / 2; i--;)
		swap(String_STRN[i], String_STRN[strLen - i - 1]);

}
/*
void PrettyPrint::invertString(PrettyPrint& str)
{
	const size_t strLen = str_N.size();
	for (size_t i = strLen / 2; i--;)
		swap(str_N[i], str_N[strLen - i - 1]);

}
*/