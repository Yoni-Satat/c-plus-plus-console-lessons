// Lesson3.cpp : Defines the entry point for the console application.
// Basic variables and constants

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int iNumber = 3; // initilize variable by stating its type
	const int kiNumber = 6; // adding const in front of the the int make this variable unmutable
	double dNumber = 99.99;
	cout << "iNumber is equal to the number " << iNumber << endl;
	iNumber = 33; // reasign iNumber to be 33
	cout << "iNumber = 33 mutated the value of iNumber to " << iNumber << endl;
	cout << "Hi, it's kiNumber here, my value is " << kiNumber << ", try n change me, you'll get a compile error" << endl;
	cout << "A variable of type double is for numbers with decimel point, like so: " << dNumber << endl;
	
    return 0;
}

