// Lesson_12.cpp : Defines the entry point for the console application.
// Basic functions

#include "stdafx.h"
#include <iostream>
using namespace std;

void f() {
	cout << "function f() was invoked from main()" << endl;
}

// function declaration takes away the worry about order of declaration
void a();
void b();

// functions can return numbers
int iAddNumbers(int a, int b) {
	return a + b;
}

// functions can make decisions
void vCompare(int iX, int iY) {
	if (iX < iY) {
		cout << iX << " is smaller than " << iY << endl;
	} else {
		cout << iX << " is bigger than " << iY << endl;
	}
}

// functions can return true or false
bool bLessThanFive(int iD) {
	if (iD < 5) {
		return true;
	} else {
		return false;
	}
}

// use the return keyword to break out of a function
void vBreakOut() {
	cout << "I use the return keyword on the next line so the line after that won't be executed" << endl;
	return;
	cout << "This line won't get executed" << endl;
}


int main()
{
	f();

	a();

	cout << "5 + 5 = " << iAddNumbers(5, 5) << endl;

	vCompare(2, 3);
	vCompare(3, 2);

	bLessThanFive(4);

	vBreakOut();

    return 0;
}

void a() {
	b();
}

void b() {
	cout << "I am function b()" << endl;
}

