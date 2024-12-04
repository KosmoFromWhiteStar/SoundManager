#pragma once
#include "../Headers/Interface.h"

Device::Device(IMMDevice* _device)
{
	device = _device;
	IPropertyStore* property_store;
	device->OpenPropertyStore(STGM_READWRITE, &property_store);
	PROPVARIANT name;
	PropVariantInit(&name);
	property_store->GetValue(d_const._PKEY_Device_FriendlyName, &name);
	device_name = name.pwszVal;

	///
	property_store->Release();
}

Device::~Device()
{
	if (end_point) end_point->Release();
	if (device)    device->Release();
}

bool Device::set(const float& _lvl)
{
	if (!end_point)
	{
		auto resukt = device->Activate(IID_IAudioEndpointVolume, CLSCTX_ALL, NULL, (void**)&end_point);
		if (end_point == nullptr)
		{
			return false;
		}
	}
	end_point->SetMasterVolumeLevelScalar(_lvl, NULL);
}

void Device::get_lvl() const
{

}

void Device::set_default_endpoint(const UINT& _count)
{

}
