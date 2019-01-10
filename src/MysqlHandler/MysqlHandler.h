#ifndef MYSQLHANDLER_H
#define MYSQHANDLER_H

class MysqlHandler
{
	private:
		MYSQL *connection;			

	public:
		connect(char *Server, char *user, char *pass, char *db_name);
		close();
		executeSQL(char* sql);			
};
		


#endif
