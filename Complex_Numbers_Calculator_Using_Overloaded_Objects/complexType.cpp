//Implementation file complexType.cpp

#include <iostream>
#include "complexType.h" 

using namespace std;

ostream& operator<< (ostream& os, const complexType& complex)
{
	os << "(" << complex.realPart << ", "
		<< complex.imaginaryPart << ")";
	return os;
}

istream& operator>> (istream& is, complexType& complex)
{
	char ch;

	is >> ch;                     //read and discard (
	is >> complex.realPart;       //get the real part
	is >> ch;                     //read and discard,
	is >> complex.imaginaryPart;  //get the imaginary part
	is >> ch;                     //read and discard)

	return is;
}

bool complexType::operator==(const complexType& otherComplex) const
{
	return(realPart == otherComplex.realPart &&
		imaginaryPart == otherComplex.imaginaryPart);
}

//constructor
complexType::complexType(double real, double imag)
{
	realPart = real;
	imaginaryPart = imag;
}

void complexType::setComplex(const double& real, const double& imag)
{
	realPart = real;
	imaginaryPart = imag;
}

void complexType::getComplex(double& real, double& imag) const
{
	real = realPart;
	imag = imaginaryPart;
}

//overload the operator +
complexType complexType::operator+(const complexType& otherComplex) const
{
	complexType temp;

	temp.realPart = realPart + otherComplex.realPart;
	temp.imaginaryPart = imaginaryPart + otherComplex.imaginaryPart;

	return temp;
}

//overload the operator *
complexType complexType::operator*(const complexType& otherComplex) const
{
	complexType temp;

	temp.realPart = (realPart * otherComplex.realPart) -
		(imaginaryPart*otherComplex.imaginaryPart);
	temp.imaginaryPart = (realPart * otherComplex.imaginaryPart) +
		(imaginaryPart * otherComplex.realPart);
	return temp;
}

//overload the operator -
complexType complexType::operator-(const complexType& otherComplex) const
{
	complexType temp; //overload -
	temp.realPart = realPart - otherComplex.realPart;
	temp.imaginaryPart = imaginaryPart - otherComplex.imaginaryPart;
	return temp;
}

//overload the operator /
complexType complexType::operator/(const complexType& otherComplex) const
{
	complexType temp; //overload division
	temp.realPart = (realPart / otherComplex.realPart) -
		(imaginaryPart/otherComplex.imaginaryPart);
	temp.imaginaryPart = (realPart / otherComplex.imaginaryPart) +
		(imaginaryPart / otherComplex.realPart);
	return temp;
}