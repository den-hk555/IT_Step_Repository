// Home_Work_2017_07_09_Bitwise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <tchar.h>
#include <stdint.h>


enum Style
{
	// (B – bold), (I – italic), (U – underline)
	none = 0,				            // 0000
	bold = 1,				            // 0001
	italic = 1 << 1,			        // 0010
	underline = 1 << 2,				    // 0100
	all = bold | italic | underline		// 0111
};


/* struct uint_32
{
	unsigned int Bold = 0x100;						//		0001 0000 0000
	unsigned int Italic = 0x100 << 1;				//		0010 0000 0000
	unsigned int Underline = 0x100 << 2;			//		0100 0000 0000
	unsigned int All = Bold | Italic | Underline;	//		0111 0000 0000

	unsigned int Left = 0x800;						// 0000 1000 0000 0000
	unsigned int Center = 0x800 << 1;				// 0001 0000 0000 0000
	unsigned int Right = 0x800 << 2;				// 0010 0000 0000 0000
	unsigned int Justify = 0x800 << 3;				// 0100 0000 0000 0000

} _uint_32;*/



enum uint_32
{
	Bold = 0x100,									//		0001 0000 0000
	Italic = 0x100 << 1,							//		0010 0000 0000
	Underline = 0x100 << 2,							//		0100 0000 0000
	All = Bold | Italic | Underline,				//		0111 0000 0000

	Left = 0x800,									// 0000 1000 0000 0000
	Center = 0x800 << 1,							// 0001 0000 0000 0000
	Right = 0x800 << 2,								// 0010 0000 0000 0000
	Justify = 0x800 << 3,							// 0100 0000 0000 0000
};

void PrintHtml(char const* str, int style)
{
	char *beforeB, *beforeI, *beforeU, *afterB, *afterI, *afterU;

	if (style & bold)
		beforeB = "<B>";
	else
		beforeB = "";
	if (style & italic)
		beforeI= "<I>";
	else
		beforeI = "";
	if (style & bold)
		beforeU = "<U>";
	else
		beforeU = "";

	if (style & bold)
		afterB = "</B>";
	else
		afterB = "";
	if (style & italic)
		afterI = "</I>";
	else
		afterI = "";
	if (style & bold)
		afterU = "</U>";
	else
		afterU = "";
	
	printf("%s%s%s%s%s%s%s", beforeB, beforeI, beforeU, str, afterU, afterI, afterB);
	
};


void SetParagraphFlags(uint32_t flags)
{
	char *flagB, *flagI, *flagU, *flagL, *flagC, *flagR, *flagJ;

	printf("\nText paragraph display settings: %d\n", flags);

	if (flags & Bold)
		flagB = "<B>";
	else
		flagB = "";
	if (flags & Italic)
		flagI = "<I>";
	else
		flagI = "";
	if (flags & Underline)
		flagU = "<U>";
	else
		flagU = "";
	if (flags & Left)
		flagL = "<Left>";
	else
		flagL = "";
	if (flags & Center)
		flagC = "<Center>";
	else
		flagC = "";
	if (flags & Right)
		flagR = "<Right>";
	else
		flagR = "";
	if (flags & Justify)
		flagJ = "<Justify>";
	else
		flagJ = "";

	if (flags & 0xFF00)
	{
		printf("\nStyle: %s %s %s", flagB, flagI, flagU);
		printf("\nHorAlign: %s %s %s %s", flagL, flagC, flagR, flagJ);
	}
	printf("\nSize: %d", flags & 0xFF);
};



int main() {

	char const* mystr;

	mystr = "Hello !";
	PrintHtml(mystr, all);
	printf("\n");

	mystr = "Hello World !";
	PrintHtml(mystr, underline | italic);
	printf("\n");


	printf("\n");
	SetParagraphFlags( Bold | Italic | Center | 16);
	printf("\n");

	return 0;
}


