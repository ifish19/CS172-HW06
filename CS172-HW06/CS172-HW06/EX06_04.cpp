////////////////////////////////////////////////////////////////////////
// Ian Fish
// CS172-HW06
////////////////////////////////////////////////

#include "EX06_04.h"

int Circle::numberOfObjects = 0;

// Construct a circle object
Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

// Construct a circle object
Circle::Circle(double newRadius)
{
	radius = newRadius;
	numberOfObjects++;
}

// Return the area of this circle
double Circle::getArea() const
{
	return radius * radius * 3.14159;
}

// Return the radius of this circle
double Circle::getRadius() const
{
	return radius
}

// Set a new radius
void Circle::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;
}

// Return the number of circle objects
int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}

const Circle& Circle::operator>(const Circle& circle)
{
	if (radius > circle.getRadius());
	return *this;
}

const Circle& Circle::operator>=(const Circle& circle)
{
	if (radius >= circle.getRadius());
	return *this;
}

const Circle& Circle::operator==(const Circle& circle)
{
	if (radius == circle.getRadius());
	return *this;
}

const Circle& Circle::operator!=(const Circle& circle)
{
	if (radius != circle.getRadius());
	return *this;
}

const Circle& Circle::operator<=(const Circle& circle)
{
	if (radius <= circle.getRadius());
	return *this;
}

const Circle& Circle::operator<(const Circle& circle)
{
	if (radius < circle.getRadius());
	return *this;
}