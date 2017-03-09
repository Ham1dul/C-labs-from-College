#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
void comp(string, int, int);


int main()
{
	string str, str2;
	int length;
	int n,x;
	srand(time(NULL));

	cout << "pelase enter string" << endl;
	cin >> str;
	length = str.length();
	cout << "please enter n" << endl;
	cin >> n;
	for (int counter = 0; counter < pow(length, n); counter++)
	{
		for (int i = 0; i < n; i++)
		{
			x = rand() % length + 1;
			str2 = str2 + str[x-1];
		}
		cout << str2 << endl;
		str2 = "";
	}

	return 0;
}

