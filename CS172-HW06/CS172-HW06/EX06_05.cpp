#include"EX06_05.h"
#include<cmath>
#include<sstream>

Complex::Complex()
{
	a = 0;
	b = 0;
}

Complex::Complex(double nA, double nB)
{
	a = nA;
	b = nB;
}

Complex::Complex(double nA)
{
	a = nA;
	b = 0;
}

double Complex::getRealPart()
{
	return a;
}

double Complex::getImaginaryPart()
{
	return b;
}

const Complex& Complex::add(Complex& complex)
{
	double resultReal;
	double resultImaginary;
	resultReal = a + complex.getRealPart();
	resultImaginary = b + complex.getImaginaryPart();
	Complex result(resultReal, resultImaginary);
	
	return result;
}

const Complex& Complex::subtract(Complex& complex)
{
	double resultReal;
	double resultImaginary;
	resultReal = a - complex.getRealPart();
	resultImaginary = b - complex.getImaginaryPart();
	Complex result(resultReal, resultImaginary);
	
	return result;
}

const Complex& Complex::multiply(Complex& complex)
{
	double resultReal;
	double resultImaginary;
	resultReal = a * complex.getRealPart() - b * complex.getImaginaryPart();
	resultImaginary = b * complex.getRealPart() + a * complex.getImaginaryPart();
	Complex result(resultReal, resultImaginary);
	
	return result;
}

const Complex& Complex::divide(Complex& complex)
{
	double resultReal;
	double resultImaginary;
	resultReal = (a * complex.getRealPart() + b * complex.getImaginaryPart()) / (complex.getRealPart() * complex.getRealPart() + complex.getImaginaryPart() * complex.getImaginaryPart());
	resultImaginary = (b * complex.getRealPart() - a * complex.getImaginaryPart()) / (complex.getRealPart() * complex.getRealPart() + complex.getImaginaryPart() * complex.getImaginaryPart());
	Complex result(resultReal, resultImaginary);
	
	return result;
}

double Complex::abs()
{
	return sqrt(a * a + b * b);
}

string Complex::toString()
{
	ostringstream sA;
	sA << a;
	string strA = sA.str();
	ostringstream sB;
	sB << b;
	string strB = sB.str();
	if (b != 0)
	{
		string complexStr = strA + " + " + strB + "i";
		return complexStr;
	}
	else
		return strA;
}

const Complex& Complex::operator+(Complex& complex)
{
	return add(complex);
}

const Complex& Complex::operator-(Complex& complex)
{
	return subtract(complex);
}

const Complex& Complex::operator*(Complex& complex)
{
	return multiply(complex);
}

const Complex& Complex::operator/(Complex& complex)
{
	return divide(complex);
}

