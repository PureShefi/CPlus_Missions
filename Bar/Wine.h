#pragma once
#include <iostream>
#include "Drink.h"

using namespace std;
class Wine: public Drink
{
private:
	int year;
	char * color;
public:
	Wine(int year);
	Wine(int year, char * name);
	Wine(int year, char * name, char * color);
	~Wine();

	/* gets and sets */
	int GetYear();
	void SetYear(int year);
	char * GetColor();
	void SetColor(char * color);


	/* prepare drink */
	char * Prepare();

	/*set up name*/
	void SetUpName(int year);
};

