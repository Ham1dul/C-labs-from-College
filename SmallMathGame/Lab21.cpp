//Hamidul Islam
//Project 1a
//11/13/15, CAI
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int RandomNum() //generate random num
{
	srand(time(NULL)); // new seed
	int n3 = rand() % 4; // 4 random num 0-3
	return n3;
}
void calc(double right, double wrong) //calc percent
{
	cout << endl << (right / 10.0) * 100 << "% Correct" << endl;
	if ((right / 10.0) * 100 < 75) // see if the percent correct is less then 75
		cout << "Please ask your teacher for extra help." << endl;
	else if ((right / 10.0) * 100 > 75) // see if the percent correct is more then 75
		cout << "Congratulations, you are ready to go to the next level!" << endl;

}
int question(int difficulty, int operation) //ask question
{
	double n1;
	double n2;
	srand(time(NULL)); //randomize seed
	if (difficulty == 1) //difficulty
	{
		n1 = rand() % 10; // 0-9
		n2 = rand() % 10;
	}
	else if (difficulty == 2)
	{
		n1 = rand() % 100; // 0-99
		n2 = rand() % 100;
	}
	else if (difficulty == 3)
	{
		n1 = rand() % 1000; // 0-999
		n2 = rand() % 1000;
	}
	else if (difficulty == 4)
	{
		n1 = rand() % 10000; // 0-9999
		n2 = rand() % 10000;
	}
	else if (difficulty == 5)
	{
		n1 = rand() % 100000; // 0-99999
		n2 = rand() % 100000;
	}
	if (operation == 3) // multiplication
	{
		cout << "what is " << n1 << " * " << n2 << " ? " << endl;
		return n1*n2; //retrun the product
	}
	else if (operation == 1) //addition
	{
		cout << "what is " << n1 << " + " << n2 << " ? " << endl;
		return n1 + n2; //return sum
	}
	else if (operation == 2) //subtraction
	{
		cout << "what is " << n1 << " - " << n2 << " ? " << endl;
		return n1 - n2; //return difference
	}
	else if (operation == 4) //divison
	{
		cout << "what is " << n1 << " / " << n2 << " ? " << endl;
		return n1 / n2; //return division
	}
	else if (operation == 5) //all the other functions in one randomized
	{
		if (RandomNum() == 0)
		{
			cout << "what is " << n1 << " * " << n2 << " ? " << endl;
			return n1*n2;
		}
		else if (RandomNum() == 1)
		{
			cout << "what is " << n1 << " + " << n2 << " ? " << endl;
			return n1 + n2;
		}
		else if (RandomNum() == 2)
		{
			cout << "what is " << n1 << " - " << n2 << " ? " << endl;
			return n1 - n2;
		}
		else if (RandomNum() == 3)
		{
			cout << "what is " << n1 << " / " << n2 << " ? " << endl;
			return n1 / n2;
		}
	}
}
void Incorrect(int &answer, int &userAnswer, double &wrong, double &right)
{
	while (answer != userAnswer) //loop as long as the user anser dosnt equal the correct answer
	{
		if (RandomNum() == 0) //statements randomized from 0-3
			cout << "No. PLease try again." << endl;
		else if (RandomNum() == 1)
			cout << "Wrong.Try once more." << endl;
		else if (RandomNum() == 2)
			cout << "Don't give up!." << endl;
		else
			cout << "No. Keep trying." << endl;
		cin >> userAnswer; //get input
		wrong++; //count wrong answers
		if (right + wrong == 10) //if 10 wrong break loop
		{
			break;
		}
	}
}
void Correct()
{
	double right = 0;
	double wrong = 0;
	int difficulty, operation;
	char done = 'y'; //arbitary character
	cout << "please select a difficulty level, 1 being 1 digit numbers, 2 being 2 digit numbers and so on. 1-5" << endl;
	cin >> difficulty;
	cout << "please select a type of operation" << endl;
	cout << "1=addition, 2=subtraction, 3=multiplication, 4=division, 5=random operation" << endl;
	cin >> operation;
	while (done == 'y') // looping 
	{
		int answer = question(difficulty, operation); //store correct answer
		int userAnswer;
		cin >> userAnswer;

		Incorrect(answer, userAnswer, wrong, right); //call incorrect function

		if (right + wrong == 10) // checks if 10 tries happened
		{
			calc(right, wrong); //calculate percent right
			break; //breaks loop
		}
		else if (RandomNum() == 0) //randomized statements
			cout << "Very good!" << endl;
		else if (RandomNum() == 1)
			cout << "Excellent!" << endl;
		else if (RandomNum() == 2)
			cout << "Nice Work!" << endl;
		else
			cout << "Keep up the good work!" << endl;
		right++; // cout amount times student got right
		if (right + wrong == 10) //sees if 10 tries happened
		{
			calc(right, wrong); //calcualte percent right 
			break; //break loop
		}
	}


}
int main()
{

	char done = 'y';
	while (done == 'y') //gives option to restart
	{
		Correct();
		cout << "press y to restart program or x to end program." << endl;
		cin >> done;
	}
	return 0;
}