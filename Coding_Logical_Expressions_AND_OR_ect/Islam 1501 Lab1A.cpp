//programmed by Hamidul Islam
//Lab1a
//1/19/16
#include <iomanip>
#include <iostream>
using namespace std;
void operation(bool q, bool p, int choice)
{
	if (choice == 1) //negation
	{
		if (q == 0 ) //print oppisites
		{
			cout << "negation of q = T" << endl;
		}
		else 
		{
			cout << "negation of q = F" << endl;
		}
		if (p == 0)
		{
			cout << "negation of p = T" << endl;
		}
		else
		{
			cout << "negation of p = F" << endl;
		}
	}
	if (choice == 2) //conjugation
	{
		if (q == 1 && p == 1) //only true of both p and q are true, else false
			cout << "the conjugation of p and q = T" << endl;
		else
			cout << "the conjugation of p and q = F" << endl;

	}
	if (choice == 3)
	{
		if (q == 0 && p == 0) //only false of both p and q are false
			cout << "the disjunction of p and q = F" << endl;
		else
			cout << "the disjunction of p and q = T" << endl;

	}
	if (choice == 4)
	{
		if (q == 0 && p == 0) //false if both p and q equal each other, else true
			cout << "the exclusive or of p and q = F" << endl;
		else if (q == 1 && p == 1 )
			cout << "the exclusive or of p and q = F" << endl;
		else 
			cout << "the exclusive or of p and q = T" << endl;
	}
	if (choice == 4)
	{
		if (p == 1 && q == 0) //only false of p is true and q is false, else true
			cout << "p implication of q = F" << endl;
		else
			cout << "p implication of q = T" << endl;
	}
	if (choice == 5)
	{
		if (q == 0 && p == 0) //only true if both p and q equal the same truth value, else false
			cout << "the biconditional of p and q = T" << endl;
		else if (q == 1 && p == 1)
			cout << "the biconditional of p and q = T" << endl;
		else
			cout << "the biconditional of p and q = F" << endl;
	}
}
int main()
{
	bool q, p;
	int choice;
	cout << "enter the truth value for q, 1 for true, 0 for false" << endl;//take the truth value of p and q
	cin >> q;
	cout << "enter the truth value for p, 1 for true, 0 for false" << endl;
	cin >> p;
	cout << "pick a logical operator" << endl; //prompt user to select operation
	cout << "1 = negation" << endl;
	cout << "2 = conjunction" << endl;
	cout << "3 = disjunction" << endl;
	cout << "4 = exclusive or" << endl;
	cout << "5 = implication" << endl;
	cout << "6 = biconditional" << endl;
	cin >> choice;
	operation(q, p, choice); //go to function
	return 0;
}