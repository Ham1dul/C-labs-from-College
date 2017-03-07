//Hamidul Islam
//11/16/15
//fraction calculator
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void menu(int &operation) // gives menu
{
	cout << "this programs purpose is to be a fraction calculator" << endl;
	cout << "please select the type of operation you would like to do" << endl;
	cout << "1=addition, 2=subtraction, 3=multiply, 4=division" << endl; //takes in the operation sought
	cin >> operation;
	cout << "please enter numerator and demoninator of each fraction in 'a/b / c/d' format" << endl;
	cout << "the first number entered will go into a, second into b, and so on" << endl;
}
void addFractions()
{
	double a, b, c, d; // addition of fractions
	cin >> a >> b >> c >> d; //store the inputs
	cout << (a*d + b*c) <<  "/" <<  (b*d); //prints out numerator and denominator of sum
}
void subtractFractions()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	cout <<  (a*d - b*c) <<  "/" << (b*d); //prints out numerator and denominator of difference
}
void multiplyFractions()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << (a*c) << "/" << (b*d); //prints out numerator and denominator of product
}
void divideFractions()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << (a*d) << "/" << (b*c);   //prints out numberator and denominator of division
}
int main()
{
	int operation;
	menu(operation); //call emnue
	if (operation == 1) // call function based on what operation the user wants
	addFractions();
	else if (operation ==2)
	subtractFractions();
	else if (operation == 3)
	multiplyFractions();
	else if (operation == 4)
	divideFractions();
	cout << endl;
	return 0;
}