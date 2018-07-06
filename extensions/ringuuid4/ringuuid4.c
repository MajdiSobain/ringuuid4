/* Copyright (c) 2018 Majdi Sobain <MajdiSobain@Gmail.com> */

#include "ring.h"
#include "uuid.h"


RING_FUNC(newuuid4) {
	char uuidBuf[37];
	uuid_get_uuid(&uuidBuf, 37);
	RING_API_RETSTRING(uuidBuf);
	return 0;
}


RING_API void ringlib_init ( RingState *pRingState )
{
	ring_vm_funcregister("newuuid4",newuuid4);
	
}



