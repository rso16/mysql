#ifndef MYSQLHANDLER_H
#define MYSQHANDLER_H

//includes
#include <iostream>
#include <cstdio>
#include <cstdlib>

// For MySQL Connection
#include <mysql/mysql.h>

// Defining Constants 
#define SERVER "localhost"
#define USER "Epaper"
#define PASSWORD "Display"
#define DATABASE "windesheim"

MYSQL *connection;			
int connect(char *Server, char *user, char *pass, char *db_name);
MYSQL_RES executeSQL(char* sql);
int close();
}; 

#endif	