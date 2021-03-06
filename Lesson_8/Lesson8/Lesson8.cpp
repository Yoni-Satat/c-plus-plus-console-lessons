// Lesson8.cpp : Defines the entry point for the console application.
// While and Do While Loops

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "This while loop will print numbers from 0 to 8" << endl;
	int iCount = 0;
	while (iCount < 9) {
		cout << iCount << endl;
		++iCount;
	}

	cout << "Example of do while loop to print numbers from 0 to 8" << endl;
	iCount = 0;
	do {
		cout << iCount << endl;
		++iCount;
	} while (iCount < 9);

	cout << "Using a while loop to ask the user if they want to continue" << endl;
	char cContinue;
	do {
		cout << "Do you wish to continue looping? (y / n)" << endl;
		cin >> cContinue;
	} while (cContinue == 'y');
    return 0;
}

