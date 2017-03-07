//Programmed by: Hamidul Islam on 9/29/15
//Salary Program

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	double baseSalary, noOfserviceYears, bonus, totalSales, additionalBonus, payCheck;
	cout << "please enter monthly base salary" << endl;
	cin >> baseSalary;
	cout << "please enter number of years of service" << endl;
	cin >> noOfserviceYears;
	if (noOfserviceYears <= 5)
		bonus = 10 * noOfserviceYears;
	else
		bonus = 20 * noOfserviceYears;
	cout << "please enter total sales" << endl;
	cin >> totalSales;
	if (totalSales < 5000)
		additionalBonus = 0;
	if (5000 <= totalSales <= 10000)
		additionalBonus = totalSales * (0.03);
	else
		additionalBonus + totalSales * (0.06);
	payCheck = baseSalary + bonus + additionalBonus;
	cout << "total paycheck = " << payCheck << endl;
	
	return 0;
}