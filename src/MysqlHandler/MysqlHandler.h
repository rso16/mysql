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
#define DATABASE "Test"

class MysqlHandler
{
	private:
		MYSQL *connection;			

	public:
		int connect(char *server, char *user, char *pass, char *db_name);
		MYSQL_RES executeSQL(char* sql);
		int printMysqlRes(MYSQL_RES res_set);
		int close();
}; 

#endif	
