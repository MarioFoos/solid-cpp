#include "ShapesNoLSP.h"

RectangleNoLSP::RectangleNoLSP ()
{
	width = 0;
	height = 0;
}
void RectangleNoLSP::setWidth(double width)
{
	this->width = width;
}
void RectangleNoLSP::setHeight(double height)
{
	this->height = height;
}
double RectangleNoLSP::getArea()
{
	return width*height;
}
SquareNoLSP::SquareNoLSP() : RectangleNoLSP()
{
}
void SquareNoLSP::setWidth(double width)
{
	RectangleNoLSP::setWidth(width);
	RectangleNoLSP::setHeight(width); // Mantener proporción cuadrada
}
void SquareNoLSP::setHeight(double height)
{
	RectangleNoLSP::setHeight(height);
	RectangleNoLSP::setWidth(height); // Mantener proporción cuadrada
}
