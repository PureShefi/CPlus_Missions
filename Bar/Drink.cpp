#include "Drink.h"

Drink::Drink()
{
}

Drink::Drink(char * name) :
	drinkName(name)
{
}


Drink::~Drink()
{
}

const char * Drink::GetName() const
{
	return this->drinkName.c_str();
}
