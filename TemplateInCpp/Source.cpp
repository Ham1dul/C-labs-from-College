#include <iostream>
using namespace std;


template <typename myType>
myType templat(myType a, myType b)
{

	if (a <= b)
		return a;
	else
		return b;
}

int main()
{
	int a, b;
	cout << "enter two integers" << endl;
	cin >> a >> b;
	char c, d;
	cout << "returning templat with integers = " << templat(a, b) <<endl;
	cout << "enter two characters" << endl;
	cin >> c >> d;
	cout << "returning templat with chars = " << templat(c, d)<<endl;
	return 0;
}
