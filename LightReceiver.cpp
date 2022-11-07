#include "LightReceiver.h"
#include <iostream>

void LightReceiver::On()
{
	std::cout << "Turning light on\n";
}

void LightReceiver::Off()
{
	std::cout << "Turning light off\n";
}

Receiver* LightReceiver::getReceiver() {
	return new LightReceiver();
}