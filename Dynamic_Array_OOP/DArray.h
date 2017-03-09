#pragma once
class DArray
{
public:
	DArray(int x);
	DArray(const DArray &other);
	void print();
	int maxSize;
	int length; 
	int *p;
	~DArray();
};

