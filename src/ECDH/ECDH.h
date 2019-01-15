//made by R. S. Overhorst
//ECDH = E-Classroom Display Handler

#ifndef ECDH_H
#define ECDH_H

//includes
#include "../node/node.h"

//defines
#define BEGIN_OF_MAC 0
#define MAC_SIZE 20 

class ECDH
{
	private:

	public:
		char* getMAC(char *serverRequest);
		char* getClassRoomId(char *MAC);
		
};

#endif
