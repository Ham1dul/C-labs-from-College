#pragma once
#include "figure.h"
class Triangle : public figure
{
public:
	Triangle();
	void erase(); //inherited functions
	void draw();
	~Triangle();
};

