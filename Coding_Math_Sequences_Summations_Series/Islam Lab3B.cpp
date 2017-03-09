#include <iostream>
using namespace std;
void P1();
void P2();

int main()
{
	cout << "Problem 1" << endl;
	P1();
	cout << "problem 2" << endl;
	P2();
	return 0;
}

void P1()
{
	int p[9];
	int sum = 0;
	p[0] = 20;
	for (int i = 1; i < 9; i++)
	{
		p[i] = p[i - 1] - 2;
	}
	for (int j = 0; j < 9; j++)
	{
		cout << p[j] << " ";
		sum = p[j] + sum;
	}
	cout << endl;
	cout << "the sum of the series = " << sum;
	cout << endl;
}

void P2()
{
	int n;
	cout << "please enter n" << endl;
	cin >> n;
	cout << ((n*(180 + 180 * n)) / 2) << endl;

}