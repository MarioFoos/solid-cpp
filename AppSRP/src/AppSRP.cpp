#include <iostream>
#include "srp/ReportSaver.h"
#include "srp/ReportGenerator.h"

using namespace std;

int main()
{
    ReportGenerator generator = ReportGenerator();
    ReportSaver saver = ReportSaver();

    generator.generateReport();
    saver.saveToFile();

	return 0;
}
