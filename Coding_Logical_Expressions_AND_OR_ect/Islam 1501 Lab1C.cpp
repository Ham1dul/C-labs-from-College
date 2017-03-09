//programmed by Hamidul Islam
//lab1C truth tables 1/23/16
#include <iostream>
#include <iomanip>
using namespace std;
void table1();
void solution1(int p, int q);
void table2();
void solution2(int p, int q, int r);
void table3();
void solution3(int p, int q);
void table4();
void solution4(int p, int q, int r, int s);
void table5();
void solution5(int p);
int implication(int value1, int value2);
int biconditional(int value1, int value2);
int negation(int value);
int or(int value1, int value2);
int and(int value1, int value2);



int main()
{
	cout << "Problem 1: Tautology" << endl;
	table1();
	solution1(1, 1);
	solution1(1, 0);
	solution1(0, 1);
	solution1(0, 0);

	cout << endl << "Problem 2: Contingency" << endl;
	table2();
	solution2(1, 1, 1);
	solution2(1, 1, 0);
	solution2(1, 0, 1);
	solution2(1, 0, 0);
	solution2(0, 1, 1);
	solution2(0, 1, 0);
	solution2(0, 0, 1);
	solution2(0, 0, 0);

	cout << endl << "Problem 3: Contingency" << endl;
	table3();
	solution3(1, 1);
	solution3(1, 0);
	solution3(0, 1);
	solution3(0, 0);

	cout << endl << "Problem 4: Contingency" << endl;
	table4();
	solution4(0, 0, 0, 0);
	solution4(0, 0, 0, 1);
	solution4(0, 0, 1, 0);
	solution4(0, 0, 1, 1);
	solution4(0, 1, 0, 0);
	solution4(0, 1, 0, 1);
	solution4(0, 1, 1, 0);
	solution4(0, 1, 1, 1);
	solution4(1, 0, 0, 0);
	solution4(1, 0, 0, 1);
	solution4(1, 0, 1, 0);
	solution4(1, 0, 1, 1);
	solution4(1, 1, 0, 0);
	solution4(1, 1, 0, 1);
	solution4(1, 1, 1, 0);
	solution4(1, 1, 1, 1);

	cout << endl << "Problem 5: Contradiction" << endl;
	table5();
	solution5(1);
	solution5(0);

	return 0;
}

void table1()
{
	cout << "p" << setw(4) << "q" << setw(7) << "p->q";
	cout << setw(8) << "neg p" << setw(8) << "neg q";
	cout << setw(18) << "neg q->neg p";
	cout << setw(26) << "(p->q)<->(neg q->neg p)";
	cout << endl;

}

void solution1(int p, int q)
{
	cout << p << setw(4) << q << setw(6) << implication(p, q);
	cout << setw(7) << negation(p);
	cout << setw(8) << negation(q);
	cout << setw(15) << implication(negation(q), negation(p));
	cout << setw(20) << biconditional(implication(p, q), implication(negation(q), negation(p)));
	cout << endl;
}

void table2()
{
	cout << "p" << setw(4) << "q" << setw(4) << "r";
	cout << setw(8) << "p<->q";
	cout << setw(14) << "(p<->q)<->r";
	cout << endl;
}
void solution2(int p, int q, int r)
{
	cout << p << setw(4) << q << setw(4) << r;
	cout << setw(6) << biconditional(p, q);
	cout << setw(13) << biconditional(biconditional(p, q), r);
	cout << endl;
}

void table3()
{
	cout << "p" << setw(4) << "q";
	cout << setw(10) << "p or q";
	cout << setw(11) << "p and q";
	cout << setw(17) << "neg (p and q)";
	cout << setw(29) << "p or q and neg (p and q)";
	cout << endl;

}

void solution3(int p, int q)
{
	cout << p << setw(4) << q;
	cout << setw(8) << or(p, q);
	cout << setw(11) << and(p, q);
	cout << setw(14) << negation(and(p, q));
	cout << setw(23) << and(or(p, q), negation(and(p, q)));
	cout << endl;
}
void table4()
{
	cout << "p" << setw(4) << "q";
	cout << setw(4) << "r" << setw(4) << "s";
	cout << setw(7) << "p->q";
	cout << setw(12) << "(p->q)->r";
	cout << setw(18) << "((p->q)->r)->s";
	cout << endl;
}

void solution4(int p, int q, int r, int s)
{
	cout << p << setw(4) << q;
	cout << setw(4) << r << setw(4) << s;
	cout << setw(6) << implication(p, q);
	cout << setw(10) << implication(implication(p, q), r);
	cout << setw(14) << implication(implication(implication(p, q), r), s);
	cout << endl;
}

void table5()
{
	cout << "p";
	cout << setw(8) << "neg p";
	cout << setw(14) << "p and neg p";
	cout << endl;
}

void solution5(int p)
{
	cout << p;
	cout << setw(6) << negation(p);
	cout << setw(12) << and(p, negation(p));
	cout << endl;
}

int implication(int value1, int value2)
{
	if (value1 == 1 && value2 == 0)
		return 0;
	else
		return 1;

}
int biconditional(int value1, int value2)
{
	if (value1 == value2)
		return 1;
	else
		return 0;

}
int negation(int value)
{
	if (value == 0)
		return 1;
	else
		return 0;

}
int or(int value1,int value2)
{
	if (value1 == 0 && value2 == 0)
		return 0;
	else
		return 1;
}
int and(int value1, int value2)
{
	if (value1 == 1 && value2 == 1)
		return 1;
	else
		return 0;
}