#pragma once
#include "ReceiverFactory.h"

class LightReceiver : public Receiver, public ReceiverFactory
{
public:
	// Implementation of the Receiver
	void On();
	void Off();
	Receiver* getReceiver();
};
