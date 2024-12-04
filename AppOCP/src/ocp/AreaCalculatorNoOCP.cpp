#include "AreaCalculatorNoOCP.h"
#include <math.h>

double AreaCalculatorNoOCP::calculateCircleArea(double radius)
{
	return M_PI*radius*radius;
}
double AreaCalculatorNoOCP::calculateRectangleArea(double width, double height)
{
	return width * height;
}
