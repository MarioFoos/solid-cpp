#ifndef SRP_REPORTSAVER_H_
#define SRP_REPORTSAVER_H_

class ReportSaver
{
	public:
		ReportSaver(){};
		virtual ~ReportSaver(){};
		void saveToFile();
};

#endif /* SRP_REPORTSAVER_H_ */
