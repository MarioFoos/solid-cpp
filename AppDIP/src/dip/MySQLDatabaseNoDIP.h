#ifndef DIP_MYSQLDATABASENODIP_H_
#define DIP_MYSQLDATABASENODIP_H_

// Esta clase en sí no viola el principio DIP, sino que en el ejemplo de violación se usa
// directamente desde la aplicación, sin abstraerla
class MySQLDatabaseNoDIP
{
	public:
		void connect();
};

#endif
