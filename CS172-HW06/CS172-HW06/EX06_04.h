////////////////////////////////////////////////////////////////////////
// Ian Fish
// CS172-HW06
////////////////////////////////////////////////

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	Circle();
	Circle(double);
	double getArea() const;
	double getRadius() const;
	void setRadius(double);
	static int getNumberOfObjects();
	const Circle& operator>(const Circle& circle);
	const Circle& operator>=(const Circle& circle);
	const Circle& operator==(const Circle& circle);
	const Circle& operator!=(const Circle& circle);
	const Circle& operator<=(const Circle& circle);
	const Circle& operator<(const Circle& circle);

private:
	double radius;
	static int numberOfObjects;
};

#endif