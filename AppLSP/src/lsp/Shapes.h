#ifndef LSP_SHAPES_H_
#define LSP_SHAPES_H_

class Shape
{
	public:
		Shape(){};
		virtual ~Shape(){};

		virtual double calculateArea() = 0;
};
class Rectangle : public Shape
{
	private:
		double width, height;
	public:
		Rectangle();
		Rectangle(double width, double height);
		virtual ~Rectangle(){};

		double calculateArea();
};
class Square : public Shape
{
	private:
		double side;
	public:
		Square();
		Square(double side);
		virtual ~Square(){};

		double calculateArea();
};

#endif /* LSP_SHAPES_H_ */
