#include "Fraction.h"

/*********************************** plus ************************************/
Fraction operator+(float num, const Fraction & frac)
{
	return Fraction(frac.numerator + num*frac.denominator, frac.denominator);
}
Fraction operator+(const Fraction & frac, float num)
{
	return Fraction(frac.numerator + num*frac.denominator, frac.denominator);
}
Fraction& operator+=(Fraction & frac, float num)
{
	frac.numerator = frac.numerator + num*frac.denominator;
	return frac;
}
Fraction& operator++(Fraction & frac) {
	frac.numerator += frac.denominator;
	return frac;
}
Fraction& operator++(Fraction & frac, int) {
	frac.numerator += frac.denominator;
	return frac;
}
Fraction operator+(const Fraction & frac, const Fraction & other)
{
	Fraction fraction;
	if (frac.denominator == other.denominator)
		fraction.setFraction(frac.numerator + other.numerator, frac.denominator);
	else
	{
		fraction.numerator = frac.numerator * other.denominator + other.numerator * frac.denominator;
		fraction.denominator = frac.denominator * other.denominator;
		fraction.makeSmaller();
	}
	return fraction;
}
Fraction& operator+=(Fraction & frac, const Fraction & other)
{
	frac = frac + other;
	return frac;
}

/*********************************** minus ************************************/
Fraction operator-(float num, const Fraction & frac)
{
	return Fraction(frac.numerator - num*frac.denominator, frac.denominator);
}
Fraction operator-(const Fraction & frac, float num)
{
	return Fraction(frac.numerator - num*frac.denominator, frac.denominator);
}
Fraction& operator-=(Fraction & frac, float num)
{
	frac.numerator = frac.numerator - num*frac.denominator;
	return frac;
}
Fraction& operator--(Fraction & frac) {
	frac.numerator -= frac.denominator;
	return frac;
}
Fraction& operator--(Fraction & frac, int) {
	frac.numerator -= frac.denominator;
	return frac;
}
Fraction operator-(const Fraction & frac, const Fraction & other)
{
	Fraction fraction;
	if (frac.denominator == other.denominator)
		fraction.setFraction(frac.numerator - other.numerator, frac.denominator);
	else
	{
		fraction.numerator = frac.numerator * other.denominator - other.numerator * frac.denominator;
		fraction.denominator = frac.denominator * other.denominator;
		fraction.makeSmaller();
	}
	return fraction;
}
Fraction& operator-=(Fraction & frac, const Fraction & other)
{
	frac = frac - other;
	return frac;
}

/*********************************** multiply ***********************************/
Fraction operator*(float num, const Fraction & frac)
{
	return Fraction(frac.numerator * num, frac.denominator);
}
Fraction operator*(const Fraction & frac, float num)
{
	return Fraction(frac.numerator * num, frac.denominator);
}
Fraction& operator*=(Fraction & frac, float num)
{
	frac.numerator = frac.numerator*num;
	return frac;
}
Fraction operator*(const Fraction & frac, const Fraction & other)
{
	Fraction temp(frac.numerator * other.numerator, frac.denominator*other.denominator);
	temp.makeSmaller();
	return temp;
}
Fraction& operator*=(Fraction & frac, const Fraction & other)
{
	frac = frac * other;
	return frac;
}



/*********************************** divide ***********************************/
Fraction operator/(float num, const Fraction & frac)
{
	return Fraction(frac.numerator, frac.denominator * num);
}
Fraction operator/(const Fraction & frac, float num)
{
	return Fraction(frac.numerator, frac.denominator * num);
}
Fraction& operator/=(Fraction & frac, float num)
{
	frac.denominator = frac.denominator*num;
	return frac;
}
Fraction operator/(const Fraction & frac, const Fraction & other)
{
	Fraction temp(frac.numerator * other.denominator, frac.denominator*other.numerator);
	temp.makeSmaller();
	return temp;
}
Fraction& operator/=(Fraction & frac, const Fraction & other)
{
	frac = frac / other;
	return frac;
	return frac;
}


/*********************************** comparison ***********************************/
const bool operator==(const Fraction & frac, const Fraction & other)
{
	return frac.numerator * other.denominator == other.numerator * frac.denominator;
}
const bool operator>(const Fraction & frac, const Fraction & other)
{
	return frac.numerator * other.denominator > other.numerator * frac.denominator;
}
const bool operator<(const Fraction & frac, const Fraction & other)
{
	return frac.numerator * other.denominator < other.numerator * frac.denominator;
}
const bool operator>=(const Fraction & frac, const Fraction & other)
{
	return frac > other || frac == other;
}
const bool operator<=(const Fraction & frac, const Fraction & other)
{
	return  frac < other || frac == other;
}