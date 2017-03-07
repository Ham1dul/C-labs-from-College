#include "figure.h"
#include <iostream>
using namespace std;

figure::figure()
{
}
void figure::erase() //functions defined
{
	cout << "this is the function figure::erase" << endl;

}
void figure::draw()
{
	cout << "this is the function figure::draw" << endl;

}

void figure::center()
{
	cout << "the member function center is called to erase and draw" << endl;
	draw();
	erase();

}

figure::~figure()
{
}
