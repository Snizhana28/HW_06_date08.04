#include "../../interal/library.h"

class Fraction 
{
private:
	int x;
	int y;
public:
	Fraction() = default;
	Fraction(int x, int y) : x(x), y(y) {}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	void setX(int x)
	{
		this->x = x;
	}
	void setY(int y)
	{
		this->y = y;
	}
	void print()
	{
		cout << x << "/" << y << endl;
	}
	~Fraction() = default;

	friend Fraction operator+(const Fraction& fraction1, const Fraction& fraction2);
	friend Fraction operator-(const Fraction& fraction1, const Fraction& fraction2);
	friend Fraction operator*(const Fraction& fraction1, const Fraction& fraction2);
	friend Fraction operator/(const Fraction& fraction1, const Fraction& fraction2);

};

