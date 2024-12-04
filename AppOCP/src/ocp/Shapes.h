#ifndef LSP_SHAPES_H_
#define LSP_SHAPES_H_

// Usar una clase abstracta para extender funcionalidades
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
class Circle : public Shape
{
	private:
		double radius;
	public:
		Circle(double radius);
		virtual ~Circle(){};

		double calculateArea();
};

#endif /* LSP_SHAPES_H_ */
