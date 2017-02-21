#include "Beer.h"

Beer::Beer()
{
}

Beer::Beer(char * name):
	Drink(name)
{
}


Beer::~Beer()
{
}

char * Beer::Prepare()
{
	return "pour beer into glass and serve\n";
}
