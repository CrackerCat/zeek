#include "ICMP.h"

using namespace plugin::Demo_Foo;

uint32_t ICMP::getIdentifier(Packet* packet)
	{
	// No following protocol
	return -1;
	}

void ICMP::analyze(Packet* packet)
	{
	// Do nothing for now
	DBG_LOG(DBG_LLPOC, "Found ICMP layer!");
	}
