#ifndef AREACALCULATORNOOCP_H_
#define AREACALCULATORNOOCP_H_

class AreaCalculatorNoOCP
{
	public:
		AreaCalculatorNoOCP(){};
		virtual ~AreaCalculatorNoOCP(){};

		double calculateCircleArea(double radius);
		double calculateRectangleArea(double width, double height);
};

#endif /* AREACALCULATORNOOCP_H_ */
