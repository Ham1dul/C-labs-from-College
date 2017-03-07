#include <iostream>
#include "figure.h"
#include "Rectangle.h"
#include "Triangle.h"
using std::cout;
//***EXPLANATION***
//The difference is results is that if the base functions
//are virtual then inside the center function when erase and
//draw are called they overide the earse and draw function
// from the base class, and instead call the erase and draw
//function of the derived classes

int main()
{
	Triangle tri;
	tri.draw();
	cout << "\nDerived class Triangle object calling center().\n";
	tri.center(); //calls draw and earse
	Rectangle rect;
	rect.draw();
	cout << "\nDerived class Rectangle object calling center().\n";
	rect.center(); //calls draw and erase
	return 0;

}