#ifndef DIP_POSTGRESQLDATABASE_H_
#define DIP_POSTGRESQLDATABASE_H_

#include "Database.h"

class PostgreSQLDatabase : public Database
{
	public:
		PostgreSQLDatabase(){};
		virtual ~PostgreSQLDatabase(){};

		void connect();
};

#endif
