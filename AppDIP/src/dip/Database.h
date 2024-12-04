#ifndef DIP_DATABASE_H_
#define DIP_DATABASE_H_

class Database
{
	public:
		virtual void connect() = 0;
		virtual ~Database(){};
};

#endif
