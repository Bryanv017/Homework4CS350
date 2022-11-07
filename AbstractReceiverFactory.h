#pragma once
#include "ReceiverFactory.h"
#include <string>

class AbstractReceiverFactory
{
public:
	static ReceiverFactory* getFactory(std::string receiver);
};