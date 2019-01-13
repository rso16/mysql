// Include Header Files
#include "mysqlHandler.h"


int connect(char *Server, char *user, char *pass, char *db_name)
{
	connection = mysql_init(NULL);

	if (!connection)
	{
	cout << "Mysql Initialization Failed";
	return 1;
	}

	connection = mysql_real_connect(connection, SERVER, USER, PASSWORD, DATABASE, 0,NULL,0);

	if (connection)
	{
	cout << "Connection Succeeded\n";
	}
	else
	{
	cout << "Connection Failed\n";
	}
	return 0;
}

MYSQL_RES executeSQL(char* sql)
{
	MYSQL_RES *res_set;
	MYSQL_ROW row;

	// Replace MySQL query with your query

	mysql_query (connection,"show tables");

	unsigned int i=0;

	res_set=mysql_store_result(connection);

	unsigned int numrows = mysql_num_rows(res_set);

	cout << " Tables in " << DATABASE << " database " << endl;

	while (((row=mysql_fetch_row(res_set)) !=NULL))
	{
	cout << row[i] << endl;
	}
	return *res_set;
}

int close()
{
	mysql_close(connection);
	return 1;
}
