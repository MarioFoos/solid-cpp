#include "ApplicationNoDIP.h"

ApplicationNoDIP::ApplicationNoDIP()
{
    database = new MySQLDatabaseNoDIP();
}
void ApplicationNoDIP::start()
{
	database->connect();
}
ApplicationNoDIP::~ApplicationNoDIP()
{
	delete database;
}
