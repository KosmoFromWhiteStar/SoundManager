#include "../Headers/Enum.h"

DevIniz::DevIniz()
{
	HRESULT hr = CoInitializeEx(NULL, 0);
	HRESULT hsr = CoCreateInstance(d_const._CLSID_MMDeviceEnumerator,
		NULL, CLSCTX_ALL, d_const._IID_IMMDeviceEnumerator, (void**)&enu);
	if (enu == NULL)
	{
		std::cout << "DevIniz is NULL" << std::endl;
	};
}

DevIniz::~DevIniz()
{

	if (dcoll != nullptr) dcoll->Release();
	if (enu != nullptr)   enu->Release();
}

HRESULT DevIniz::inizialaize_IMMDeviceCollection(
	EDataFlow dataFlow,
	DWORD dwStateMask)

{
	enu->EnumAudioEndpoints(dataFlow, dwStateMask, &dcoll);
	return E_NOTIMPL;
}

IMMDevice* DevIniz::Get_Defoult_Device(
	EDataFlow dataFlow,
	ERole role )
{
	IMMDevice* device;
	enu->GetDefaultAudioEndpoint(dataFlow, role, &device);
	return device;
}
