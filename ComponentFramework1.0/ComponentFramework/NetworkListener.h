#ifndef NETWORKLISTENER_H
#define NETWORKLISTENER_H

#pragma once
#include "Component.h"

class NetworkListener
{
public:

	NetworkListener(){}
	~NetworkListener(){}

	// Pure Virtual
	virtual void ReceiveNetworkSDLEvent(const SDL_Event& sdlEvent) = 0;
};

#endif