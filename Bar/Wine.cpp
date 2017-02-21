#include "Wine.h"
#include <sstream>

Wine::Wine(int year):
	year(year)
{
	SetUpName(year);
}

Wine::Wine(int year, char * name):
	Drink(name),year(year)
{
	SetUpName(year);
}

Wine::Wine(int year, char * name, char * color):
	Drink(name), year(year),color(color)
{
	SetUpName(year);
}

Wine::~Wine()
{
}

int Wine::GetYear()
{
	return this->year;
}

void Wine::SetYear(int year)
{
	this->year = year;
}

char * Wine::GetColor()
{
	return this->color;
}

void Wine::SetColor(char * color)
{
	this->color = color;
}

char * Wine::Prepare()
{
	if(this->color == "red")
		return "open bottle and pour into a wine glass, serve at room temperature";
	return "open bottle and pour into a wine glass, serve chilled";
}

void Wine::SetUpName(int year)
{
	this->drinkName.append(" (year ");
	std::ostringstream ss;
	ss << year;
	this->drinkName.append(ss.str());
	this->drinkName.append(")");
}
