#ifndef DIP_APPLICATIONNODIP_H_
#define DIP_APPLICATIONNODIP_H_

#include "MySQLDatabaseNoDIP.h"

class ApplicationNoDIP
{
	private:
		MySQLDatabaseNoDIP *database;

	public:
		ApplicationNoDIP();
		virtual ~ApplicationNoDIP();

		void start();

};

#endif /* DIP_APPLICATIONNODIP_H_ */
