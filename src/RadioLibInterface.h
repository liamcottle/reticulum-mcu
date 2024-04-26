#pragma once

#include <Interface.h>
#include <Bytes.h>
#include <Type.h>

#include <RadioLib.h>
#include "variants/config.h"
#include "variants/init.h"

#include <stdint.h>

class RadioLibInterface : public RNS::Interface {

public:
	//z def get_address_for_if(name):
	//z def get_broadcast_for_if(name):

public:
	//p def __init__(self, owner, name, device=None, bindip=None, bindport=None, forwardip=None, forwardport=None):
	RadioLibInterface(const char* name = "RadioLibInterface");
	virtual ~RadioLibInterface();

	bool start();
	void stop();
	void loop();

	virtual inline std::string toString() const { return "RadioLibInterface[" + name() + "]"; }

private:
	virtual void on_incoming(const RNS::Bytes& data);
	virtual void on_outgoing(const RNS::Bytes& data);

private:
	#ifdef USE_SX1262
	SX1262 radio = nullptr;
	#else
	SX1276 radio = nullptr;
	#endif

	const uint16_t HW_MTU = 508;
	//uint8_t buffer[Type::Reticulum::MTU] = {0};
	const uint8_t message_count = 0;
	RNS::Bytes transmit_buffer;
	RNS::Bytes receive_buffer;

	const long frequency = 915E6;

	// Reticulum default
	const long bandwidth = 125E3;
	const int spreading = 8;
	const int coding = 5;
	const int power = 7;

};
