#pragma once
#include "figure.h"
class Rectangle : public figure
{
public:
	Rectangle();
	void erase(); //inherited functions
	void draw();
	~Rectangle();
};

