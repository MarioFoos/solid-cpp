#include "ocp/AreaCalculator.h"
#include <iostream>

using namespace std;

int main()
{
	Shape* shapes[] = { new Circle(5), new Rectangle(4, 6) };
	AreaCalculator calculator = AreaCalculator();

	cout << "Área total: " << calculator.calculateTotalArea(shapes, 2) << endl;

	for(int i = 0; i < 2; ++i)
	{
		delete shapes[i];
	}
	return 0;
}
