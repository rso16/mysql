#include "ECDH.h"
//made by R. S. Overhorst

char* ECDH::getMAC(char *serverRequest)
{
	nodeList *serverReq = (nodeList*) malloc(sizeof(nodeList));
	char *macAddr = (char*) malloc(sizeof(char) * MAC_SIZE);
	addStrToList(serverReq, serverRequest);
	int err = listToStr(serverReq, macAddr, BEGIN_OF_MAC, MAC_SIZE);
	return macAddr;	
}

char* ECDH::getClassRoomId(char *MAC)
{


	return 0;	
}
		
