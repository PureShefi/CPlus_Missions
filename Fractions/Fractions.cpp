// Fractions.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Fraction.h"

int main()
{
	Fraction f1(2, 5);
	const Fraction f2(2, 4);
	f1 -= f2;
	f1.print();
	cout << endl;
	f1 = f2;
	f1.print();
	cout << endl;

	return 0;
}

