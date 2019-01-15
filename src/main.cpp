//made by RSO16

//includes
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>
#include "MysqlHandler/MysqlHandler.h"
#include "ECDH/ECDH.h"

//macros
//macro for canging the cursor
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y)) 

//vt commands
char cmd1[5] = {0x1B, '[', '2', 'J', '\0'}; // Clear screen
char cmd2[4] = {0x1B, '[', 'f', '\0'}; // Cursor home

//global vars
MysqlHandler mHandler;
ECDH eHandler;

/*examples
DC:4F:22:46:57:C3;167
*/

int main(int argc, char **argv)
{
	printf("mac = %s\n", eHandler.getMAC("DC:4F:22:46:57:C3;167"));	
	
	mHandler.connect(SERVER,USER,PASSWORD,DATABASE);
	MYSQL_RES res = mHandler.executeSQL("select * from test_table");
	mHandler.printMysqlRes(&res);
	mHandler.close();				
}

