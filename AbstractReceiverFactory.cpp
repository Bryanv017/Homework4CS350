#include "AbstractReceiverFactory.h"
#include "LightReceiver.h"
#include "EngineReceiver.h"

ReceiverFactory* AbstractReceiverFactory::getFactory(std::string receiver)
{
	if (receiver == "Engine") {
		return new EngineReceiver();
	}
	 if (receiver == "Light") {
		return new LightReceiver();
	}
};