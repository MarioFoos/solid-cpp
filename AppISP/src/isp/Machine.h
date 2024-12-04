#ifndef ISP_MACHINE_H_
#define ISP_MACHINE_H_

class Fax
{
	public:
		Fax(){}
		virtual ~Fax(){}

		virtual void fax() = 0;
};
class Scanner
{
	public:
		Scanner(){}
		virtual ~Scanner(){}

		virtual void scan() = 0;
};
class Printer
{
	public:
		Printer(){}
		virtual ~Printer(){}

		virtual void print() = 0;
};

#endif /* ISP_MACHINE_H_ */
