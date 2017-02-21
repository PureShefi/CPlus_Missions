#include "Fraction.h"

Fraction::Fraction() :
	numerator(0), denominator(1)
{
}

Fraction::Fraction(int numerator, int denominator) :
	numerator(numerator), denominator(denominator)
{
}


Fraction::~Fraction()
{
}

void Fraction::setFraction(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

void Fraction::makeSmaller()
{
	if (this->denominator % this->numerator == 0)
	{
		this->denominator /= this->numerator;
		this->numerator = 1;
	}
	if (this->numerator % this->denominator == 0)
	{
		this->numerator /= this->denominator;
		this->denominator = 1;
	}
}

void Fraction::print() const
{
	cout << this->numerator << "/" << this->denominator;
}

Fraction::operator float() const
{
	return ((float)this->numerator / (float)this->denominator);
}

