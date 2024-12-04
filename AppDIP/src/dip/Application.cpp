#include "Application.h"

Application::Application(Database *database)
{
    this->database = database;
}
void Application::start()
{
	database->connect();
}
Application::~Application()
{
	delete database;
}
