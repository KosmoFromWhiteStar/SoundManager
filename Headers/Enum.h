#pragma once
#include "Header.h"

class DevIniz
{
public:
	DevIniz();
	~DevIniz();

	HRESULT inizialaize_IMMDeviceCollection
	(
		/* [annotation][in] */ 
		EDataFlow dataFlow = eRender,
		/* [annotation][in] */
		DWORD dwStateMask = DEVICE_STATE_ACTIVE
	);

	IMMDevice* Get_Defoult_Device
	(
		/* [annotation][in] */
		EDataFlow dataFlow = eRender,
		/* [annotation][in] */
		ERole role = eConsole
	);

private:
	IMMDeviceCollection* dcoll = nullptr;
	IMMDeviceEnumerator* enu = nullptr;

};
