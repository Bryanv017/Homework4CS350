#include "EngineReceiver.h"
#include <iostream>

void EngineReceiver::On()
{
	std::cout << "Starting engine\n";
}

void EngineReceiver::Off()
{
	std::cout << "Stopping engine\n";
}

Receiver* EngineReceiver::getReceiver() {
	return new EngineReceiver();
}