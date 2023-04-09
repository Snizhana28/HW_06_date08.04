#include "../domain/provider/operators_overloaded.h"

class Screens
{
 public:
	 static void Home_1() 
	 {
		try
		 {
			 Fraction fraction1(1,2);
			 Fraction fraction2(3,4);

			 cout << "Fraction 1: ";
			 fraction1.print();
			 cout << "Fraction 2: ";
			 fraction2.print();
			 cout << "Fraction 1 + Fraction 2: ";
			 (fraction1 + fraction2).print();
			 cout << "Fraction 1 - Fraction 2: ";
			 (fraction1 - fraction2).print();
			 cout << "Fraction 1 * Fraction 2: ";
			 (fraction1 * fraction2).print();
			 cout << "Fraction 1 / Fraction 2: ";
			 (fraction1 / fraction2).print();
		 }
		 catch (const char* msg)
		 {
			 cout << msg << endl;
		 }
		 cout << endl;
	}
	 static void Home_2() 
	 {
		 try
		 {
			 Complex complex1(1.0, 2.0);
			 Complex complex2(2.0, 3.0);

			 cout << "Complex 1: ";
			 complex1.print();
			 cout << "Complex 2: ";
			 complex2.print();
			 cout << "Complex 1 + Complex 2: ";
			 (complex1 + complex2).print();
			 cout << "Complex 1 - Complex 2: ";
			 (complex1 - complex2).print();
			 cout << "Complex 1 * Complex 2: ";
			 (complex1 * complex2).print();
			 cout << "Complex 1 / Complex 2: ";
			 (complex1 / complex2).print();
		 }
		 catch (const char* msg)
		 {
			 cout << msg << endl;
		 }
	 }
};