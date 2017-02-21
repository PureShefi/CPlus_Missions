#pragma once
#include <iostream>
class Drink
{
protected:
	std::string drinkName;
public:
	Drink();
	Drink(char * name);
	~Drink();

	virtual char * Prepare() = 0;
	/* get/set drink name */
	virtual const char * GetName() const;
	void SetName(char * name) { this->drinkName = name; }
};

