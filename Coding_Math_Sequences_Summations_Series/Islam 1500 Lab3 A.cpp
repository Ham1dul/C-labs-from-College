//Hamidul Islam
//functions

#include <iostream>
#include <cmath>
using namespace std;
void Q1();
void Q2();
void Q3();
void Q4();
void Q5();
void Q6();
void Check(double Q[]);
void xth(double Q[]);
void NumOfElements(double Q[]);



int main()
{
	cout << "question 1" << endl;
	Q1();
	cout << "question 2" << endl;
	Q2();
	cout << "question 3" << endl;
	Q3();
	cout << "question 4" << endl;
	Q4();
	cout << "question 5" << endl;
	Q5();
	cout << "question 6" << endl;
	Q6();


	return 0;
}

void Q1()
{
	double Q1[6];
	double sum=0;
	int num=-8;
	for (int i = 0; i < 6; i++)
	{
		Q1[i] = num;
		num = num + 3;
		sum = sum + Q1[i];
		cout << Q1[i] << " , ";
	}
	Check(Q1);
	cout << "the sum of the series = " << sum <<endl;
	size_t NumberOfElements = sizeof(Q1) / sizeof(Q1[0]);
	cout << "the total number of elements = " << NumberOfElements;
	cout << endl;
	xth(Q1);
}

void Check(double Q[])
{
	if (Q[1] - Q[0] == Q[2] - Q[1] && Q[2] - Q[1] == Q[3] - Q[2])
		cout << "Function is arithmatic" << endl;
	else if (Q[1] / Q[0] == Q[2] / Q[1] && Q[2] / Q[1] == Q[3] / Q[2])
		cout << "function is geometric" << endl;
	else
		cout << "function is neither" << endl;

}
void xth(double Q[])
{
	int x;
	cout << "to find the xth term, input x (1, 2, ....n)" << endl;
	cin >> x;
	cout << Q[x-1] << endl;
}


void Q2()
{
	double Q2[25];
	int sum=0;
	double x=2;
	int i = 1;
	Q2[0] = 1;
	for (i; i < 25; i++ && x++)
	{
		
		Q2[i] = sqrt(x);
		if (i == 24)
			break;
		i++;
		Q2[i] = x;
	}
	for (int counter = 0; counter < 25; counter++)
	{
		sum = sum + Q2[counter];
		cout << Q2[counter]<< " , ";
	}
	Check(Q2);
	cout << "the sum of the series = " << sum << endl;
	size_t NumberOfElements = sizeof(Q2) / sizeof(Q2[0]);
	cout << "the total number of elements = " << NumberOfElements;
	cout << endl;
	xth(Q2);
}

void Q3()
{
	double n;
	cout << "sequence = 1^3, 2^3, 3^3....n^3" << endl;
	cout << "to find the sum of 'n' number of elements enter n" << endl;
	cin >> n;
	cout << "sum of n elements = " << pow((n*(n + 1) / 2), 2)<< endl;
	cout << "to find the xth term please enter x" << endl;
	cin >> n;
	cout << "xth term = " << pow(n, 3) <<endl;
}
void Q4()
{
	int n;
	cout << "sequence = 1/1!, 2/2! ... 1/n!"<<endl;
	cout << "reoccurrence relation = n/n+1" << endl;
	cout << "to find the sum of 'n' elements enter n" << endl;
	cin >> n;
	cout << "sum of n terms = " << n / n + 1 << endl;
}
void Q5()
{
	int n;
	cout << "secquence = 54, 18, 6..." << endl;
	cout << "reoccrence relation = a(1/3)^n" << endl;
	cout << "to find the sum of 'n' elements enter n" << endl;
	cin >> n;
	cout << "sum of n terms = " << 54 * ((1 - pow(1 / 3, n) / (1 - 1 / 3))) << endl;

}
void Q6()
{
	int i, j;
	cout << "please enter i" << endl;
	cin >> i;
	cout << "please enter j" << endl;
	cin >> j;
	cout << "summation of elements between i and j for n^2 series" << endl;
	cout << ((j*(j + 1)*(2 * j + 1)) / 6) - (i*(i + 1)*(2 * i + 1));
	cout << endl;
}