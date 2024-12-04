#include "PrinterNoISP.h"
#include <iostream>

using namespace std;

void PrinterNoISP::print()
{
	cout << "Imprimiendo..." << endl;
}
void PrinterNoISP::scan()
{
    throw std::runtime_error("No soportado.");
}
void PrinterNoISP::fax()
{
	throw std::runtime_error("No soportado.");
}
