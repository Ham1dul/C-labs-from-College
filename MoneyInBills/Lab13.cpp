//Hamidul Islam
//10/27/15
//money in bills
#include<iostream>
using namespace std;
int amount, hundreds, fifties, twenties, tens, fives, ones;

void change(int &amount, int &hundreds, int &fifties, int &twenties, int &tens, int &fives, int &ones)
{
	if (amount / 100 != 0)
	{
		hundreds = amount / 100;
		amount = amount % 100;
	}
	else
		hundreds=0;
	if (amount / 50 != 0)
	{
		fifties = amount / 50;
		amount = amount % 50;
	}
	else
		fifties=0;
	if (amount / 20 != 0)
	{
		twenties = amount / 20;
		amount = amount % 20;
	}
	else
		twenties=0;
	if (amount / 10 != 0)
	{
		tens = amount / 10;
		amount = amount % 10;
	}
	else
		tens=0;
	if (amount / 5 != 0)
	{
		fives = amount / 5;
		amount = amount % 5;
	}
	else
		fives=0;
	if (amount / 1 != 0)
	{
		ones = amount / 1;
		amount = amount % 1;
	}
	else
		ones=0;
}

int main()
{
	cout << "please enter amount" << endl;
	cin >> amount;
	change(amount, hundreds, fifties, twenties, tens, fives, ones);
	cout << "hunderds = " << hundreds << endl << "fiftes = " << fifties << endl << "twenties = " << twenties << endl << "tens = " << tens << endl << "fives = " << fives << endl << "ones = " << ones << endl;
	return 0;
}

