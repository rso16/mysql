//made by RSO16

//includes
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>
#include "MysqlHandler/MysqlHandler.h"
//macros
//macro for canging the cursor
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y)) 

//vt commands
char cmd1[5] = {0x1B, '[', '2', 'J', '\0'}; // Clear screen
char cmd2[4] = {0x1B, '[', 'f', '\0'}; // Cursor home

//global vars
MysqlHandler mysql;

int main(int argc, char **argv)
{
	mysql.connect(SERVER,USER,PASSWORD,DATABASE);
	MYSQL_RES res = mysql.executeSQL("show Table");
	mysql.printMysqlRes(&res);
	mysql.close();				
}

