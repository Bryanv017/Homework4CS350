#include <iostream>
#include "Receiver.h"
#include "AbstractReceiverFactory.h"

int main() 
{
	std::cout << "Controlling the engine" << std::endl;
	Receiver* reciever = AbstractReceiverFactory::getFactory("Light")->getReceiver();
	reciever->On();
	reciever->Off();
	
}