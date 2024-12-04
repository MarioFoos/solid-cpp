#include "Shapes.h"
#include <math.h>

Rectangle::Rectangle (double width, double height)
{
	this->width = width;
	this->height = height;
}
Rectangle::Rectangle() : Rectangle(0, 0)
{
}
double Rectangle::calculateArea()
{
	return width*height;
}
Circle::Circle(double radius)
{
	this->radius = radius;
}
double Circle::calculateArea()
{
	return M_PI * radius * radius;
}
