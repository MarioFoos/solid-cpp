#ifndef DIP_APPLICATION_H_
#define DIP_APPLICATION_H_

#include "MySQLDatabase.h"

class Application
{
	private:
		Database *database;
	public:
		Application(Database *database);
		~Application();

		void start();
};

#endif /* DIP_APPLICATION_H_ */
