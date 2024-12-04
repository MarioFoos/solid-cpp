#ifndef ISP_PRINTERNOISP_H_
#define ISP_PRINTERNOISP_H_

#include "MachineNoISP.h"

class PrinterNoISP : public MachineNoISP
{
	public:
		PrinterNoISP(){}
		virtual ~PrinterNoISP(){}

		void print();
		void scan();
		void fax();
};

#endif
