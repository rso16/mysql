// Include Header Files
#include "MysqlHandler.h"


int MysqlHandler::connect(char *server, char *user, char *pass, char *db_name)
{
	connection = mysql_init(NULL);

	if (!connection)
	{
	printf("Mysql Initialization Failed");
	return 1;
	}

	connection = mysql_real_connect(connection, server, user, pass, db_name, 0,NULL,0);

	if (connection)
	{
		printf("Connection Succeeded\n");
		return 1;
	}
	else
	{
		printf("Connection Failed\n");
		return -1;
	}
}

MYSQL_RES MysqlHandler::executeSQL(char* sql)
{
	MYSQL_RES *res_set;

	// Replace MySQL query with your query

	mysql_query (connection,"select * from test_table");

	res_set=mysql_store_result(connection);

	return *res_set;
}

int MysqlHandler::printMysqlRes(MYSQL_RES *res_set)
{
	unsigned int numrows = mysql_num_rows(res_set);
	unsigned int i=0;
	MYSQL_ROW row;

	while (((row=mysql_fetch_row(res_set)) !=NULL))
	{
		printf("id = %s, name = %s\n", row[i], row[i+1]);	
	}
	return 1;
}

int MysqlHandler::close()
{
	mysql_close(connection);
	return 1;
}
