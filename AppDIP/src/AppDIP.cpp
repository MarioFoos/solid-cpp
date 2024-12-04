#include <iostream>
#include "dip/Database.h"
#include "dip/MySQLDatabase.h"
#include "dip/Application.h"

using namespace std;

int main()
{
	Database *database = new MySQLDatabase();
	Application app = Application(database);

	app.start();

	delete database;
	return 0;
}
