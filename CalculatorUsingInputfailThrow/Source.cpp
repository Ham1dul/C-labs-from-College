#include <iostream>
#include <cmath>
#include "inputfail.h"
#include "negativefail.h"
#include "zerofail.h"

int choice = 0;

using namespace std;
int main()
{
	do {
	try
	{
		
		double x, y;

			cout << "enter your option " << endl;
			cout << "1. Division" << endl;
			cout << "2. Square root" << endl;
			cout << "3. Addition" << endl;
			cout << "4. exit" << endl;
			cin >> choice;
			if (!cin)
			{
				inputfail c;
				throw c;
			}
			switch (choice)
			{
			case 1:
			{
				cout << "enter first number" << endl;
				cin >> x;
				if (!cin)
				{
					inputfail c;
					throw c;
				}
				cout << "enter second number" << endl;
				cin >> y;
				if (!cin)
				{
					inputfail c;
					throw c;
				}
				if (y == 0)
				{
					zerofail a;
					throw a;
				}
				else
					cout << x / y << endl;;
			}
			case 2:
			{
				cout << "enter first number" << endl;
				cin >> x;
				if (!cin)
				{
					inputfail c;
					throw c;
				}
				if (x < 0)
				{
					negativefail b;
					throw b;
				}
				else
					cout << sqrt(x) << endl;
			}
			case 3:
			{
				cout << "enter first number" << endl;
				cin >> x;
				if (!cin)
				{
					inputfail c;
					throw c;
				}
				cout << "enter second number" << endl;
				cin >> y;
				if (!cin)
				{
					inputfail c;
					throw c;
				}
				cout << x + y << endl;
			}
			default:
				break;
			}


		
		
		}
	
	catch (negativefail d)
	{
		cin.clear();
		cin.ignore(1024, '\n');

	}
	catch (zerofail e)
	{
		cin.clear();
		cin.ignore(1024, '\n');

	}
	catch (inputfail f)
	{
		cin.clear();
		cin.ignore(1024, '\n');
	}
	} while (choice != 4);
	return 0;
}