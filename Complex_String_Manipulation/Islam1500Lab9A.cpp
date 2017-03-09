#include <iostream>
#include <string>
using namespace std;

void increment(char *str, int x, int y);
void swap(char *x, char *y);

int main()
{
	char str[100];
	string x;
	int length;
	cout << "please enter the length of the string" << endl;
	cin >> length;
	cout << "please enter string" << endl;
	cin >> x;
	for (int i = 0; i < length; i++)
	{
		str[i]=x[i];
	}
	str[length] = '\0';
	increment(str, 0, length - 1);
	return 0;
}

void increment(char *str, int x, int y)
{
	int i;
	if (x == y)
	{
		cout << str << endl;
	}
	else
	{
		for (i = x; i <= y; i++)
		{
			swap((str + x), (str + i));
			increment(str, x + 1, y);
			swap((str + x), (str + i));
		}
	}
}

void swap(char *x, char *y)
{
	char a;
	a = *x;
	*x = *y;
	*y = a;
}