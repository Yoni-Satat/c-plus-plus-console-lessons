// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <istream>
using namespace std; 


int main()
{
	cout << "What is your favourite number?" << endl;
	int myNumber;
	cin >> myNumber;
	cout << "What a coincidence, " << myNumber << " is also my favourite number!"<< endl;
    return 0;
}

