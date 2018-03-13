// Lesson5.cpp : Defines the entry point for the console application.
// Logical Operators

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	bool bP = true;
	bool bQ = true;
	char cEndLine = '\n';
	cout << "The negate (!) operator" << endl;
	cout << "--------------" << endl;

	cout << " P = " << bP << " ; Not P = " << !bP << endl;

	bP = false;
	cout << " P = " << bP << " ; Not P = " << !bP << endl;

	cout << cEndLine;

	cout << "The or (||) operator" << endl;
	cout << "--------------" << endl;
	
	bP = true;

	cout << "bP = " << bP << " ; bQ = " << bQ <<
		" ; bP or bQ = " << (bP || bQ) << endl;

	bQ = false;

	cout << "bP = " << bP << " ; bQ = " << bQ <<
		" ; bP or bQ = " << (bP || bQ) << endl;

	bP = false;
	bQ = true;

	cout << "bP = " << bP << " ; bQ = " << bQ <<
		" ; bP or bQ = " << (bP || bQ) << endl;

	bQ = false;

	cout << "bP = " << bP << " ; bQ = " << bQ <<
		" ; bP or bQ = " << (bP || bQ) << endl;

	cout << "The and (&&) operator" << endl;
	cout << "--------------" << endl;

	bP = true;
	bQ = true;

	cout << "bP = " << bP << " ; bQ = " << bQ <<
		" ; bP or bQ = " << (bP && bQ) << endl;

	bQ = false;

	cout << "bP = " << bP << " ; bQ = " << bQ <<
		" ; bP or bQ = " << (bP && bQ) << endl;

	bP = false;
	bQ = true;

	cout << "bP = " << bP << " ; bQ = " << bQ <<
		" ; bP or bQ = " << (bP && bQ) << endl;

	bQ = false;

	cout << "bP = " << bP << " ; bQ = " << bQ <<
		" ; bP or bQ = " << (bP && bQ) << endl;

    return 0;
}

