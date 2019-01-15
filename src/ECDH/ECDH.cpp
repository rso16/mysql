#include "ECDH.h"

char* ECDH::getMAC(char *serverRequest)
{
	nodeList *serverReq = (nodeList*) malloc(sizeof(nodeList));
	char *macAddr = (char*) malloc(sizeof(char) * MAC_SIZE);
	addStrToList(serverReq, serverRequest);
	printStrList(serverReq);	
	int err = listToStr(serverReq, macAddr, BEGIN_OF_MAC, MAC_SIZE);
	printf("err = %d\n", err);
	printf("macAddr = %s\n", macAddr);
	return macAddr;	
}

char* ECDH::getClassRoomId(char *MAC)
{


	return 0;	
}
		
