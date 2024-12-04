#include "Shapes.h"

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
Square::Square(double side)
{
	this->side = side;
}
Square::Square() : Square(0)
{
}
double Square::calculateArea()
{
	return side*side;
}
