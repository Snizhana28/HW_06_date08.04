#include "../../interal/library.h"

class Complex
{
private:
	double x;
	double y;
public:
	Complex() = default;
	Complex(double x, double y) : x(x), y(y) {}
	double getX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}
	void setX(double x)
	{
		this->x = x;
	}
	void setY(double y)
	{
		this->y = y;
	}
	void print()
	{
		cout << x << " + " << y << "i" << endl;
	}
	~Complex() = default;
	friend Complex operator+(const Complex& complex1, const Complex& complex2);
	friend Complex operator-(const Complex& complex1, const Complex& complex2);
	friend Complex operator*(const Complex& complex1, const Complex& complex2);
	friend Complex operator/(const Complex& complex1, const Complex& complex2);
};