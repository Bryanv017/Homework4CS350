#pragma once
class Receiver
{
public:
	virtual void On() = 0;
	virtual void Off() = 0;
};