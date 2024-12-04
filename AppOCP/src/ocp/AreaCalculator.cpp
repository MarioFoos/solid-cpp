#include "AreaCalculator.h"

double AreaCalculator::calculateTotalArea(Shape* shapes[], int size)
{
	double totalArea = 0;

	for(int i = 0; i < size; ++i)
	{
		totalArea += shapes[i]->calculateArea();
	}
	return totalArea;
}
