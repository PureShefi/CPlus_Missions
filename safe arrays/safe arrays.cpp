// safe arrays.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "sArray.h"
using namespace std;

int main()
{
	sArray<char *,5> arr;
	char **  p;
	try {
		arr[0] = "11";
		arr[1] = "24";
		arr[2] = "34";
		arr[3] = "24";
		arr[4] = "45";
		p = &arr[3];
		p++;

		cout << *p << endl;
	}
	catch (exception ex)
	{
		cout << ex.what() <<endl;
	}
    return 0;
}

