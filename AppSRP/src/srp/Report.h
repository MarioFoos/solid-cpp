#ifndef SRP_REPORT_H_
#define SRP_REPORT_H_

// Clase que viola el SRP: mezcla lógica de reportes y almacenamiento
class Report
{
	public:
		Report(){};
		virtual ~Report(){};

		void generateReport();
		void saveToFile();
};

#endif /* SRP_REPORT_H_ */
