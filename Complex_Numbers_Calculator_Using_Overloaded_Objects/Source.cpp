#include <iostream>
#include "complexType.h" 
#include <cmath> //to use complex numbers
#include <iomanip>


int main()
{
	cout << setprecision(2) << showpoint << fixed; //show 2 decimal points
	complexType a(5, sqrt(7)), b(6, sqrt(10)); //call real numbers and complex numbers
	cout << "a - b = " << a - b << endl; //do overloaded operations
	cout << "a + b = " << a + b<<endl;
	cout << "a * b = " << a* b<<endl;
	cout << "a / b = " << a/ b<<endl;

	return 0;
}