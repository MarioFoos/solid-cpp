#ifndef DIP_MYSQLDATABASE_H_
#define DIP_MYSQLDATABASE_H_

#include "Database.h"

class MySQLDatabase : public Database
{
	public:
		MySQLDatabase(){};
		virtual ~MySQLDatabase(){};

		void connect();
};

#endif
