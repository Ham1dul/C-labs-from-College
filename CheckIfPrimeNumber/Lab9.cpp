//by Hamidul Islam
//10/13/15
//prime numbe
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "please enter a integer" << endl;;
	int num,x;
	cin >> num;
	if (num == 2)
		cout << "the input is a prime number" << endl;
	else if (num % 2 == 0 && num != 2)
		cout << "the input is not a prime number" << endl;
	else if (num <= 0)
		cout << "invalid number" << endl;
	else if (num == 1)
		cout << "the input is not a prime number" << endl;
	else if (num < 9 && num % 2 != 0)
		cout << "the input is prime" << endl;
	else
	{
		for (int counter = 3; counter <= sqrt(num); counter+2)
		{
			if (num % counter == 0)
			{
				cout << "the input is not prime" << endl;
				break;
			}
			else
			{
				cout << "the input is prime" << endl;
				break;
			}
		}
	
	}
	

	return 0;
}