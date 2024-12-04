#pragma once
#include <guiddef.h>


DEFINE_GUID(IID_IChannelAudioVolume,  0x1c158861, 0xb533, 0x4b30, 0xb1, 0xcf, 0xe8, 0x53, 0xe5, 0x1c, 0x59, 0xb8 );
DEFINE_GUID(IID_ISimpleAudioVolume,   0x87ce5498, 0x68d6, 0x44e5, 0x92, 0x15, 0x6d, 0xa4, 0x7e, 0xf8, 0x83, 0xd8 );
DEFINE_GUID(IID_IAudioEndpointVolume, 0x5cdf2c82, 0x841e, 0x4546, 0x97, 0x22, 0x0c, 0xf7, 0x40, 0x78, 0x22, 0x9a );
DEFINE_GUID(IID_IDeviceTopology,	  0x2a07407e, 0x6497, 0x4a18, 0x97, 0x87, 0x32, 0xf7, 0x9b, 0xd0, 0xd9, 0x8f );
DEFINE_GUID(IID_IAudioVolumeLevel,    0x7fb7b48f, 0x531d, 0x44a2, 0xbc, 0xb3, 0x5a, 0xd5, 0xa1, 0x34, 0xb3, 0xdc );

static struct data_const
{
	GUID _CLSID_MMDeviceEnumerator = { 0xbcde0395, 0xe52f, 0x467c, {0x8e,0x3d, 0xc4,0x57,0x92,0x91,0x69,0x2e} };
	const GUID _IID_IMMDeviceEnumerator = { 0xa95664d2, 0x9614, 0x4f35, {0xa7,0x46, 0xde,0x8d,0xb6,0x36,0x17,0xe6} };
	const PROPERTYKEY _PKEY_Device_FriendlyName = {
			{0xa45c254e, 0xdf1c, 0x4efd,
			{0x80, 0x20, 0x67, 0xd1, 0x46, 0xa8, 0x50, 0xe0}
			}, 
			14 };
	const GUID _IID_IAudioClient = { 0x1cb9ad4c, 0xdbfa, 0x4c32, {0xb1,0x78, 0xc2,0xf5,0x68,0xa7,0x03,0xb2} };

}const d_const;