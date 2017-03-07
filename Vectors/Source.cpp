#include <iostream>
#include <vector>


using namespace std;
int main()
{
	vector<int> v;
	int i = 100;
	cout << "reserving 15 size vector" << endl;
	v.reserve(15);
	for (int counter = 0; counter < 10; counter++)
	{
		v.push_back(counter);
	}
	cout << "printing 10 push backs : ";
	for (int p : v)
		cout << p << " ";
	cout << endl;
	cout << "printing size : ";
	cout << v.size() << endl;
	for (int counter = 0; counter < 5; counter++)
	{
		v.pop_back();
	}
	cout << endl;
	cout << "printing 5 popbacks : ";
	for (int p : v)
		cout << p << " ";
	cout << endl;
	cout << "printing size : ";
	cout << v.size() << endl;
	cout << "printing empty : ";
	cout << v.empty() << endl;
	v.clear();
	cout << endl;
	cout << "printing after clear : ";
	for (int p : v)
		cout << p << " ";
	cout << endl;
	cout << "printing empty() : " ;
	cout << v.empty() << endl;
	cout << "printing size() : ";
	cout << v.size() << endl;

	return 0;
}