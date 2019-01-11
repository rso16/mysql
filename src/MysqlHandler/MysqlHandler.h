#ifndef MYSQLHANDLER_H
#define MYSQHANDLER_H

//includes
#include <iostream>
#include <cstdio>
#include <cstdlib>

// For MySQL Connection
#include <mysql.h>

// Defining Constants 
#define SERVER "localhost"
#define USER "Epaper"
#define PASSWORD "Display"
#define DATABASE "windesheim"

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
