#include <iostream>
#include "isp/PrinterNoISP.h"
#include "isp/BasicPrinter.h"

using namespace std;

int main()
{
	BasicPrinter printer = BasicPrinter();

	printer.print();

	return 0;
}
