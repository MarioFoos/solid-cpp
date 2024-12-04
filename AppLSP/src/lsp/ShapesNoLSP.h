#ifndef LSP_SHAPESNOLSP_H_
#define LSP_SHAPESNOLSP_H_

class RectangleNoLSP
{
	private:
		double width, height;
	public:
		RectangleNoLSP();
		virtual ~RectangleNoLSP(){};

		void setWidth(double width);
		void setHeight(double height);
		double getArea();

};
class SquareNoLSP : public RectangleNoLSP
{
	public:
		SquareNoLSP();
		virtual ~SquareNoLSP(){};

		void setWidth(double width);
		void setHeight(double height);
};

#endif /* LSP_SHAPESNOLSP_H_ */
