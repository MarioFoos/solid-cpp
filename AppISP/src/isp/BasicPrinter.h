#ifndef ISP_BASICPRINTER_H_
#define ISP_BASICPRINTER_H_

#include "Machine.h"

class BasicPrinter : public Printer
{
	public:
		BasicPrinter(){}
		virtual ~BasicPrinter(){}

		void print();
};

#endif /* ISP_BASICPRINTER_H_ */
