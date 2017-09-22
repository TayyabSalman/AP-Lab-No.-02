// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "header.h"

#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
	int n;

	cout << "Enter a positive integer: ";
	cin >> n;

	cout << "Factorial of " << n << " = " << factorial(n);

	return 0;
}


