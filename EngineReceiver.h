#pragma once

#include "ReceiverFactory.h"

class EngineReceiver : public Receiver, public ReceiverFactory
{
public:
	// Implementation of the Receiver
	void On();
	void Off();
	Receiver* getReceiver();
};

