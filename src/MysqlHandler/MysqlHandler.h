#ifndef MYSQLHANDLER_H
#define MYSQHANDLER_H

//includes
#include <iostream>
#include <cstdio>
#include <cstdlib>

// For MySQL Connection
#include <mysql.h> 

// Defining Constants
#define PI_BOX 0
#define U_BOX 1
#define BOX U_BOX

#if BOX == PI_BOX 
	#define SERVER "localhost"
	#define USER "Epaper"
	#define PASSWORD "Display"
	#define DATABASE "Test"
#elif BOX == U_BOX
	#define SERVER "localhost"
	#define USER "root"
	#define PASSWORD ""
	#define DATABASE "test_db"
#endif


class MysqlHandler
{
	private:
		MYSQL *connection;			

	public:
		int connect(char *server, char *user, char *pass, char *db_name);
		MYSQL_RES executeSQL(char* sql);
		int printMysqlRes(MYSQL_RES *res_set);
		int close();
}; 

#endif	
