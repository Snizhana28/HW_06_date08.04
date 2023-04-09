#include "../model/fraction.h"
#include "../model/complex.h"

// Fraction
Fraction operator +(const Fraction& fraction1, const Fraction& fraction2)
{
	int x = fraction1.x * fraction2.y + fraction2.x * fraction1.y;
	int y = fraction1.y * fraction2.y;
	return Fraction(x, y);
}
Fraction operator -(const Fraction& fraction1, const Fraction& fraction2)
{
	int x = fraction1.x * fraction2.y - fraction2.x * fraction1.y;
	int y = fraction1.y * fraction2.y;
	return Fraction(x, y);
}
Fraction operator *(const Fraction& fraction1, const Fraction& fraction2)
{
	return Fraction(fraction1.x * fraction2.x, fraction1.y * fraction2.y);
}
Fraction operator /(const Fraction& fraction1, const Fraction& fraction2)
{
	if (fraction1.x == 0 || fraction2.x == 0)
	{
		throw "Division by zero";
	}
	int x = fraction1.x * fraction2.y;
	int y = fraction1.y * fraction2.x;
	return Fraction(x, y);
}

//Complex
Complex operator+(const Complex& complex1, const Complex& complex2)
{
	return Complex(complex1.x + complex2.x, complex1.y + complex2.y);
}
Complex operator-(const Complex& complex1, const Complex& complex2)
{
	return Complex(complex1.x - complex2.x, complex1.y - complex2.y);
}
Complex operator*(const Complex& complex1, const Complex& complex2)
{
	double x = complex1.x * complex2.x - complex1.y * complex2.y;
	double y = complex1.x * complex2.y + complex1.y * complex2.x;
	return Complex(x, y);
}
Complex operator/(const Complex& complex1, const Complex& complex2)
{
	double z = complex2.x * complex2.x + complex2.y * complex2.y;
	double x = (complex1.x * complex2.x + complex1.y * complex2.y) / z;
	double y = (complex1.y * complex2.x - complex1.x * complex2.y) / z;
	return Complex(x, y);
}