#pragma once
#include "Drink.h"
class Beer: public Drink
{
public:
	Beer();
	Beer(char * name);
	~Beer();

	using Drink::operator=;
	
	/* prepare a drink*/
	virtual char * Prepare();
};

