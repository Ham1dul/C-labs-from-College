#include <iostream>
using namespace std;
void LCM();
void GCD();

int main() 
{
	int choice;
	cout << "to find LCM enter 1, to find GCD enter 2" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		LCM();
		break;
	case 2:
		GCD();
		break;
	default:
		cout << "invalid input" << endl;
	}

	return 0;
}

void GCD()
{
	int n1, n2;
	cout << "Enter a decimal number " << endl;
	cin >> n1;
	cout << "Enter another decimal number " << endl;
	cin >> n2;

	while (n1 != n2) {
		if (n1 > n2)
			n1 = n1- n2;
		else
			n2 = n2- n1;
	}

	cout << "GCD = " << n1;


}
void LCM()
{
	int n1, n2, max;
	cout << "Enter a decimal number " << endl;
	cin >> n1;
	cout << "Enter another decimal number " << endl;
	cin >> n2;
	if (n1 > n2)
		max = n1;
	else
		max = n2;
	do {
		if (max % n1 == 0 && max % n2 == 0)
		{
			cout << "LCM = " << max << endl;
			break;
		}
		else
			++max;
	} while (true);

}