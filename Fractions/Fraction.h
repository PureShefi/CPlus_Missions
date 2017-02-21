#pragma once
#include <iostream>
using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction();
	Fraction(int numerator, int denominator);
	~Fraction();

	/* gets and sets*/
	void setFraction(int numerator, int denominator);
	float getFraction() const { return (float)numerator / (float)denominator; }
	void setNumerator(int numerator) { this->numerator = numerator; }
	int getNumerator() const { return numerator; }
	void setDenominator(int denominator) { this->denominator = denominator; }
	int getDenominator() const { return denominator; }

	/* makes the fraction smaller 2/4 -> 1/2 */
	void makeSmaller();

	/*print function*/
	void print() const;

	/* add operators */
	/*with numbers*/
	friend Fraction operator+(float num, const Fraction & frac);
	friend Fraction operator+(const Fraction & frac, float num);
	friend Fraction& operator+=(Fraction & frac, float num);
	friend Fraction& operator++(Fraction & frac);
	friend Fraction& operator++(Fraction & frac, int);
	/*with other fractions*/
	friend Fraction operator+(const Fraction & frac, const Fraction & other);
	friend Fraction& operator+=(Fraction & frac, const Fraction & other);

	/* minus operators */
	/*with numbers*/
	friend Fraction operator-(float num, const Fraction & frac);
	friend Fraction operator-(const Fraction & frac, float num);
	friend Fraction& operator-=(Fraction & frac, float num);
	friend Fraction& operator--(Fraction & frac);
	friend Fraction& operator--(Fraction & frac, int);
	/*with other fractions*/
	friend Fraction operator-(const Fraction & frac, const Fraction & other);
	friend Fraction& operator-=(Fraction & frac, const Fraction & other);

	/* multiply operators */
	/*with numbers*/
	friend Fraction operator*(float num, const Fraction & frac);
	friend Fraction operator*(const Fraction & frac, float num);
	friend Fraction& operator*=(Fraction & frac, float num);
	/*with other fractions*/
	friend Fraction operator*(const Fraction & frac, const Fraction & other);
	friend Fraction& operator*=(Fraction & frac, const Fraction & other);

	/* divide operators */
	/*with numbers*/
	friend Fraction operator/(float num, const Fraction & frac);
	friend Fraction operator/(const Fraction & frac, float num);
	friend Fraction& operator/=(Fraction & frac, float num);
	/*with other fractions*/
	friend Fraction operator/(const Fraction & frac, const Fraction & other);
	friend Fraction& operator/=(Fraction & frac, const Fraction & other);

	/* comparison operators*/
	friend const bool operator==(const Fraction & frac, const Fraction & other);
	friend const bool operator>(const Fraction & frac, const Fraction & other);
	friend const bool operator<(const Fraction & frac, const Fraction & other);
	friend const bool operator>=(const Fraction & frac, const Fraction & other);
	friend const bool operator<=(const Fraction & frac, const Fraction & other);

	/* coversion operators */
	operator float() const;
};

