#ifndef OCP_AREACALCULATOR_H_
#define OCP_AREACALCULATOR_H_

#include "Shapes.h"

class AreaCalculator
{
	public:
		AreaCalculator(){};
		virtual ~AreaCalculator(){};

		double calculateTotalArea(Shape* shapes[], int size);
};

#endif /* OCP_AREACALCULATOR_H_ */
