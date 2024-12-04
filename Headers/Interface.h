#pragma once
#define DEVICE_INTERFACE
#include <iostream>
#define COBJMACROS
#include <audioclient.h>
#include <endpointvolume.h>
#include <mmdeviceapi.h>
#include <propsys.h>

#include "Data_const.h"

class Device
{
public:

	Device(IMMDevice* _device);
	~Device();
	bool set(const float& _lvl);
	void mute();
	void get_name()const;
	void get_lvl()const;
	void set_default_endpoint(const UINT& _count);
private:
	IAudioEndpointVolume* end_point;
	IMMDevice* device;
	std::wstring device_name;

};