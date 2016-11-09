#ifndef COMPLEX_H
#define COMPLEX_H
#include<string>
using namespace std;

class Complex
{
public:
	Complex();
	Complex(double, double);
	Complex(double);
	double getRealPart();
	double getImaginaryPart();
	const Complex& add(Complex&);
	const Complex& subtract(Complex&);
	const Complex& multiply(Complex&);
	const Complex& divide(Complex&);
	double abs();
	string toString();
	const Complex& operator+(Complex&);
	const Complex& operator-(Complex&);
	const Complex& operator*(Complex&);
	const Complex& operator/(Complex&);
	const Complex& operator+=(Complex&);
	const Complex& operator-=(Complex&);
	const Complex& operator/=(Complex&);
	const Complex& operator[](Complex&);
	

private:
	double a;
	double b;
};

#endif