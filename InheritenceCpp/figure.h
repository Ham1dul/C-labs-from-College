#pragma once
#ifndef PROTECT_figure_h

#define PROTECT_figure_h
class figure
{
public:
	figure();
	virtual void erase(); //base functions now turned virtual
	virtual void draw();
	virtual void center();
	~figure();
};

#endif