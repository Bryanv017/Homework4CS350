#pragma once
#include "Receiver.h"
#include <string>

class ReceiverFactory
{
public:
	virtual Receiver *getReceiver() = 0;
};